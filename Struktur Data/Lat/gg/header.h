#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct{
    int nim;
}mahasiswa;
typedef struct{
    int kode;
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
void addfirstB(int nim, list *L);
void addfirstK(int kode, eBaris *L);
void addafterB(eBaris* prev,int nim);
void addafterK(eKolom* prev,int kode);
void addlastB(int nim, list *L);
void addlastK(int kode, eBaris *L);
void delfirstK(eBaris *L);
void delafterK(eKolom* prev);
void dellastK(eBaris *L);
void delallK(eBaris *L);
void delfirstB(list *L);
void delafterB(eBaris* prev);
void dellastB(list *L);
void delallB(list *L);
void printelement(list L);
void kolom(list *L, mahasiswa data[], int banyak);