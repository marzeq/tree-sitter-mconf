generate:
  yarn run tree-sitter generate --no-bindings

parse FILE: generate
  yarn run tree-sitter parse {{FILE}}

highlight FILE: generate
  yarn run tree-sitter highlight {{FILE}}
