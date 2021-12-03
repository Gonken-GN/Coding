#include <stdio.h>
#include <malloc.h>
#include <string.h>
typedef struct smp *alamatsimpul;
typedef struct smp{
    char nama[100];
    int korban;
    alamatsimpul sibling;
    alamatsimpul child;
}simpul;

typedef struct{
    simpul *root;
}tree;

typedef struct{
    char inputFtempat[100];
    char inputtempat[100];
    int inputkorban;
}input;
void makeTree(char c[100], int victim, tree *T);
void addchild(char c[100], int victim, simpul *root);
void delAll(simpul *root);
void delChild(char c[100], simpul *root);
simpul* findsimpul(char c[100], simpul *root);
void printTreePreOrder(simpul *root);
void printTreePostOrder(simpul *root);
void copyTree(simpul *root1, simpul **root2);
int isequal(simpul *root1, simpul *root2);
void OlahInput(int banyak, char str[100]);