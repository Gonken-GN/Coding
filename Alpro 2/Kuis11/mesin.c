#include "header.h"
void cek1(int a, int b, datamakanan data[a][b], int m, koordinat pemain1){
    total1 += data[pemain1.baris1][pemain1.kolom1].harga;
    printf("%d-%d--%d\n", pemain1.baris1, pemain1.kolom1, data[pemain1.baris1][pemain1.kolom1].harga);
}
void cek2(int a, int b, datamakanan data[a][b], int m, koordinat pemain2){
    total2 += data[pemain2.baris1][pemain2.kolom1].harga;
    printf("%d-%d--%d\n", pemain2.baris1, pemain2.kolom1, data[pemain2.baris1][pemain2.kolom1].harga);
}
int pemenang(){
    if(total1 < total2){
        return 2;
    }else if(total2 < total1){
        return 1;
    }else{
        return 0;
    }
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Kuis 1 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/