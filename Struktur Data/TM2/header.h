#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct
{
    char nama[50];
    char rumus[50];
    char konsentrasi[50];
} kimia;
typedef struct elmt* alamatelmt;
typedef struct elmt{
    kimia kontainer;
    alamatelmt next;
}elemen;
typedef struct{
    elemen* first;
}list;
void createList(list *L);
int countElement(list L);
int emptyElement(list L);
void addFirst(char rumus[], char nama[], char konsentrasi[], list *L);
void addAfter(elemen* prev, char rumus[], char nama[], char konsentrasi[], list *L);
void addLast(char rumus[], char nama[], char konsentrasi[], list *L);
void delFirst(list *L);
void delAfter(elemen* prev, list *L);
void delLast(list *L);
void printElement(list L);
void delAll(list *L);
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tes Mesin (TM) 2 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
