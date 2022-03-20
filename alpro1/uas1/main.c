#include "header.h"
int main (){
    int i, n;//iterator
    scanf("%d", &n);//meminta user untuk memasukkan angka
    for(i=0;i<n;i++){
        scanf("%s", bung[i].str1);//meminta user untuk memasukkan string pertama
        scanf("%s", bung[i].str2);//meminta user untuk memasukkan string kedua
    }
    cek(n);//menampilkan prosedur untuk mengecek apakah string pertama lebih besar/kecil dengan string kedua
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Ujian Akhir Semester dalam mata kuliah
Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/