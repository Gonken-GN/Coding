#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct{
    char nama[50];
    int jumlah;
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
void addfirstB(char nama[], int jumlah, list *L);
void addfirstK(char kode[], eBaris *L);
void addafterB(eBaris* prev,char nama[], int jumlah);
void addafterK(eKolom* prev,char kode[]);
void addlastB(char nama[], int jumlah, list *L);
void addlastK(char kode[], eBaris *L);
void delfirstK(eBaris *L);
void delafterK(eKolom* prev);
void dellastK(eBaris *L);
void delallK(eBaris *L);
void delfirstB(list *L);
void delafterB(eBaris* prev);
void dellastB(list *L);
void delallB(list *L);
void printelement(list L);