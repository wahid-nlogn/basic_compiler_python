# Wahid Compiler
A very basic compiler in Python 3.N to convert source code(wahid) to C++ code <br/>
This project is heavily inspiered by https://github.com/AZHenley/teenytinycompiler. I will try to add more features into it.<br/>
<br/>
<b>Its current syntex in BNF form</b>:<br/>
```
program ::= {statement} 
statement ::= "PRINT" (expression | string) nl 
   | "IF" comparison "THEN" nl {statement} "ENDIF" nl 
   | "WHILE" comparison "REPEAT" nl {statement} "ENDWHILE" nl 
   | "LABEL" ident nl 
   | "GOTO" ident nl 
   | "LET" ident "=" expression nl 
   | "INPUT" ident nl <br/>
comparison ::= expression (("==" | "!=" | ">" | ">=" | "<" | "<=") expression)+ 
expression ::= term {( "-" | "+" ) term} 
term ::= unary {( "/" | "*" ) unary} 
unary ::= ["+" | "-"] primary 
primary ::= number | ident 
nl ::= '\n'+ 
```
