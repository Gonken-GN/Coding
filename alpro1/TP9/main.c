#include "header.h"
int main (){
    int i, n;//iterator
    scanf("%d", &n);//meminta user untuk memasukkan angka
    char str[n][100];//variabel untuk menampung string
    for(i=0;i<n;i++){
        scanf("%s", &str[i]);//input string sebanyak n
    }
    spasi(n, str);//prosedur memisahkan string menjadi beberapa string dan memberikan spasi pada string
    cek(n);//prosedur membuat nama menjadi anonim atau tidak anonim
    hasil(n);//prosedur menampilkan review berdasarkan rating bintang
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 9 "Bisnis Online Loki" (PR12020) dalam mata kuliah
Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/