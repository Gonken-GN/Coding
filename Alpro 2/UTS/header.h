#include <stdio.h>
#include <string.h>
//data terstruktur untuk menyimpan input
typedef struct{
    int kalor1;
    int kalor2;
    int ribuan;
    float desi;
    char nama[100];//untuk menyimpan nama makanan
    char country[100];//variabel untuk menyimpan nama negara
}data;
void insert(data arr[], int banyak);//prosedur sorting metode insertion sort
void selec(data arr[], int banyak);//prosedur sorting metode selection sort
void buble(data arr[], int banyak);//prosedur sorting metode bubble sort
void quick(data arr[], int left, int right);//prosedur sorting quick sort pivot pinggir
void gabung(int banyak, int banyak2, data arr1[], data arr2[], data baru[]);//prosedur untuk menggabungkan 2 dan atau 3 array dan disorting
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Ujian Tengah Semester (UTS) dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/