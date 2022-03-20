#include<stdio.h>
#include<string.h>

typedef struct{
    char string[100];
    char vokal[100];
    int panjang;
    int pvokal;
    int cek;
}data;
data input[50];

int banyak;

void olahdata();
void output();