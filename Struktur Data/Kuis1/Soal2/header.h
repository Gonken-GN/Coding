#include <stdio.h>
#include <string.h>
#include <malloc.h>
typedef struct
{
    char nama[100];
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
int tampung2;
void createList(list *L);
int countElement(list L);
int emptyElement(list L);
void addFirst(char nama[],list *L);
void addAfter(int before, char nama[], list *L);
void addLast(char nama[],list *L);
void delFirst(list *L);
void delAfter(int before, list *L);
void delLast(list *L);
void printElement(list L);
void coba(list L);
void delAll(list *L);
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Kuis1 dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/