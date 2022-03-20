#include <stdio.h>
#include <string.h>
//data terstruktur untuk menyimpan durasi dan nama lagu
typedef struct{
    float durasi;
    char nama[100];
}data;
char metode, urut;//variabel untuk menampung metode dan urut apa yg akan digunakan
void insert(data arr[], int banyak);//prosedur sorting metode insertion sort
void selec(data arr[], int banyak);//prosedur sorting metode selection sort
void buble(data arr[], int banyak);//prosedur sorting metode bubble sort
void quick(data arr[], int left, int right);//prosedur sorting quick sort pivot pinggir
void gabung(int banyak, int banyak2, data arr1[], data arr2[], data baru[]);//prosedur untuk menggabungkan 2 dan atau 3 array dan disorting
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 6 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/