/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const commaSepRequired1 = (/** @type {RuleOrLiteral} */ rule) =>
  seq(rule, repeat(seq(",", rule)));

const commaSepRequired = (/** @type {RuleOrLiteral} */ rule) =>
  optional(commaSepRequired1(rule));

const commaSepOptional1 = (/** @type {RuleOrLiteral} */ rule) =>
  repeat(seq(rule, optional(",")));

const commaSepOptional = (/** @type {RuleOrLiteral} */ rule) =>
  optional(commaSepOptional1(rule));

module.exports = grammar({
  name: "mconf",
  extras: ($) => [/\s/, $.comment],

  conflicts: ($) => [[$.ternary, $._value]],
  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice($.assignment, $.constant_assignment, $.object, $.import),

    word: (_) => /(\p{L}|_|-)(\p{L}|\d|-|_|)*/u,

    number: (_) => {
      const integer = /-?\d+/;
      const fraction = /-?\d*\.?\d+((?:e|E)(?:-|\+)?\d+)?/;
      const hex = /-?0x[0-9a-fA-F]+/;
      const binary = /-?0b[01]+/;

      return choice(integer, fraction, hex, binary);
    },

    string: ($) => choice(seq('"', '"'), seq('"', $._string_content, '"')),

    _string_content: ($) =>
      repeat1(choice($.string_content, $.escape_sequence)),

    string_content: (_) => token.immediate(prec(1, /[^\\"]+/)),

    string_single_quote: ($) =>
      choice(seq("'", "'"), seq("'", $._string_single_quote_content, "'")),

    _string_single_quote_content: ($) =>
      repeat1(choice($.string_single_quote_content, $.escape_sequence)),

    string_single_quote_content: (_) => token.immediate(prec(1, /[^\\']+/)),

    escape_sequence: (_) =>
      token.immediate(
        seq(
          "\\",
          /(\"|\'|\\|a|b|t|n|v|f|r|e|x[0-9a-fA-F]{2}|u[0-9a-fA-F]{4}|U[0-9a-fA-F]{4})|\$/,
        ),
      ),

    bool: (_) => choice("true", "false", "on", "off", "yes", "no"),

    null: (_) => "null",

    constant: ($) => seq(seq("$", $.word), optional(seq("?", $._value))),

    object: ($) => seq("{", commaSepOptional($.assignment), "}"),

    list: ($) => seq("[", commaSepRequired($._value), "]"),

    ternary: ($) =>
      seq(choice($.constant, $.bool), "~", $._value, "|", $._value),

    _value: ($) =>
      choice(
        $.number,
        $.string,
        $.word,
        $.string_single_quote,
        $.bool,
        $.null,
        $.constant,
        $.object,
        $.list,
        $.ternary,
      ),

    assignment: ($) =>
      seq(
        field("word", choice($.word, $.string, $.string_single_quote)),
        choice("=", ":"),
        $._value,
      ),

    constant_assignment: ($) => seq($.constant, "=", $._value),

    import: ($) =>
      seq(
        "@import",
        optional(
          seq(
            "{",
            commaSepRequired(
              repeat(
                choice(
                  seq(
                    field(
                      "word",
                      choice($.word, $.string, $.string_single_quote),
                    ),
                    optional("."),
                  ),
                  $.constant,
                ),
              ),
            ),
            "}",
          ),
        ),
        choice($.string, $.string_single_quote),
      ),

    comment: (_) => token(seq("#", /.*/)),
  },
});
