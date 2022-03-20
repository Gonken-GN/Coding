#include <stdio.h>
#include <string.h>
//data terstruktur
typedef struct {
    char makanan[100];
    int harga;
}datamakanan;
datamakanan data[100][100];
int total1, total2;//variabel untuk menampul jumlah harga untuk pemain1 dan 2
int baris11, kolom11, baris21, kolom21;//variabel untuk menampung baris dan kolom untuk pemain1 dan pemain 2


void cek1(int a, int b);//prosedur untuk mencari jumlah harga untuk pemain 1
void cek2(int a, int b);//prosedur untuk mencari jumlah harga untuk pemain 2
int pemenang();//fungsi prosedur untuk menentukan pemain yang menang dengan mencari jumlah harga terkecil dari kedua pemain 
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Kuis 1 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/