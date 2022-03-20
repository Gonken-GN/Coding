#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct smp *alamatsimpul;
typedef struct smp{
    char kontainer;
    alamatsimpul right;
    alamatsimpul left;
}simpul;

typedef struct{
    simpul* root;
}tree;

void makeTree(char c, tree *T);
void addRight(char c, simpul *root);
void addLeft(char c, simpul *root);
void dellAll(simpul *root);
void dellRight(simpul *root);
void dellLeft(simpul *root);
void printPreeOrder(simpul *root);
void printInOrder(simpul *root);
void printPosOrder(simpul *root);
void copyTree(simpul *root1, simpul **root2);
int equal(simpul *root1, simpul *root2);