#include "header.h"
int main (){
    queue Q;
    createEmpty(&Q);
    int i, n;
    scanf("%d", &n);
    nilai temp[n];
    //proses input dan memasukkan elemen
    for(i=0;i<n;i++){
        scanf("%s %d %s %d", &temp[i].nama, &temp[i].prioritas, &temp[i].kota, &temp[i].bantuan);
        addP(temp[i].nama, temp[i].prioritas, temp[i].kota, temp[i].bantuan, &Q);
    }
    scanf("%d", &banyak);
    print(Q);
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Kuis2 dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/