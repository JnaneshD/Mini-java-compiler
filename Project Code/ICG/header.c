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

/*
typedef struct node{
		struct node *prev;
		struct node *next;
		int scope;
		int occur;
}NODE;
typedef struct dllist
{
		NODE *head;
		int no;
}DLIST;
typedef struct symnode{
	char *name;
	char *val;
	char *type;
	int scope;
	int occur;
	struct symnode *prev;
	struct symnode *next;
}SYMNODE;
typedef struct symlist{
	SYMNODE* head;
}SYMLIST;
*/
typedef struct node{
	char* temp;
	char* var;
	struct node* next;
}NODE;
typedef struct list{
	NODE* head;
}LIST;

