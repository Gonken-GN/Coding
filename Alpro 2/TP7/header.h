#include <stdio.h>
#include <string.h>
//data terstruktur untuk menyimpan input siswa
typedef struct{
    char nama[50];      //nama siswa
    int jumlah;         //jumlah kegiatan siswa
    float nilai[50];    //niilai sswa
    float rata;         //rata-rata nilaii siswa
}data;
char temp[50];//variabel untuk menyimpan string dengan indeks yang dicari
void sort(int banyak, data arr[]);//prosedur mensorting data siswa dengan metode bubble sort
void binsearch(int a, int cari, data arr []);//prosedur untuk mencari nama siswa dengan indeks yang dicari dengan metode binarysearch
void sequnsearch(int a, int cari, data arr[]);//prosedur untuk mencarii nama siswa dengan indeks yang dicari dengan metode sequential search
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 7 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/