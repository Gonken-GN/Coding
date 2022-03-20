#include <stdio.h>
#include <string.h>

int indeks; //varabel untuk menyimpan indeks
char cc;    //variabel untuk menyimpan karakter string

void start(char pita[]);    //prosedur untuk memulai mesin karakter
void inc(char pita[]);      //prosedur untuk menambah indeks pada mesn karakter
int eop();                  //prosedur increment akan berakhir jika bertemu end of pita
void adv(char pita[]);      //prosedur untuk meneruskan increment jka bertemu dengan spasi selama bukan eop
char getcc();               //prosedur untuk mengambil karakter pada mesin karakter
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 9 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/