%{
	#include <stdlib.h>
	#include <string.h>
	#include <stdio.h>
	#include "header.c"
	FILE *yyin;
	
	#define YYSTYPE YACC
	int yylex();
	char* type;
	int err = 0;
	FILE* fp;
	
	int scope = 0;
	

	AST* ast;
	TREE* nptr=NULL;

	TREE* newnode(char*,TREE*,TREE*,TREE*,TREE*);
	TREE* newleaf(char*,char*);
	void display(TREE*);
	void yyerror(char* s);
	void printBT(char* prefix, TREE* node, int isLeft);
	
%}
%token T_IMPORT T_CLASS T_PUBLIC T_PRIVATE T_PROTECTED T_STATIC T_FINAL T_VOID T_INT T_CHAR T_DOUBLE T_IF T_ELSE T_SWITCH T_CASE T_DEFAULT T_BREAK T_CONTINUE T_RETURN T_NEW T_INC T_DEC T_SHA T_SHS T_SHM T_SHD T_SHAND T_SHO T_SHC T_SHMOD T_OR T_AND T_EQ T_NE T_GTE T_LTE T_LS T_RS T_NUM T_ID T_STRING T_ARGS T_PRINT

%%
Start:Import_S Start{$$.ptr=newnode("import statement",$1.ptr,$2.ptr,nptr,nptr);
	ast->root  = $$.ptr;}|Class_declaration{$$.ptr = $1.ptr;
										ast->root = $$.ptr;};
Import_S:T_IMPORT T_ID'.'T_ID'.''*'';'{$1.ptr=newleaf("keyword","import");};
Class_declaration:Modifier T_CLASS CLASSNAME '{'Class_body'}' {$$.ptr=newnode("CLASS DECLARATION",$1.ptr,$3.ptr,$5.ptr,nptr);};
CLASSNAME:T_ID {$$.ptr=newleaf("classname",$1.v);};
Class_body:Global_variable_declaration Class_body {$$.ptr=newnode("CLASS BODY",$1.ptr,$2.ptr,nptr,nptr);}|Method_declaration Class_body {$$.ptr=newnode("CLASS BODY",$1.ptr,$2.ptr,nptr,nptr);}| {$$.ptr=nptr;};
Global_variable_declaration:Modifier Variable_declaration {$$.ptr=newnode("GLOBAL VARIABLE DECLARATION",$1.ptr,$2.ptr,nptr,nptr);};
Method_declaration:Modifier Type T_ID'('Parameters')'Block {$$.ptr=newnode("METHOD DECLARATION",$1.ptr,$2.ptr,$5.ptr,$7.ptr);};
Modifier:W1 W2 W3{$$.ptr=newnode("modifier",$1.ptr,$2.ptr,$3.ptr,nptr);};
W1:T_PUBLIC {$$.ptr=newleaf("access modifier",$1.v);};
W2:T_STATIC {$$.ptr=newleaf("access modifier",$1.v);};|{$$.ptr=nptr;};
W3:T_FINAL {$$.ptr=newleaf("access modifier",$1.v);};|{$$.ptr=nptr;};
Parameters:List_of_parameters {$$.ptr=$1.ptr;};
List_of_parameters:Type T_ID {$$.ptr=$1.ptr;}|Type T_ID',' Parameters {$$.ptr=newnode("parameter list",$1.ptr,$4.ptr,nptr,nptr);}|Type'['']' T_ARGS {$$.ptr=$1.ptr;};
Block:'{'S'}' {$$.ptr=$2.ptr;};
S:Assignment S {$$.ptr=newnode("ASSIGNMENT STATEMENT",$1.ptr,$2.ptr,nptr,nptr);}|T_BREAK';' S {$$.ptr=$3.ptr;}|T_CONTINUE';' S {$$.ptr=$3.ptr;}|T_IF'('Expression')'S {$$.ptr=newnode("IF STATEMENT",$3.ptr,$5.ptr,nptr,nptr);}|T_IF '('Expression')' Block S {$$.ptr=newnode("IF STATEMENT",$3.ptr,$5.ptr,$6.ptr,nptr);}|T_IF'('Expression')'Block T_ELSE Block {$$.ptr=newnode("IF ELSE STATEMENT",$3.ptr,$5.ptr,$7.ptr,nptr);}|T_RETURN Expression';' S {$$.ptr=newnode("RETURN STATEMENT",$2.ptr,$4.ptr,nptr,nptr);}|T_SWITCH'('Expression')' '{'SwitchBlock'}' S {$$.ptr=newnode("SWITCH STATEMENT",$3.ptr,$6.ptr,$8.ptr,nptr);}|Variable_declaration S {$$.ptr=newnode("VARIABLE DECLARATION/INITIALISATION STATEMENT",$1.ptr,$2.ptr,nptr,nptr);}|Array_declaration';' S {$$.ptr=newnode("ARRAY DECLARATION STATEMENT",$1.ptr,$3.ptr,nptr,nptr);}|Array_initialisation';' S {$$.ptr=newnode("ARRAY INITIALISATION STATEMENT",$1.ptr,$3.ptr,nptr,nptr);}| T_PRINT'('Expression')' ';' S {$$.ptr=newnode("PRINT STATEMENT",$3.ptr,$6.ptr,nptr,nptr);}|
H';' {$$.ptr=newnode("STATEMENT",$1.ptr,nptr,nptr,nptr);}|error ';' S|{$$.ptr=nptr;};
H:Expr W {$$.ptr=newnode("UNARY OPERATION",$1.ptr,$2.ptr,nptr,nptr);}| W Expr{$$.ptr=newnode("UNARY OPERATION",$1.ptr,$2.ptr,nptr,nptr);};
W:T_INC {$$.ptr = newleaf("increment",$1.v);}| T_DEC {$$.ptr = newleaf("decrement",$1.v);}
SwitchBlock:SwitchLabel S SwitchBlock {$$.ptr=newnode("switch",$1.ptr,$2.ptr,$3.ptr,nptr);}| {$$.ptr=nptr;};
SwitchLabel:T_CASE Expression {$1.ptr=newleaf("keyword","case");$$.ptr=$2.ptr;}|T_DEFAULT {$$.ptr=newleaf("keyword","default");};
Variable_declaration:Type Expr '=' Expression Identifier_list';' {$$.ptr=newnode("variable initialisation",$1.ptr,$2.ptr,$4.ptr,$5.ptr);}|Type Expr Identifier_list';' {$$.ptr=newnode("variable declaration",$1.ptr,$2.ptr,$3.ptr,nptr);};
Identifier_list:','Expr '=' Expression Identifier_list {$$.ptr=newnode("identifier list",$2.ptr,$4.ptr,$5.ptr,nptr);}|','T_ID Identifier_list {$$.ptr=newnode("identifier list",$2.ptr,$3.ptr,nptr,nptr);}|{$$.ptr=nptr;};
Array_declaration:Type B Expr {$$.ptr=newnode("array declaration",$1.ptr,$2.ptr,$3.ptr,nptr);}|Type Expr B {$$.ptr=newnode("array declaration",$1.ptr,$2.ptr,$3.ptr,nptr);};
B:'['']'B {$$.ptr=$3.ptr;}|'['']';
BB:'[' BNUM ']' {$$.ptr=$2.ptr;} | '[' BNUM ']' BB {$$.ptr=newnode("bracket",$2.ptr,$4.ptr,nptr,nptr);}; 
BNUM : T_NUM {$$.ptr=newleaf("num",$1.v);}| T_ID {$$.ptr=newleaf("id",$1.v);};
Array_initialisation:Array_declaration Assignment_operator K {$$.ptr=newnode($2.v,$1.ptr,$2.ptr,$3.ptr,nptr);};
K:V {$$.ptr=$1.ptr;}|V','K {$$.ptr=newnode(",",$1.ptr,$3.ptr,nptr,nptr);}|T_NEW Type BB {$$.ptr=newnode("new",$2.ptr,$3.ptr,nptr,nptr);};
V:T_NUM {$$.ptr=newleaf("num",$1.v);}|R {$$.ptr=$1.ptr;};
R:'{'K'}' {$$.ptr=$2.ptr;};
Type:T_INT {$$.ptr=newleaf("datatype",$1.v);}|T_DOUBLE {$$.ptr=newleaf("datatype",$1.v);}|T_CHAR {$$.ptr=newleaf("datatype",$1.v);}|T_STRING {$$.ptr=newleaf("datatype",$1.v);}|T_VOID {$$.ptr=newleaf("datatype",$1.v);};
Assignment:Expr Assignment_operator Expression';' {$$.ptr=newnode($2.v,$1.ptr,$3.ptr,nptr,nptr);};
Assignment_operator:'='{$$.v = strdup($1.v);}|T_SHA{$$.v = strdup($1.v);} |T_SHS{$$.v = strdup($1.v);} |T_SHM {$$.v = strdup($1.v);}|T_SHD{$$.v = strdup($1.v);} |T_SHAND{$$.v = strdup($1.v);} |T_SHO{$$.v = strdup($1.v);} |T_SHC{$$.v = strdup($1.v);} |T_SHMOD{$$.v = strdup($1.v);};
Operators:T_OR {$$.v = strdup($1.v);}|T_AND{$$.v = strdup($1.v);}|'|'{$$.v = strdup($1.v);}|'^'{$$.v = strdup($1.v);}|'&'{$$.v = strdup($1.v);} |T_EQ {$$.v = strdup($1.v);} |T_NE {$$.v = strdup($1.v);}|'<' {$$.v = strdup($1.v);}|'>' {$$.v = strdup($1.v);} |T_LTE {$$.v = strdup($1.v);}|T_GTE {$$.v = strdup($1.v);} |T_LS {$$.v = strdup($1.v);} |T_RS {$$.v = strdup($1.v);} |'+' {$$.v = strdup($1.v);}|'-' {$$.v = strdup($1.v);} |'*' {$$.v = strdup($1.v);}|'/'{$$.v = strdup($1.v);} |'%'{$$.v = strdup($1.v);};
Expression:Expr {$$.ptr=$1.ptr;}|Expr Operators Expression {$$.ptr=newnode($2.v,$1.ptr,$3.ptr,nptr,nptr);};
Expr:'('Expression')' {$$.ptr=$2.ptr;}|T_NUM {$$.ptr=newleaf("num",$1.v);}|T_ID {$$.ptr=newleaf("id",$1.v);};

%%
void yyerror(char *s)
{
	yynerrs+=1;
}
int main(int argc, char* argv[])
{
	fp = fopen("AST2.txt", "w");
	ast = (AST*)malloc(sizeof(AST));
	ast->root = NULL;
	yyin = fopen(argv[1], "r");
	if(!yyparse())
	{
		
		printf("\nParsing succesful\n");
		printf("AST generated\n");

		fprintf(fp,"Abstract Syntax Tree\n");
		//display(ast->root);
		
		printBT("",ast->root,0);
		fprintf(fp,"\n");
		fclose(fp);
		return 0;
	}
	else
	{
		printf("Unsuccessful\n");
	}
	return 0;
}


TREE* newnode(char* o,TREE* c1,TREE* c2,TREE* c3,TREE* c4)
{
	TREE* temp = (TREE*)malloc(sizeof(TREE));
	temp->opr= strdup(o);
	temp->value = strdup("N/A");
	temp->c1 = c1;
	temp->c2 = c2;
	temp->c3 = c3;
	temp->c4 = c4;
	return temp;
}

TREE* newleaf(char* o, char* v)
{
	TREE* temp = (TREE*)malloc(sizeof(TREE));
	temp->opr = strdup(o);
	temp->value = strdup(v);
	temp->c1 = NULL;
	temp->c2 = NULL;
	temp->c3 = NULL;
	temp->c4 = NULL;
	return temp;
}

void display(TREE* r)
{	
	
	if(r==NULL)
		return;
	if(r->c1==NULL && r->c2==NULL && r->c3==NULL)
	{
		printf("(");
		printf("%s\t%s)\n",r->opr,r->value);
	}
	else
		printf("%s\n",r->opr);
	display(r->c1);
	display(r->c2);
	display(r->c3);
	display(r->c4);
}

void printBT(char* prefix, TREE* node, int isLeft)
{	
	
	if(node==NULL)
		return;
    if( node != NULL)
    {
       fprintf(fp,"%s",prefix);

       	if(isLeft==0)
       		fprintf(fp,"└──");
       	else
       		fprintf(fp,"├──");
 
        // print the value of the node

     if(node->c1==NULL && node->c2==NULL && node->c3==NULL && node->c4==NULL)
	{
		
		fprintf(fp,"(%s, %s)\n",node->opr,node->value);
	}
	else
		fprintf(fp,"%s\n",node->opr);
        // enter the next tree level - left and right branch
        char new_prefix[1000];
       	if(isLeft==0){
       		strcpy(new_prefix,prefix);
       		strcat(new_prefix,"    ");
       	}
       	else
       		{
       		strcpy(new_prefix,prefix);
       		strcat(new_prefix,"│   ");
       	}


     if(node->c1!=NULL && node->c2==NULL && node->c3==NULL && node->c4==NULL)
	{
		printBT(new_prefix, node->c1, 0);
        printBT(new_prefix, node->c2, 0);
        printBT(new_prefix, node->c3, 0);
        printBT(new_prefix, node->c4, 0);
        return;
	}
	if(node->c1!=NULL && node->c2!=NULL && node->c3==NULL && node->c4==NULL)
	{
		printBT(new_prefix, node->c1, 1);
        printBT(new_prefix, node->c2, 0);
        printBT(new_prefix, node->c3, 0);
        printBT(new_prefix, node->c4, 0);
        return;
	}
	if(node->c1!=NULL && node->c2!=NULL && node->c3!=NULL && node->c4==NULL)
	{
		printBT(new_prefix, node->c1, 1);
        printBT(new_prefix, node->c2, 1);
        printBT(new_prefix, node->c3, 0);
        printBT(new_prefix, node->c4, 0);
        return;
	}	
	if(node->c1!=NULL && node->c2!=NULL && node->c3!=NULL && node->c4!=NULL)
	{
		printBT(new_prefix, node->c1, 1);
        printBT(new_prefix, node->c2, 1);
        printBT(new_prefix, node->c3, 1);
        printBT(new_prefix, node->c4, 0);
        return;
	}	
        
    }
    	
}




