%option noyywrap
%{
#include "header.c"
#define YYSTYPE YACC
#include "y.tab.h"
#include <stdio.h>
int slct = 0, mlct=0;
extern void yyerror(char *);
void addTokenToFile(char *t, char *s);
int fg = 0;
int yylineno;
%}
%%
["\t"]*"//".* {slct++;}
"/*"        {fg+=1; mlct++;}
"*/"        {fg-=1;}
"import" 	{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_IMPORT;}}
"System.out.println" {if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_PRINT;}}
"class" 	{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_CLASS;}}
"public" 	{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_PUBLIC;}}
"private" 	{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_PRIVATE;}}
"protected" 	{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_PROTECTED;}}
"static" 	{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_STATIC;}}
"final" 	{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_FINAL;}}
"else"      	{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_ELSE;}}
"void"		{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_VOID;}}
"int" 		{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_INT;}}
"String"	{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_STRING;}}
"args"		{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_ARGS;}}
"char"		{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_CHAR;}}
"double"	{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_DOUBLE;}}
"if" 		{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_IF;}}
"switch"	{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_SWITCH;}}
"case"		{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_CASE;}}
"default"	{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_DEFAULT;}}
"break"		{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_BREAK;}}
"continue"	{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_CONTINUE;}}
"return"	{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_RETURN;}}
"new"       	{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_NEW;}}
"++"		{if(fg == 0){addTokenToFile("Unary operator", yytext);yylval.v=strdup(yytext); return T_INC;}}
"--"		{if(fg == 0){addTokenToFile("Unary operator", yytext);yylval.v=strdup(yytext); return T_DEC;}}
"+="		{if(fg == 0){addTokenToFile("Assignment operator", yytext);yylval.v=strdup(yytext); return T_SHA;}}
"-="		{if(fg == 0){addTokenToFile("Assignment operator", yytext);yylval.v=strdup(yytext); return T_SHS;}}
"*="		{if(fg == 0){addTokenToFile("Assignment operator", yytext);yylval.v=strdup(yytext); return T_SHM;}}
"/="		{if(fg == 0){addTokenToFile("Assignment operator", yytext);yylval.v=strdup(yytext); return T_SHD;}}
"&="		{if(fg == 0){addTokenToFile("Assignment operator", yytext);yylval.v=strdup(yytext); return T_SHAND;}}
"|="        	{if(fg == 0){addTokenToFile("Assignment operator", yytext);yylval.v=strdup(yytext); return T_SHO;}}
"^="		{if(fg == 0){addTokenToFile("Assignment operator", yytext);yylval.v=strdup(yytext); return T_SHC;}}
"%="		{if(fg == 0){addTokenToFile("Assignment operator", yytext);yylval.v=strdup(yytext); return T_SHMOD;}}
"||"		{if(fg == 0){addTokenToFile("Logical operator", yytext);yylval.v=strdup(yytext); return T_OR;}}
"&&"		{if(fg == 0){addTokenToFile("Logical operator", yytext);yylval.v=strdup(yytext); return T_AND;}}
"=="		{if(fg == 0){addTokenToFile("Comparison operator", yytext);yylval.v=strdup(yytext); return T_EQ;}}
"!="		{if(fg == 0){addTokenToFile("Comparison operator", yytext);yylval.v=strdup(yytext); return T_NE;}}
">="        	{if(fg == 0){addTokenToFile("Assignment operator", yytext);yylval.v=strdup(yytext); return T_GTE;}}
"<="        	{if(fg == 0){addTokenToFile("Assignment operator", yytext);yylval.v=strdup(yytext); return T_LTE;}}
"<<"        	{if(fg == 0){addTokenToFile("Bitwise operator", yytext);yylval.v=strdup(yytext); return T_LS;}}
">>"        	{if(fg == 0){addTokenToFile("Bitwise operator", yytext);yylval.v=strdup(yytext); return T_RS;}}
"("		{if(fg == 0){addTokenToFile("Brackets", yytext);yylval.v=strdup(yytext);  return *yytext;}}
")"		{if(fg == 0){addTokenToFile("Brackets", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"."         	{if(fg == 0){addTokenToFile("dot", yytext);yylval.v=strdup(yytext);  return *yytext;}}
","         	{if(fg == 0){addTokenToFile("comma", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"{"         	{if(fg == 0){addTokenToFile("Brackets", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"}"         	{if(fg == 0){addTokenToFile("Brackets", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"["         	{if(fg == 0){addTokenToFile("Brackets", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"]"         	{if(fg == 0){addTokenToFile("Brackets", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"*"         	{if(fg == 0){addTokenToFile("Arithmetic operator", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"+"         	{if(fg == 0){addTokenToFile("Arithmetic operator", yytext);yylval.v=strdup(yytext);  return *yytext;}}
";"         	{if(fg == 0){addTokenToFile("semi-colon", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"-"         	{if(fg == 0){addTokenToFile("Arithmetic operator", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"/"         	{if(fg == 0){addTokenToFile("Arithmetic operator", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"="         	{if(fg == 0){addTokenToFile("Assignment operator", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"&"         	{if(fg == 0){addTokenToFile("Bitwise operator", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"|"         	{if(fg == 0){addTokenToFile("Bitwise operator", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"!"         	{if(fg == 0){addTokenToFile("Bitwise operator", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"~"         	{if(fg == 0){addTokenToFile("Bitwise operator", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"^"         	{if(fg == 0){addTokenToFile("Bitwise operator", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"%"         	{if(fg == 0){addTokenToFile("Arithmetic operator", yytext);yylval.v=strdup(yytext);  return *yytext;}}
">"         	{if(fg == 0){addTokenToFile("Comparison operator", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"<"         	{if(fg == 0){addTokenToFile("Comparison operator", yytext);yylval.v=strdup(yytext);  return *yytext;}}
[0-9]+[.]?[0-9]*	{if(fg == 0){yylval.v=strdup(yytext);addTokenToFile("NUM", yytext); return T_NUM;}}
[A-Za-z][A-Za-z0-9]* 	{if(fg == 0) {yylval.v=strdup(yytext); addTokenToFile("Identifier", yytext);return T_ID;}}
"\n"		{yylineno++;}
.			{}
%%
void addTokenToFile(char *t, char *s)
{
   	FILE *fptr;
	fptr = fopen("tokens.txt", "a");
   	if(fptr == NULL)
   	{
	      printf("Error!");
	      exit(1);
   	}

   	fprintf(fptr,"%s : %s\n", t, s);
   	fclose(fptr);
}
