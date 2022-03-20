#include <stdio.h>
#include <string.h>

typedef struct{
    char nim[100];
    char nama[100];
    float nilai;
}nilai;
typedef struct{
    int first;
    int last;
    nilai data[10];
}queue;

void createEmpty(queue *Q);
int isEmpty(queue Q);
int isFull(queue Q);
void add(char nim[], char nama[], float nilai, queue *Q);
void addpri(char nim[], char nama[], float nilai, queue *Q, int indeks);
void del(queue *Q);
void print(queue Q);