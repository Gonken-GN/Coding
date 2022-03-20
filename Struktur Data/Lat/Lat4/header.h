#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct{
    char nama[50];
    int nim;
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
void addFirst(int nim, list *L);
void addAfter(elemen* prev, int nim, list *L);
void addLast(int nim, list *L);
// void delFirst(list *L);
// void delAfter(elemen* prev, list *L);
// void delLast(list *L);
void printElement(list L);
void delAll(list *L);
