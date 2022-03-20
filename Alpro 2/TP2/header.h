#include <stdio.h>
#include <string.h>
//bungkusan untuk menyimpan daftar nama dan nilai siswa
typedef struct{
    char nama[100];//variabel menampung nama tiap siswa
    float nilai1, nilai2, nilai3;//variabel menampung nilai tiap siswa
    float rata;//variabel menampung rata-rata
}data;
int temp1B, temp2B, temp1K, temp2K;//variabel untuk menampung indeks baris dan kolom jika nama yang ingin ditukar ada di daftar nama
int max1[100], max[100];//variabel untuk menampung panjang string terpanjang tiap kolom
//bungkusan untuk menyimpan nama siswa yang akan ditukar
typedef struct{
    char nama1[100], nama2[100];
}tukar;

int rata(int a, int b, data matriks[a][b]);//fungsi prosedur mencari nilai rata2 dan mengecek apakah siswa pertama yang akan dibanding lebih besar daripada yang kedua
void change(int a, int b, data matriks[a][b]);//prosedur untuk menukar posisi indeks siswa pertama dengan siswa kedua
void string(int a, int b, data matriks[a][b], data sebelum[a][b]);//prosedur untuk mencari string terpanjang pada daftar siswa sebelum dans sesudah ditukar
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 2 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/