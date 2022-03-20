#include <stdio.h>
#include <malloc.h>
#include <string.h>

/*Saya FAJRI MAULANA ISKANDAR 2009576 mengerjakan TUGAS TM7 dinamis dalam mata kuliah Algoritma dan Pemrograman
      untuk keberkahanNya maka saya tidak melakukan kecurangan
      seperti yang telah dispesifikasikan. Aamiin*/

typedef struct {
    char name[100];
    int rating;
}game;

typedef struct elmt* elementAddress;     
typedef struct elmt{
    game chest;
    elementAddress next;
}element;

typedef struct {
    element* first;
    element* last;
}queue;

void createEmpty(queue *Q);
int isEmpty(queue Q);
int countElement(queue Q);
void add(game data, queue *Q);
void out(queue *Q);
void priorityQueue(game data, int priority, queue *Q);
void printQueue(queue Q, int queueNumber);
