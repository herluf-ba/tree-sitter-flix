; This file provides highlighting by mapping tree-sitter queries to _names_. 
; Names are then mapped to theme colors afterwards

; KEYWORDS
"def"       @keyword
; "enum"      @keyword
; "case"      @keyword
; "class"     @keyword
; "let"       @keyword
; "if"        @keyword
; "else"      @keyword
; "match"     @keyword
; "region"    @keyword
; "with"      @keyword
; "inject"    @keyword
; "into"      @keyword
; "query"     @keyword
; "select"    @keyword
; "from"      @keyword
; "spawn"     @keyword
; "namespace" @keyword
; "mod"       @keyword
; "use"       @keyword
; "for"       @keyword
; "forM"      @keyword
; "forA"      @keyword
; "foreach"   @keyword
; "pub"       @keyword
; "yield"     @keyword
; "par"       @keyword
; "class"     @keyword
; "law"       @keyword
; "override"  @keyword
; "instance"  @keyword
; "sealed"    @keyword

; OPERATORS
"not" @keyword.operator
"and" @keyword.operator
"or"  @keyword.operator
; "lazy"      @keyword.operator
; "force"     @keyword.operator
; "ref"       @keyword.operator
; "deref"     @keyword.operator
"|||" @operator
"^^^" @operator
"&&&" @operator
">>>" @operator
"<<<" @operator
"=="  @operator
"!="  @operator
"<=>" @operator
"<="  @operator
"<"   @operator
">"   @operator
">="  @operator
"*"   @operator
"/"   @operator
"+"   @operator
"-"   @operator

; TYPES
(type_primitive)  @type.builtin
; (type_generic)    @variable.parameter
(type_identifier) @type

; LITERALS
(integer) @number
(float)   @number
(char)    @string.special
(string)  @string
(boolean) @constant.builtin
(nil)     @constant.builtin
(unit)    @constant.builtin

; PUNCTUATION
; "["  @punctuation.bracket
; "]"  @punctuation.bracket
"("  @punctuation.paren
")"  @punctuation.paren
; "."  @punctuation.delimiter
","  @punctuation.delimiter
"->" @punctuation.to
":"  @punctuation.delimiter

; FUNCTIONS
(function_declaration name: (identifier) @function)

(line_comment) @comment
(ERROR) @error

