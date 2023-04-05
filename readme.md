# tree-sitter-flix
tree-sitter grammar and highlight queries for the (Flix programming language)[https://flix.dev/].
Enables semantic syntax highlighting and navigation (think expand/reduce selection).

Note that this is not an LSP, so it wont provide features like go-to-definition, rename-symbol or suggestions.

#### Todo:
- [x] effects
- [x] kinds
- [x] type arguments
- [x] user defined operators
- [x] infix functions
- [x] `<+>` function compositions
- [x] enums
- [ ] type classes (remember derivations on enums)
- [x] modules
- [ ] regions, ref and deref
- [ ] expression: match
- [ ] expression: if
- [ ] expression: monadic-for
- [ ] expression: foreach
- [ ] use statements
- [x] cons (::) and append (:::)
- [x] List, Set, Map, Chain, Vector and Array litterals
- [x] Record literals and types
- [ ] match lambdas
- [ ] Datalog constraints
- [ ] keywords from (this)[https://doc.flix.dev/identifiers.html]
- [ ] string interpolation
- [ ] greek names
- [ ] block comments
