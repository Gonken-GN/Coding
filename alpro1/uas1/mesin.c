#include "header.h"
void cek(int n){
    int i;//iterator
    int pan1[n], pan2[n];//variabel untuk menampung panjang tiap string
    char tampung[n];//variabel untuk menampung tanda '<', '>', dan '='
    for(i=0;i<n;i++){
        pan1[i] = 0;
        pan2[i] = 0;
    }//perulangan untuk membuat nilai tiap array menjadi 0(untuk mencegah terjadinya bug)
    for(i=0;i<n;i++){
        pan1[i] = strlen(bung[i].str1);
        pan2[i] = strlen(bung[i].str2);
    }//prosedur untuk memasukkan nillai panjang tiap string
    for(i=0;i<n;i++){
        if(pan1[i] > pan2[i]){//syarat jika panjang string pertama lebih besar daripada panjang string kedua
            tampung[i] = '>';
        }else if(pan1[i] < pan2[i]){//syarat jika panjang string pertama lebih kecil daripada panjang string kedua
            tampung[i] = '<';
        }else{//syarat jika panjang string pertama sama dengan panjang string kedua
            tampung[i] = '=';
        }
    }//perulangan untuk mengecek apakah string pertama lebih besar/kecil dari string kedua
    for(i=0;i<n;i++){
        printf("%s %c %s\n", bung[i].str1, tampung[i], bung[i].str2);//menampilkan string beserta tanda
    }
}//prosedur untuk mengecek apakah string pertama lebih besar/kecil dengan string kedua
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Ujian Akhir Semester dalam mata kuliah
Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/