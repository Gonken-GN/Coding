#include "header.h"
int main (){
    int i, n = 0, m = 0, k = 0;
    //proses membuat dua list dengan data dari input
    list L;
    list M;
    createList(&L);
    createList(&M);
    scanf("%d", &n);
    menu warung1[n];
    //data dimasukkan kedalam list dengan addlast
    for(i=0;i<n;i++){
        scanf("%s %d", &warung1[i].nama, &warung1[i].harga);
        addLast(warung1[i].nama, warung1[i].harga, &L);
    }
    scanf("%d", &m);
    menu warung2[m];
    for(i=0;i<m;i++){
        scanf("%s %d", &warung2[i].nama, &warung2[i].harga);
        addLast(warung2[i].nama, warung2[i].harga, &M);
    }
    scanf("%d", &k);
    //variabel untuk menampung data mana yang akan ditukar
    char tampung[100];
    char tampung2[100];
    for(i=0;i<k;i++){
        scanf("%s %s", &tampung, &tampung2);
       tukar(tampung, tampung2, &L, &M);
    }
    printf("menu warung pertama:\n");
    printElement(L);
    printf("\nmenu warung kedua:\n");
    printElement(M);
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Kuis1 dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/