#include "header.h"
int main (){
    int i, j;
    int n, m, baris, kolom;

    scanf("%d %d", &baris, &kolom);
    datamakanan data[baris][kolom];
    scanf("%d", &n);
    int b, k;
    char food[100];
    int price;
    for(i=0;i<baris;i++){
        for(j=0;j<kolom;j++){
            data[i][j].harga = 0;
        }
    }
    for(i=0;i<n;i++){
        scanf("%d %d %s %d", &b, &k, &food, &price);
        data[b][k].harga = price;
        strcpy(data[b][k].makanan, food);
    }
    printf("%d %s", data[0][1].harga, data[0][1].makanan);
    scanf("%d", &m);
    koordinat pemain1;
    koordinat pemain2;
    for(i=0;i<m;i++){
        scanf("%d %d", &pemain1.baris1, &pemain1.kolom1);
        cek1(baris, kolom, data, m, pemain1);
    }
    for(i=0;i<m;i++){
        scanf("%d %d", &pemain2.baris1, &pemain2.kolom1);
        cek2(baris, kolom, data, m, pemain2);
    }
    printf("pemain pertama %d\n", total1);
    printf("pemain kedua %d\n", total2);
    if(pemenang() == 2){
        printf("pemenangnya pemain pertama\n");
    }else if(pemenang() == 1){
         printf("pemenangnya pemain kedua\n");
    }else{
        printf("tidak ada pemenang\n");
    }
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Kuis 1 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/