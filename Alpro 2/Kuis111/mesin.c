#include "header.h"
void cek1(int a, int b){
    total1 += data[a][b].harga;//menjumlahkan baris dan kolom yang diinput 
}
void cek2(int a, int b){
    total2 += data[a][b].harga;//menjumlahkan baris dan kolom yang diinput
}
int pemenang(){
	//proses untuk mencari pemain mana yang memiliki jumlah harga yang lebih kecil 
    if(total1 < total2){
        return 2;
    }else if(total2 < total1){
        return 1;
    }else{
        return 0;
    }
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Kuis 1 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/