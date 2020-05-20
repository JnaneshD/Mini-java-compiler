typedef struct tree
{
	char *opr;
	char *value;
	struct tree* c1;
	struct tree* c2;
    struct tree* c3;
    struct tree* c4;
}TREE;
typedef struct ast
{
	TREE* root;
}AST;

typedef struct yacc
{
    char* tr;
    char* fal;
    char* next;
    int i;
    float f;
    char* v;
    char* a;
    char* code;
    char* addr;
    int scope;
    int occur;
    char *type;
    char* val;
    TREE *ptr;
}YACC;

typedef struct NODE
{
char name[10];
int value;
char type[10];
int scope;
struct NODE* next;
}NODE;

typedef struct symbol_table
{
    NODE* head;
    int entries;
}TABLE;