Section : B

Project Title: Building a Compiler of java in C

Team Members: Jnanesh D(PES1201701822) , Sujay Gad(PES1201700177) , Mayur RB(PES1201700714)

Project Guide : Preet Kanwal 

Project Abstract: A mini java compiler with front end and back end using lex yacc and python was built as a part of Compiler Design Course and Laboratory . Constructs implemented are if else and switch

Code Execution : 

Instructions to execute


Inside the AST folder
lex AST.l
yacc -d AST.y
gcc lex.yy.x y.tab.c -ll
./a.out c.java

Inside the ICG folder
lex icg.l
yacc -d lex.y
gcc lex.yy.c y.tab.c -ll
./a.out c.java

Output of the ICG(icg.txt) should be copied to the OPTIM folder to optimise
Inside the OPTIM folder
lex opt.l
yacc -d opt.y
gcc lex.yy.c y.tab.c -ll
./a.out


Output of the OPTMIZATION (Optimised.txt) to be copied to the Target Code folder
python basic_block.py > input3.txt
python reg.py > output.txt

Target code will be in output.txt
