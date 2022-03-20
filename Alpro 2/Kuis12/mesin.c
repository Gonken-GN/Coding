#include "header.h"
//prosedur untuk melakukan rekursif
void lompat(long a, long b) {
    printf("(%ld|%ld)\n", a, b);
    a = a / 2;//untuk membagi input menjadi setengah 
    b = b * 2;//untuk mengkali input
    //proses melakukan rekursif
    //basis
    if(a >= 1) {
        lompat(a, b);//rekursif
    }
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Kuis 1 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/