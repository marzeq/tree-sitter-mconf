/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const commaSepList1 = (rule) => seq(rule, repeat(seq(",", rule)))

const commaSepList = (rule) => optional(commaSepList1(rule))

const commaSepObj1 = (rule) => repeat(seq(rule, optional(",")))

const commaSepObj = (rule) => optional(commaSepObj1(rule))

module.exports = grammar({
  name: "mconf",
// a
  extras: $ => [
    /\s/,
    $.comment
  ],

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.assignment,
      $.constant_assignment,
      $.object
    ),

    key: $ => /[a-zA-Z][a-zA-Z0-9_]*/,

    number: $ => {
      const integer = /-?\d+/;
      const fraction = /-?\d*\.\d+/;

      return choice(
        integer,
        fraction
      );
    },

    // strings can be multi-line
    string: $ => choice(
      seq('"', '"'),
      seq('"', $._string_content, '"'),
    ),

    _string_content: $ => repeat1(choice(
      $.string_content,
      $.escape_sequence,
    )),

    string_content: _ => token.immediate(prec(1, /[^\\"]+/)),

    escape_sequence: _ => token.immediate(seq(
      '\\',
      /(\"|\\|\/|b|f|n|r|t|u)/,
    )),

    bool: $ => choice(
      "true",
      "false"
    ),

    constant: $ => seq(
      "$",
      $.key
    ),

    object: $ => seq(
      "{",
      commaSepObj($.assignment),
      "}"
    ),

    list: $ => seq(
      "[",
      commaSepList($._value),
      "]"
    ),

    _value: $ => choice(
      $.number,
      $.string,
      $.bool,
      $.constant,
      $.object,
      $.list
    ),

    assignment: $ => seq(
      field("key", $.key),
      "=",
      $._value
    ),

    constant_assignment: $ => seq(
      $.constant,
      "=",
      $._value
    ),

    comment: $ => token(
      seq("#", /.*/)
    )
  }
});

