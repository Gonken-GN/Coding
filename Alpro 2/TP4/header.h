#include <stdio.h>
#include <string.h>
typedef struct {
    char nama[100];
    int harga;
    float nilai;
}barang;//data terstruktur untuk menampung nama, harga, dan nilai barang
char metode[100];
char sort[100];
char pilih[100];
void insertionA(int a, barang data[a]);//prosedur untuk mensorting dengan metode insertiion ascending
void insertionD(int a, barang data[a]);//prosedur untuk mensorting barang dengan metode insertion descending
void selectionA(int a, barang data[a]);//prosedur untuk mensoring barang dengan metode selection ascending
void selectionD(int a, barang data[a]);//prosedur untuk mensortng barang dengan metode selection descending
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 4 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/