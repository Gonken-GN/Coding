#include "header.h"
int main (){
    int i, n;//iterator
    scanf("%d", &n);
    hasil[n];//
    int indeks;
    int count =2;//untuk melakukan rekursif (untuk mencegah bug jika indeks yang diinput adalah 0 atau 1) jika indeks lebih dari 2
    //proses untuk menginput jam ke-0, 1 dan indeks lalu melakukan proses rekursif tiap looping berlangsung
    for(i=0;i<n;i++){
        scanf("%d %d %d", &jam[0], &jam[1], &indeks);
        bakteri(i, indeks, count);//memanggil prosedur rekursif tiap looping agar hasil bakteri tiap n dapat dikalkulasikan
    }
    //proses menampilkan hasil kalkulasi bakteri
    for(i=0;i<n;i++){
        printf("%d\n", hasil[i]);
    }
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 3 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/