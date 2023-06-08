grammar mygrammar;

INT: [0-9]+;
VAR: [a-z]+;
DOT : '.';

IS:'=';

SUB: '-';

ADD: '+';
DIV: '/';
MUL: '*';

SEP: ';';

LBR: '(';
RBR: ')';

float: INT #int
|INT DOT INT #intDOTint
;
WS: [ \t\r\n]->skip;
PRINT: 'print:';

expr: 
  expr (MUL|DIV) expr # exprMULexpr
| expr (ADD|SUB) expr # exprADDexpr
| LBR expr RBR # LexprR
| float # efloat
| VAR IS expr #varISexpr
| VAR #evar
| PRINT expr#print_expr
;
row:
expr SEP# expr_sep
;
prog: row EOF? # oneLineProg
| prog row EOF? # prog_row
;