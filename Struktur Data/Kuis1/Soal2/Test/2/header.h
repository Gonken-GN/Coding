#include <stdio.h>
#include <string.h>

typedef struct{
    char kata[50];
}kumpulanKata;

typedef struct{
    kumpulanKata kontainer;
    int prev;
    int next;
}elemen;

typedef struct{
    int first;
    int tail;
    elemen data[100];
}list;

void createList(list *L);
int countElement(list L);
int emptyElement(list L);
void addFirst(char kata[], list *L);
void addAfter(int before, char kata[], list *L);
void addLast(char kata[], list *L);
void delFirst(list *L);
void delAfter(int before, list *L);
void delLast(list *L);
int panjangKata(list L);
void printElement(list L);
