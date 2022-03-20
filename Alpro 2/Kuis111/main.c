#include "header.h"
int main (){
    int i, j;//iterator
    int n, m, baris, kolom;//varaibel input
    scanf("%d %d", &baris, &kolom);//ordo matriks
    scanf("%d", &n);//banyaknya sel yang akan diisi
    int b, k;//baris dan kolom yang ingin diisi
    char food[100];//integer ntuk dimasukkan ke dalam matriks bungkusan
    int price;//varaibel tampung harga untuk dimasukkan ke dalam matriks bungkusan
    for(i=0;i<100;i++){
        for(j=0;j<100;j++){
            data[i][j].harga = 0;//membuat matriks bungkusan harga menjadi 0 agar tidak terjadi bug
        }
    }
    //proses memasukkan angka dan makanan pada baris dan kolomt tertentu
    for(i=0;i<n;i++){
        scanf("%d %d %s %d", &b, &k, &food, &price);
        data[b][k].harga = price;
        strcpy(data[b][k].makanan, food);
    }
    //jumlah  koordinat yang ingin dimasukkan
    scanf("%d", &m);
    //proses menginput baris dan kolom yang ingin diakses untuk pemain 1
    for(i=0;i<m;i++){
        scanf("%d %d", &baris11, &kolom11);
        cek1(baris11, kolom11);
    }
    //proses menginput baris dan kolom yang ingin diakses untuk pemain 2
    for(i=0;i<m;i++){
        scanf("%d %d", &baris21, &kolom21);
        cek2(baris21, kolom21);
    }
    //proses menampilkan jumlah harga tiap pemain
    printf("pemain pertama %d\n", total1);
    printf("pemain kedua %d\n", total2);
    //proses menampilkan pemenang jika ada pemain yang lebih kecil jumlah harganya atau jumlah harganya sama
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