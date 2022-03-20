#include <stdio.h>
#include <string.h>

typedef struct{
    char string[100];
    int ascii;
    int panjang;
}var;

void insert(var arr[], int num);
void select(var arr[], int num);
void bubble(var arr[], int num);
void quick(var arr[], int kiri, int kanan);
void merge(var arr_a[], var arr_b[], int n, int m, var arr_c[]);

//Saya Alif Rizza mengerjakan Evaluasi 1 dalam mata kuliah Alpro 2 
//untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.