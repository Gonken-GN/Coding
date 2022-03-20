#include "header.h"

//Saya Alif Rizza mengerjakan evaluasi Quiz 2 dalam mata kuliah Algoritma dan Pemograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
//Aamiin.

int main () {

    int i, n;
    scanf("%d", &n); //scan jumlah masukan pecahan
    pecahan arr[n];
    for(i=0;i<n;i++) {
        scanf("%d %d", &arr[i].pembilang, &arr[i].penyebut); //scan pecahan
    }
    pecahan cari;
    scanf("%d %d", &cari.pembilang, &cari.penyebut); //scan pecahan yang ingin dicari

    sort(arr, n); //panggil prosedur insertion sort

    int ketemu = search(arr, cari, n); //nilai found dimasukkan kedalam variabel ketemu

    if(ketemu == 1) {
        printf("ditemukan\n");
    } else {
        printf("tidak ditemukan\n");
    }

    return 0;
}