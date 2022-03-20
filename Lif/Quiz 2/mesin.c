#include "header.h"

//Saya Alif Rizza mengerjakan evaluasi Quiz 2 dalam mata kuliah Algoritma dan Pemograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
//Aamiin.

void sort(pecahan arr[], int num) { //algoritma insertion sort
    int i, j;
    pecahan key;

    for(i=0;i<num;i++) {
        key = arr[i];
        j = i - 1;

        while(j>=0 && key.pembilang*arr[j].penyebut > key.penyebut*arr[j].pembilang) {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}

int search(pecahan arr[], pecahan cari, int num) {
    int found = 0; //variabel penanda jika sudah ditemukan
    int i, n, k;
    i = 0;
    n = num-1;

    while((i <= n) && (found == 0)) {
        k = (int)(i+n) / 2; //index tengah
        if(arr[k].pembilang*cari.penyebut == arr[k].penyebut*cari.pembilang) {
            found = 1; //jika index tengah merupakan pecahan yang dicari, found = 1
        } else {
            if(arr[k].pembilang*cari.penyebut < arr[k].penyebut*cari.pembilang) {
                n = k - 1; //jika index yang dicari lebih besar dari yang dicari, n = k-1
            } else {
                i = k + 1; //jika index yang dicari lebih kecil dari yang dicari, n = k+1
            }
        }
    }
     return found; //kembalikan nilai found
}