#include <stdio.h>
char urut;//variabel globall untuk menampung urut ascending atau descending
typedef struct{
    float pembilang;//menampung nilai input pembilang
    float penyebut;//menampung nilai input penyebut
    float desimal;//menampung nilai dari pecahan
}pecahan;//bungkusan untuk menampung nilai dari pecahan
void buble(int a, pecahan data[a]);//prosedur untuk sorting dengan metode bubble sort
void qs(pecahan data[], int left, int right);//prosedur untuk sorting dengan metode quick sort
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 5 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/