#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct{
    char nim[10];
    char nama[50];
}mahasiswa;
typedef struct{
    char kode[10];
    char nilai[3];
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
void addfirstK(char kode[], char nilai[], eBaris *L);
void addafterB(eBaris* prev,char nim[], char nama[]);
void addafterK(eKolom* prev,char kode[], char nilai[]);
void addlastB(char nim[], char nama[], list *L);
void addlastK(char kode[], char nilai[], eBaris *L);
void delfirstK(eBaris *L);
void delafterK(eKolom* prev);
void dellastK(eBaris *L);
void delallK(eBaris *L);
void delfirstB(list *L);
void delafterB(eBaris* prev);
void dellastB(list *L);
void delallB(list *L);
void printelement(list L);