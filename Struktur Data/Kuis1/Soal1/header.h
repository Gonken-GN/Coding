#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct{
    char nama[50];
    int harga;
}menu;
typedef struct elmt* alamatelmt;
typedef struct elmt{
    menu kontainer;
    alamatelmt next;
}elemen;
typedef struct{
    elemen* first;
}list;
void createList(list *L);
int countElement(list L);
int emptyElement(list L);
void addFirst(char nama[], int harga, list *L);
void addAfter(elemen* prev, char nama[], int nilai, list *L);
void addLast(char nama[], int nilai, list *L);
void delFirst(list *L);
void delAfter(elemen* prev, list *L);
void delLast(list *L);
void printElement(list L);
void delAll(list *L);
void tukar(char nama1[], char nama2[], list *L, list *M);
