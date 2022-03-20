#include "header.h"
void bakteri(int a, int b, int c){
    //proses untuk mengkalkulasi jumlah bakteri tiap jam dengan melakukan rekursif
    if(b==0){//jika indeks yang diinput adalah 0 maka jam ke 0 merupakan hasil kalkulasi bakteri
        hasil[a] = jam[0];
    }else if(b==1){//jika indeks yang diinput adalah 0 maka jam ke 1 merupakan hasil kalkulasi bakteri
        hasil[a] = jam[1];
    }else if(c==b){//basis jika counter sama dengan indeks input maka proses rekursif akan berhenti dan akan melakukan kalkulasi rumus{
        hasil[a] = 2*(jam[c-1]) + ((jam[c-2])*(jam[c-2]));
    }else if (c<b){//syarat melakukan rekursf
        jam[c] = 2*(jam[c-1]) + ((jam[c-2]) * (jam[c-2]));
        bakteri(a, b, c+1);//rekursif
    }
    
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 3 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/