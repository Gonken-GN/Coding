#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct{
    char nim[50];
    char nama[50];
}mahasiswa;
typedef struct{
    char kode[50];
}matkul;

typedef struct eklm *alamatkolom;
typedef struct eklm{
    matkul kontainer_kol;
    alamatkolom next_kol;
}eKolom;

typedef struct ebr *alamatbaris;
typedef struct ebr{
    mahasiswa kontainer;
    eKolom *col;
    alamatbaris next;
}eBaris;

typedef struct{
    eBaris *first;
}list;

void createlist(list *L);
int countelementB(list L);
int countelementK(eBaris L);
void addfirstB(char nim[], char nama[], list *L);
void addfirstK(char kode[], eBaris *L);
void addafterB(eBaris* prev,char nim[], char nama[]);
void addafterK(eKolom* prev,char kode[]);
void addlastB(char nim[], char nama[], list *L);
void addlastK(char kode[], eBaris *L);
void addlasttB(char nim[], char nama[], int banyak,matkul coba[banyak],list *L);
void delfirstK(eBaris *L);
void delafterK(eKolom* prev);
void dellastK(eBaris *L);
void delallK(eBaris *L);
void delfirstB(list *L);
void delafterB(eBaris* prev);
void dellastB(list *L);
void delallB(list *L);
void printelement(list L);
eBaris* kolom(char kode[], list *L);
void sort(int banyak, list *L);
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Test Mesin 5(TM5) dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/