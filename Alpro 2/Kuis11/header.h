#include <stdio.h>
#include <string.h>
typedef struct {
    char makanan[100];
    int harga;
}datamakanan;
int total1, total2;
int baris11, kolom11, baris21, kolom21;
typedef struct{
    int baris1;
    int kolom1;
}koordinat;

void cek1(int a, int b, datamakanan data[a][b], int m, koordinat pemain1);
void cek2(int a, int b, datamakanan data[a][b], int m, koordinat pemain2);
int pemenang();
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Kuis 1 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/