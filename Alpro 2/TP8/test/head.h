#include <stdio.h>
#include <string.h>

typedef struct{
    char namafilm[100];
    char genre[100];
    char sutradara[100];
    char bioskop[100];
    char id[50];
}data;

int pilihan;
void datafilm(data film[50], int x);
void addfilm(data film[50], int x, data baru[50]);
void addsutradara(data baru[50], int m);
void addgenre(data baru[50]);
void addbioskop(data baru[50]);