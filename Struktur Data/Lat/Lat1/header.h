#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct{
    char nama[50];
    char nim[100];
    char nilai[2];
} nilaimatkul;
typedef struct elmt* alamatelmt;
typedef struct elmt{
    nilaimatkul kontainer;
    alamatelmt next;
}elemen;
typedef struct{
    elemen* first;
}list;
void createList(list *L);
int countElement(list L);
int emptyElement(list L);
void addFirst(char nim[], list *L);
void addAfter(elemen* prev, char nim[], char nama[], char nilai[], list *L);
void addLast(char nim[], char nama[], char nilai[], list *L);
void delFirst(list *L);
void delAfter(elemen* prev, list *L);
void delLast(list *L);
void printElement(list L);
void delAll(list *L);
void sort(int banyak, int jumlah[], char str[][100]);