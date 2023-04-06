; This file provides highlighting by mapping tree-sitter queries to _names_. 
; Names are then mapped to theme colors afterwards

; KEYWORDS
"def"       @keyword
"enum"      @keyword
"case"      @keyword
; "instance"  @keyword
; "class"     @keyword
; "with"      @keyword
"let"       @keyword
"if"        @keyword
"else"      @keyword
"match"     @keyword
"region"    @keyword
"ref"       @keyword
"deref"     @keyword
; "law"       @keyword
; "inject"    @keyword
; "into"      @keyword
; "query"     @keyword
; "select"    @keyword
"mod"       @keyword
"use"       @keyword
"forM"      @keyword
"forA"      @keyword
"foreach"   @keyword
"pub"       @keyword
"override"  @keyword
"sealed"    @keyword
"inline"    @keyword
"lawful"    @keyword
"opaque"    @keyword

; OPERATORS
"not"   @keyword.operator
"and"   @keyword.operator
"or"    @keyword.operator
"mod"   @keyword.operator
"rem"   @keyword.operator
"yield" @keyword.operator
; "par"       @keyword.operator
; "spawn"     @keyword.operator
; "lazy"      @keyword.operator
; "force"     @keyword.operator
"|||" @operator
"^^^" @operator
"&&&" @operator
">>>" @operator
"<<<" @operator
"=="  @operator
"!="  @operator
"<=>" @operator
"<+>" @operator
"<="  @operator
"<"   @operator
">"   @operator
">="  @operator
"*"   @operator
"**"  @operator
"/"   @operator
"+"   @operator
"-"   @operator
"@"   @operator
(user_operator)   @operator
(infix_function)  @operator

; TYPES
(type_primitive)         @type.builtin
(polymorphic_identifier) @type
(type (identifier)       @type)

; LITERALS
(integer) @number.integer
(float)   @number.float
(char)    @character
(string)  @string
(boolean) @constant.builtin
(nil)     @constant.builtin
(unit)    @constant.builtin
(map)     @constant.builtin
(list)    @constant.builtin
(set)     @constant.builtin
(vector)  @constant.builtin


; PUNCTUATION
"["  @punctuation.bracket
"]"  @punctuation.bracket
"{"  @punctuation.bracket
"}"  @punctuation.bracket
"("  @punctuation.bracket
")"  @punctuation.bracket
"."  @punctuation.delimiter
","  @punctuation.delimiter
":"  @punctuation.delimiter
"\\" @punctuation.delimiter
"->" @punctuation
"_"  @punctuation
"=>" @punctuation.delimiter

; ENUMS
(enum_declaration name: (identifier) @type.definition)
(constructor (identifier) @type.definition)

; MODULES
(module_declaration name: (identifier) @namespace)

; FUNCTIONS
(function_declaration name: (identifier) @function)
(parameters (parameter) @parameter)
(type_parameters (type_parameter name: (identifier) @parameter))
(type_parameters (type_parameter kind: (kind) @type.builtin))
(effect) @label
(polymorphic_effect) @label
(annotation) @attribute

; COMMENTS
(line_comment) @comment

(ERROR) @error


