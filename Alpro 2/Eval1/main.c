#include "header.h"
int main (){
    int i, j;//iterator
    int n, m;//variabel tampung untuk menampung berapa banyak array yang diinginkan
    scanf("%d", &n);
    data kelas1[n];//deklarasi data terstruktur untuk array pertama
    //proses memasukkan data input untuk array pertama
    for(i=0;i<n;i++){
        scanf("%s %d %d", &kelas1[i].nama, &kelas1[i].nilai1, &kelas1[i].nilai2);
    }
    scanf("%d", &m);
    data kelas2[m];//deklarasi data terstruktur untuk array kedua
    //proses memasukkan data niput untuk array kedua
    for(i=0;i<m;i++){
        scanf("%s %d %d", &kelas2[i].nama, &kelas2[i].nilai1, &kelas2[i].nilai2);
    }
    int mix = (n+m) / 2;
    insert(kelas1, n);//sorting dengan metode insertion untuk array pertama
    insert(kelas2, m);//sorting dengan metode inserton untuk array kedua
    data merge[n+m];//deklarasi data terstruktur untuk array gabungan
    gabung(n, m, kelas1, kelas2, merge);//penggabungan array pertama dan array kedua
    printf("================\n");
    //proses menampilkan array yang telah digabung
    for(i=0;i<n+m;i++){
        printf("%s %d %d\n", merge[i].nama, merge[i].nilai1, merge[i].nilai2);
    }
    printf("================\n");
    //proses menampilkan 1/2 awal darii array yang telah digabung
    for(i=0;i<mix;i++){
        printf("%s %d %d\n", merge[i].nama, merge[i].nilai1, merge[i].nilai2);
    }
    printf("================\n");
    //proses menampilkan 1/2 akhir dar array yang telah digabung
    for(i=mix;i<n+m;i++){
        printf("%s %d %d\n", merge[i].nama, merge[i].nilai1, merge[i].nilai2);
    }
    
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Evaluasi 1 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/