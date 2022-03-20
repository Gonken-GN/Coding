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
//variabel untuk iterasi untuk prosedur yg bertipe rekursif
int iterasi;
int iterasi2;
int iterasi3;
void makeTree(char c, tree *T);
void addRight(char c, simpul *root);
void addLeft(char c, simpul *root);
void dellAll(simpul *root);
void dellRight(simpul *root);
void dellLeft(simpul *root);
void printPreeOrder(simpul *root, int banyak, int iterator);
void printInOrder(simpul *root, int banyak);
void printPosOrder(simpul *root, int banyak);
void copyTree(simpul *root1, simpul **root2);
int equal(simpul *root1, simpul *root2);
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Test Mesin (8) dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/