# Wahid Compiler
A very basic compiler in Python 3.N to convert source code(wahid) to C++ code <br/>
This project is heavily inspiered by https://github.com/AZHenley/teenytinycompiler. I will try to add more features into it.<br/>
<br/>
<b>Its current syntex in BNF form</b>:<br/>
program ::= {statement} <br/>
statement ::= "PRINT" (expression | string) nl <br/>
&emsp;    | "IF" comparison "THEN" nl {statement} "ENDIF" nl <br/>
&emsp;    | "WHILE" comparison "REPEAT" nl {statement} "ENDWHILE" nl <br/>
&emsp;    | "LABEL" ident nl <br/>
&emsp;    | "GOTO" ident nl <br/>
&emsp;    | "LET" ident "=" expression nl <br/>
&emsp;    | "INPUT" ident nl <br/>
comparison ::= expression (("==" | "!=" | ">" | ">=" | "<" | "<=") expression)+ <br/>
expression ::= term {( "-" | "+" ) term} <br/>
term ::= unary {( "/" | "*" ) unary} <br/>
unary ::= ["+" | "-"] primary <br/>
primary ::= number | ident <br/>
nl ::= '\n'+ <br/>
