#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct{
    char nama[100];
}restoran;
typedef struct{
    char nama[100];
    char harga[100];
}menu;

typedef struct eklm *alamatkolom;
typedef struct eklm{
    menu kontainer_kol;
    alamatkolom next_kol;
}eKolom;

typedef struct ebr *alamatbaris;
typedef struct ebr{
    restoran kontainer;
    eKolom *col;
    alamatbaris next;
}eBaris;

typedef struct{
    eBaris *first;
}list;

void createlist(list *L);
int countelementB(list L);
int countelementK(eBaris L);
void addfirstB(char nama[], list *L);
void addfirstK(char kode[], char nilai[], eBaris *L);
void addafterB(eBaris* prev, char nama[]);
void addafterK(eKolom* prev,char kode[], char nilai[]);
void addlastB( char nama[], list *L);
void addlastK(char kode[], char nilai[], eBaris *L);
void delfirstK(eBaris *L);
void delafterK(eKolom* prev);
void dellastK(eBaris *L);
void delallK(eBaris *L);
void delfirstB(list *L);
void delafterB(eBaris* prev);
void dellastB(list *L);
void delallB(list *L);
eBaris* getLatestBaris(list L, char nama[]);
void printelement(list L, int banyak);
void pindah(list *L, char input1[], char input2[], char input3[]);
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Ujian Tengah Semester (UTS)dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/