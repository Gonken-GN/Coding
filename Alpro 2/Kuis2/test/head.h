#include <stdio.h>
#include <string.h>

typedef struct{
    char nama[100];
    int berat; //satuan gram
    int harga;
    int status; //premium=1 bukanpremium=0
    int hargaperberat;
}data;

int n; //banyak elemen
int cari; //harga per gram yang dicari
int statusditemukan;
int indekssimpan;

void bubblesort(data array[], int banyak);
void binarysearch(data array[]);


/*
Janji
Saya Muhammad Rafi Shidiq 2004222 mengerjakan 	
(kurmbs21) Kurma Standar Premium
dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak
melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin
*/