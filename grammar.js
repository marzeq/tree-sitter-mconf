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

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice($.assignment, $.constant_assignment, $.object, $.import),

    key: (_) => /(\p{L}|_)(\p{L}|\d|_|)*/u,

    number: (_) => {
      const integer = /-?\d+/;
      const fraction = /-?\d*\.\d+/;

      return choice(integer, fraction);
    },

    // strings can be multi-line
    string: ($) => choice(seq('"', '"'), seq('"', $._string_content, '"')),

    _string_content: ($) =>
      repeat1(choice($.string_content, $.escape_sequence)),

    string_content: (_) => token.immediate(prec(1, /[^\\"]+/)),

    escape_sequence: (_) =>
      token.immediate(seq("\\", /(\"|\\|\/|b|f|n|r|t|u)/)),

    bool: (_) => choice("true", "false"),

    constant: ($) => seq(seq("$", $.key), optional(seq("?", "$", $.key))),

    object: ($) => seq("{", commaSepOptional($.assignment), "}"),

    list: ($) => seq("[", commaSepRequired($._value), "]"),

    _value: ($) =>
      choice($.number, $.string, $.bool, $.constant, $.object, $.list),

    assignment: ($) =>
      seq(field("key", choice($.key, $.string)), "=", $._value),

    constant_assignment: ($) => seq($.constant, "=", $._value),

    import: ($) =>
      seq(
        "@import",
        optional(
          seq(
            "{",
            commaSepRequired(
              repeat(seq(field("key", choice($.key, $.string)), optional("."))),
            ),
            "}",
          ),
        ),
        $.string,
      ),

    comment: (_) => token(seq("#", /.*/)),
  },
});
