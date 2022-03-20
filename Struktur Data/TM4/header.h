#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct 
{
    char nim[50];
    char nama[50];
    char nilai[2];
}nilaimatkul;

typedef struct elmt* alamat;
typedef struct elmt
{
    nilaimatkul kontainer;
    alamat prev;
    alamat next;
}elemen;

typedef struct 
{
    elemen *first;
    elemen *tail;
}list;
void createList(list *L);
int countElement(list L);
void addFirst(char nim[], char nama[], char nilai[], list *L);
void addAfter(elemen* before, char nim[], char nama[], char nilai[], list *L);
void addBefore(elemen* before, char nim[], char nama[], char nilai[], list *L);
void addLast(char nim[], char nama[], char nilai[], list *L);
void delFirst(list *L);
void delAfter(elemen* before, list *L);
void delLast(list *L);
void printElement(list L);
void printreverse(list L);
void delAll(list *L);