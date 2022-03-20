#include <stdio.h>
#include <string.h>
#include <malloc.h>
typedef struct
{
    char nim[100];
    char nama[100];
    char nilai[2];
}nilaiMatkul;

typedef struct
{
    nilaiMatkul kontainer;
    int prev;
    int next;
}elemen;

typedef struct
{
    int first;
    int tail;
    elemen data[10];
}list;

typedef struct{
    char nama[100];
    char tipe[100];
    char jumlah[2];
}hp;
void createList(list *L);
int countElement(list L);
int emptyElement(list L);
void addFirst(char nim[], char nama[], char nilai[], list *L);
void addAfter(int before, char nim[], char nama[], char nilai[], list *L);
void addLast(char nim[], char nama[], char nilai[], list *L);
void delFirst(list *L);
void delAfter(int before, list *L);
void delLast(list *L);
void printElement(list L);
void printreverse(list L);
void delAll(list *L);
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Test Mesin (TM3) dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/