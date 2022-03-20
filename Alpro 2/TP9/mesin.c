#include "header.h"
void start(char pita[]){
    indeks=0;//inisialisasi indeks
    cc=pita[indeks];//string pita dengan indeks 0 
} //prosedur untuk memulai mesin karakter
void inc(char pita[]){
    indeks++;// indeks bertambah
    cc=pita[indeks];//proses menyimpan pita pada indeks ke variabel cc
}//prosedur untuk menambah indeks pada mesn karakter
int eop(){
    if(cc=='.'){    //increment akan berakhir jika karakter pada string pita bernila titik
        return 1;//penanda telah bertemu end of pita
    }else{//jika belum bertemu end of pita
        return 0;
    }
}//prosedur increment akan berakhir jika bertemu end of pita
void adv(char pita[]){
    indeks++;
    cc=pita[indeks];
    while((cc==' ')&&(eop()==0)){//jika karakter pada mesn karakter bernilai spasi maka indeks  akan bertambah selama belum bertemu denganend of file
        indeks++;
        cc=pita[indeks];
    }
}//prosedur untuk meneruskan increment jka bertemu dengan spasi selama bukan eop
char getcc(){
    return cc;
}//prosedur untuk mengambil karakter pada mesin karakter
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 9 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/