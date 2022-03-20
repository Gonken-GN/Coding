#include <stdio.h>
#include <string.h>
typedef struct{
    char nama[100];     //variabel untuk menyimpan input nama kurma
    float berat;        //variabel untuk menyimpan input berat kurma
    float harga;        //variabel untuk menyimpan input harga kurma
    char premium[100];  //variabel untuk menyimpan input premium atau standar kurna
    int status;         //variabel untuk menyimpan status premium kurma
    float rata;         //variabel untuk menyimpan harga per berat kurma
}data;
int indeks;//variabel untuk menyimpan indeks yang dicari
int found;
int binsearch(int a, int cari, data arr[]);//fungsi prosedur untuk mencari data dengan input cari
void sort(int banyak, data arr[]);//prosedur untuk mensorting dengan metode bubble sort
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Kuis 1 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/