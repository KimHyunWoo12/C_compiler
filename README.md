
1. make c compiler
yacc -d parse.y //can use temp_parse or tmp_parse
flex scan.l
cc -o mycc main.c syntax.c semantic.c gen.c lex.yy.c y.tab.c

or

yacc -d parse.y //can use temp_parse or tmp_parse
flex scan.l
cc -o mycc main.c syntax.c semantic.c gen.c lex.yy.c y.tab.c print.c print_semantic.c

2. make excute program
yacc -d interp.y
flex interp.l
cc -0 interp y.tab.c lex.yy.c interp.c lib.c

./mycc "c program file"
./interp a.asm
