#include <stdio.h>
#include <malloc.h>
typedef struct smp *alamatsimpul;
typedef struct smp{
    char kontainer;
    alamatsimpul sibling;
    alamatsimpul child;
}simpul;

typedef struct{
    simpul *root;
}tree;

void makeTree(char c, tree *T);
void addchild(char c, simpul *root);
void delAll(simpul *root);
void delChild(char c, simpul *root);
simpul* findsimpul(char c, simpul *root);
void printTreePreOrder(simpul *root);
void printTreePostOrder(simpul *root);
void copyTree(simpul *root1, simpul **root2);
int isequal(simpul *root1, simpul *root2);