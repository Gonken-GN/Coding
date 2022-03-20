#include<stdio.h>
#include<string.h>

/*
Saya Muhammad Aditya Hasta Pratama 2000360 mengerjakan soal kompetisi Kuis2 (Kurmbs21) Alpro2 2021 C1 dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
*/

typedef struct 
{
    char type[50];
    int weight;
    int price;
    char status[50];
    int totalprice;
}kurm;

void Input(kurm data[], int n);
void PriceGram(kurm data[], int n);
void Sort(kurm data[], int n);
void SearchProgram(int cari, kurm data[], int n);