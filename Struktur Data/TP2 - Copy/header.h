#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct 
{
    char nama[50];
    int harga;
    int kode;
}komponen;

typedef struct elmt* alamat;
typedef struct elmt
{
    komponen kontainer;
    alamat prev;
    alamat next;
}elemen;

typedef struct 
{
    elemen *first;
    elemen *tail;
}list;
char metode[10];
char urut[10];
void createList(list *L);
int countElement(list L);
void addFirst(int harga, char nama[], int kode, list *L);
void addAfter(elemen* before, int harga, char nama[], int kode, list *L);
void addLast(int harga, char nama[], int kode, list *L);
void addLastt(int harga, char nama[], int kode, list *L);
void delFirst(list *L);
void delAfter(elemen* before, list *L);
void delLast(list *L);
void printElement(list L);
void printRElement(list L);

void delAll(list *L);
void sort(int banyak, list *L);
void hapus(list *L);
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 2 (TP2) dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/