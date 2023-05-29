grammar mygrammar;

INT:[0123456789]+;

MUL:'*';
DIV:'/';

SUB:'-';
ADD:'+';

SEP:';';
LBR:'(';
RBR:')';
WS:[ \t\n\r]+ ->skip;


expr:expr(MUL|DIV)expr | expr(ADD|SUB)expr| LBR expr RBR | INT;
row:expr SEP;
prog:row|prog row EOF?;
