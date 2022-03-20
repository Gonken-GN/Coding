/*Deklarasi Library*/
#include<stdio.h>
#include<string.h>

/*
Saya Muhammad Aditya Hasta Pratama 2000360 mengerjakan soal kompetisi TP6 Alpro2 2021 C1 dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
*/

typedef struct tp6a
{
    float duration;
    char titleSong[100];
}data;

/*Deklarasi Prosedur*/
void Input(data lagu[], int x);
void Insertion(data lagu[], int x, char directSort);
void Selection(data lagu[], int x, char directSort);
void Bubble(data lagu[], int x, char directSort);
void Quick(data lagu[],char directSort, int left, int right);
void Merge(data laguA[], data laguB[], data gabung[], char directSort, int x, int y);
void Output(data gabung[], int x);
void DaftarIbnu(data gabung[], int x, data laguIbnu[]);