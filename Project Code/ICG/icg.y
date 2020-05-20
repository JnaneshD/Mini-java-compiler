%{
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<stdbool.h>
    #include<limits.h>
	#include "header.c"			
	#define YYSTYPE YACC
	FILE *yyin;
	FILE *fp;
	int yylex();

	void yyerror(const char *);
	
	
	
	FILE *yyin;
	int yylex();
	
	int i =0;
	
	char* newLabel(int *ln);
	char* newTemp(int *tn);
	int lbflag = 0;
	int tn = 1;
	int ln = 1;
    int z;	
    int ss=0;
    NODE *a;
    LIST *l;
    typedef struct Stack { 
    int top; 
    unsigned capacity; 
    int* array; 
    }STACK; 
    STACK* s;
    void append(LIST *a,char *b,char *c);
    char* search(LIST* a,char *b);
    void print(LIST* c);
    int isFull(STACK* s);
    int isEmpty(STACK* s);
    void push(STACK* s, int item);
    int pop(STACK* s); 
    int peek(STACK* s);
    char* pp;
    char* qq;
    char* rr;
    char* tt;
    int count=1;
	
%}
%token T_IMPORT T_CLASS T_PUBLIC T_PRIVATE T_PROTECTED T_STATIC T_FINAL T_VOID T_INT T_CHAR T_DOUBLE T_IF T_ELSE T_SWITCH T_CASE T_DEFAULT T_BREAK T_CONTINUE T_RETURN T_NEW T_INC T_DEC T_SHA T_SHS T_SHM T_SHD T_SHAND T_SHO T_SHC T_SHMOD T_OR T_AND T_EQ T_NE T_GTE T_LTE T_LS T_RS T_NUM T_ID T_STRING T_ARGS T_PRINT

%%
Start:Import_S Start|{l=(LIST*)malloc(sizeof(LIST));l->head=NULL;s=(STACK*)malloc(sizeof(STACK));s->capacity = 10;s->top = -1;s->array = (int*)malloc(s->capacity * sizeof(int)); }Class_declaration;
Import_S:T_IMPORT T_ID'.'T_ID'.''*'';';
Class_declaration:Modifier T_CLASS CLASSNAME '{'Class_body'}';
CLASSNAME:T_ID;
Class_body:Global_variable_declaration Class_body |Method_declaration Class_body |;
Global_variable_declaration:Modifier Variable_declaration;
Method_declaration:Modifier Type T_ID'('Parameters')'Block;
Modifier:W1 W2 W3;
W1:T_PUBLIC;
W2:T_STATIC|;
W3:T_FINAL|;
Parameters:List_of_parameters;
List_of_parameters:Type T_ID|Type T_ID',' Parameters|Type'['']' T_ARGS;
Block:'{'S  '}';
S:Assignment S |
T_BREAK';' {if(ss==0){ss=1;$$.addr=newLabel(&ln);tt=$$.addr;$$.code = (char*)malloc(sizeof(char)*100);sprintf($$.code,"goto %s\n",$$.addr); fprintf(fp,"%s",$$.code);}else{$$.code = (char*)malloc(sizeof(char)*100);sprintf($$.code,"goto %s\n",tt);fprintf(fp,"%s",$$.code);}} S 
|T_CONTINUE';' S
|T_IF '('Expression')' {$$.tr=newLabel(&ln);$$.addr=newLabel(&ln);pp=$$.addr;$$.code = (char*)malloc(sizeof(char)*100);sprintf($$.code,"if %s goto %s\ngoto LABEL%d\n%s:",$3.addr,$$.tr,count,$$.tr);count+=1;fprintf(fp,"%s",$$.code);} Block {$$.tr=newLabel(&ln);qq=$$.tr;$$.code = (char*)malloc(sizeof(char)*100);sprintf($$.code,"goto %s\n",$$.tr);fprintf(fp,"%s",$$.code);} WW {$$.code = (char*)malloc(sizeof(char)*100);sprintf($$.code,"%s:",qq);fprintf(fp,"%s",$$.code);}S
| T_RETURN Expression';' S
|T_SWITCH'('Expression')' {rr=$3.addr;} '{'SwitchBlock'}' {if(ss==1){$$.addr=tt;$$.code = (char*)malloc(sizeof(char)*100);sprintf($$.code,"%s:",$$.addr); fprintf(fp,"%s",$$.code);}} S 
|Variable_declaration S|Array_declaration';' S
|Array_initialisation';' S 
| T_PRINT'('Expression')' ';' S 
|H';' 
|;
WW:T_ELSE {count-=1;$$.code = (char*)malloc(sizeof(char)*100);sprintf($$.code,"LABEL%d:",count);fprintf(fp,"%s",$$.code);} Block|;
H:Expr W | W Expr;
W:T_INC | T_DEC;
SwitchBlock:SwitchLabel S SwitchBlock | ;
SwitchLabel:T_CASE Expression {$$.addr=newLabel(&ln);$$.tr=newTemp(&tn);$$.code = (char*)malloc(sizeof(char)*100);sprintf($$.code,"%s = %s==%s\nif %s goto %s\n%s:",$$.tr,rr,$2.addr,$$.tr,$$.addr,$$.addr);fprintf(fp,"%s",$$.code);} |T_DEFAULT {$$.addr=newLabel(&ln);$$.code = (char*)malloc(sizeof(char)*100);sprintf($$.code,"%s:",$$.addr);fprintf(fp,"%s",$$.code);} ;
Variable_declaration:Type Expr '=' Expression Identifier_list';' {append(l,$4.addr,$2.addr);$$.code = (char*)malloc(sizeof(char)*100); sprintf($$.code,"%s = %s\n",$2.addr,$4.addr);fprintf(fp,"%s",$$.code);}; |Type Expr Identifier_list';';
Identifier_list:','Expr '=' Expression Identifier_list |','T_ID Identifier_list |;
Array_declaration:Type B Expr |Type Expr B ;
B:'['']'B |'['']';
BB:'[' BNUM ']'  | '[' BNUM ']' BB ; 
BNUM : T_NUM | T_ID ;
Array_initialisation:Array_declaration Assignment_operator K ;
K:V |V','K |T_NEW Type BB ;
V:T_NUM |R ;
R:'{'K'}' ;
Type:T_INT |T_DOUBLE |T_CHAR |T_STRING |T_VOID ;
Assignment:Expr Assignment_operator Expression';' {append(l,$3.addr,$$.addr);$$.addr=strdup($1.v);$$.code = (char*)malloc(sizeof(char)*200);sprintf($$.code,"%s = %s\n",$$.addr,$3.addr);fprintf(fp,"%s",$$.code);} | Expr Assignment_operator Expr'['Expression']' {$$.a = newTemp(&tn);$$.addr=newTemp(&tn);$$.code = (char*)malloc(sizeof(char)*100);sprintf($$.code,"%s = 4 * %s\n%s = %s + %s\n%s = %s\n",$$.a,$5.addr,$$.addr,$3.addr,$$.a,$1.addr,$$.addr);fprintf(fp,"%s",$$.code);}';' | Expr'['Expression']' Assignment_operator Expression {$$.a = newTemp(&tn);$$.addr=newTemp(&tn);$$.code = (char*)malloc(sizeof(char)*100);sprintf($$.code,"%s = 4 * %s\n%s = %s + %s\n",$$.a,$3.addr,$$.addr,$1.addr,$$.a);fprintf(fp,"%s",$$.code);} ';'
Assignment_operator:'=' {$$.code = strdup("=");}|T_SHA {$$.code = strdup("+");} |T_SHS {$$.code = strdup("-");} |T_SHM {$$.code = strdup("*");} |T_SHD {$$.code = strdup("/");}  |T_SHAND {$$.code = strdup("&");} |T_SHO {$$.code = strdup("|");} |T_SHC {$$.code = strdup("^");} |T_SHMOD {$$.code = strdup("%");};
Operators:T_OR {$$.addr = strdup($1.v); $$.code = strdup("");} |T_AND{$$.addr = strdup($1.v); $$.code = strdup("");}|'|'{$$.addr = strdup($1.v); $$.code = strdup("");}|'^'{$$.addr = strdup($1.v); $$.code = strdup("");}|'&' {$$.addr = strdup($1.v); $$.code = strdup("");} |T_EQ {$$.addr = strdup($1.v); $$.code = strdup("");}  |T_NE|'<' {$$.addr = strdup($1.v); $$.code = strdup("");} |'>' {$$.addr = strdup($1.v); $$.code = strdup("");} |T_LTE {$$.addr = strdup($1.v); $$.code = strdup("");} |T_GTE {$$.addr = strdup($1.v); $$.code = strdup("");}  |T_LS {$$.addr = strdup($1.v); $$.code = strdup("");}  |T_RS {$$.addr = strdup($1.v); $$.code = strdup("");}  |'+' {$$.addr = strdup($1.v); $$.code = strdup("");}|'-' {$$.addr = strdup($1.v); $$.code = strdup("");}|'*' {$$.addr = strdup($1.v); $$.code = strdup("");} |'/' {$$.addr = strdup($1.v); $$.code = strdup("");} |'%' {$$.addr = strdup($1.v); $$.code = strdup("");};
Expression:Expr |Expr Operators Expression {$$.addr = newTemp(&tn);$$.code = (char*)malloc(sizeof(char)*100); sprintf($$.code,"%s = %s %s %s\n",$$.addr,$1.addr,$2.addr,$3.addr);fprintf(fp,"%s",$$.code);};
Expr:'('Expression')' |T_NUM {$$.addr = strdup($1.v);}|T_ID {$$.addr = search(l,$1.v);};

%%


char* newLabel(int *ln)
{
	char *s = (char*)malloc(4*sizeof(char));
	sprintf(s,"L%d",*ln);
	//printf("%s",s);
	(*ln)++;
	return s;
}
char* newTemp(int *tn)
{
	char *s = (char*)malloc(4*sizeof(char));
	sprintf(s,"T%d",*tn);
	//printf("%s",s);
	(*tn)++;
	return s;
}


void append(LIST *a,char *b,char *c)
{
    //printf("%s %s\n",b,c);
    if(atoi(b) || strcmp(b,"0")==0)
    {
        return;
    }
    else
    {
        //printf("%s %s\n",b,c);
        NODE *p=(NODE*)malloc(sizeof(NODE));
        NODE *q=NULL;
        p->temp=b;
        p->var=c;
        p->next=a->head;
        a->head=p;
        print(a);
    }

}
char* search(LIST* a,char *b)
{
    NODE* c=a->head;
    //printf("%s 1\n",b);
    while(c!=NULL && strcmp(c->var,b))
    {
        //printf("%s %s\n",c->var,b);
        c=c->next;
    }
    if(c==NULL)
    {
        //printf("%s\n",b);
        return b;
    }
    else
    {
        //printf("%s\n",c->temp);
        return c->temp;
    }
    
}
void print(LIST* c)
{
    NODE* k=c->head;
    while(k!=NULL)
    {
        //printf("%s %s ",k->temp,k->var);
        k=k->next;
    }
    //printf("\n");
}

int isFull(STACK* s) 
{ 
    return s->top == s->capacity - 1; 
} 
  
int isEmpty(STACK* s) 
{ 
    return s->top == -1; 
} 
  

void push(STACK* s, int item) 
{ 
    if (isFull(s)) 
        return; 
    s->array[++s->top] = item; 
    
} 
  

int pop(STACK* s) 
{ 
    if (isEmpty(s)) 
        return INT_MIN; 
    return s->array[s->top--]; 
} 
  

int peek(STACK* s) 
{ 
    if (isEmpty(s)) 
        return INT_MIN; 
    return s->array[s->top]; 
} 

void yyerror(const char *s)
{
	yynerrs+=1;
}
int main(int argc, char* argv[])
{
    
	yyin = fopen(argv[1], "r");
	fp = fopen("icg.txt","w");
	int flag = 1;
	if(!yyparse())
			{printf("Parsing successful \n");flag = 0;}
		else
			{printf("Unsuccessful \n");}
	return flag;
}

