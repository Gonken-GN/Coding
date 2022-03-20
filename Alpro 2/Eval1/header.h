#include <stdio.h>
#include <string.h>
//tipe data terstruktur untuk menyimpan input data mahasiswa
typedef struct{
    char nama[100];
    int nilai1;
    int nilai2;
}data;
void insert(data arr[], int banyak);//prosedur sorting metode bubble sort
void gabung(int banyak, int banyak2, data arr1[], data arr2[], data baru[]);//prosedur untuk menggabungkan 2 dan atau 3 array dan disorting
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Evaluasi 1 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/