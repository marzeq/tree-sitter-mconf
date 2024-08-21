(string) @string

(escape_sequence) @string.escape

(number) @number

(comment) @comment

(bool) @boolean

(assignment
  key: (_) @property)

(import) @keyword

(import
  key: (_) @property)

(constant) @constant

[
 "["
 "]"
 "{"
 "}"
] @punctuation.bracket

[
 "="
 ","
 "."
] @punctuation.delimiter
