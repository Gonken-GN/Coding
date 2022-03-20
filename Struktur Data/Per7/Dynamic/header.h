#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct{
    char nim[100];
    char nama[100];
    float nilai;
}nilai;
typedef struct elm *alamat;
typedef struct elm{
    nilai container;
    alamat next;
}elemen;
typedef struct{
    elemen *first;
    elemen *last;
}queue;
void createEmpty(queue *Q);
int isEmpty(queue Q);
int countelemen(queue Q);
void add(char nim[], char nama[], float nilai, queue *Q);
void addP(char nim[], char nama[], float nilai, queue *Q, int indeks);
void del(queue *Q);
void print(queue Q);