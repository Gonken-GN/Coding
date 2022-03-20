#include <stdio.h> //library stdio.h
#include <malloc.h> //library malloc untuk alokasi memori
#include <string.h>//library string.h

//deklarasi typedef struct, pointer, dan properti list
typedef struct{
    char namafood[64];
    int harga;
}makanan;
typedef struct elmt* alamatelmt;
typedef struct elmt{
    makanan kontainer;
    alamatelmt next;
}elemen;
typedef struct{
    elemen* first;
}list;

//deklarasi typedef sementara penampung inputan
typedef struct{
    char tempnamafood[64];
    int tempharga;
}sementara;

typedef struct{
    char namafoodA[64];
    char namafoodB[64];
}tukar;

//deklarasi variabel global
int banyak1;
int banyak2;
int banyakT;

//deklarasi prosedur dan fungsi untuk list
void createList(list *L);
int countElement(list L);
int emptyElement(list L);
void addFirst(char namafood[], int harga, list *L);
void addAfter(elemen* prev, char namafood[], int harga,  list *L);
void addLast(char namafood[], int harga, list *L);
void delFirst(list *L);
void delAfter(elemen* prev, list *L);
void delLast(list *L);
void printElement(list L);
void delAll(list *L);

int searchPrev(list L, char nama[]);
void proctukar(list *L, list *M, char tfood1[], char tfood2[]);

/*
Janji
Saya Muhammad Rafi Shidiq 2004222 mengerjakan 	
(cksg21) Pertukaran Koki Crabby Krispi dan Salad Goreng
dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak
melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin
*/