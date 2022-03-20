#include <stdio.h>
#include <string.h>
//data terstruktur untuk menyimpan data film
typedef struct{
    char nama[100];     //nama film
    char genre[100];    //genre film
    char sutradara[100];//sutradara film
    char bioskop[100];  //bioskop film
    char id[10];        //id genre, sutrdara, dan bioskop
}listfilm;
void wfinal(listfilm movie[], listfilm genre[], listfilm sutradara[], listfilm bioskop[], listfilm akhir[], int a, int b, int c, int d, FILE *ffilm, FILE *fgenre, FILE *fsutradara, FILE *fbioskop);//prosedur untuk membuat file listfilmfinal
void readwfinal(listfilm movie[], listfilm akhir[]);//menampilkan isi dari file listfilmfinal
void tambahfilm(listfilm film[], FILE *ffilm, int a);//menambah record untuk file film
void tambahgenre(listfilm genre[], FILE *fgenre, int a);//menambah record untuk file genre
void tambahsutradara(listfilm sutradara[], FILE *fsutradara, int a);//menambah record untuk file sutradara
void tambahbioskop(listfilm bioskop[], FILE *fbioskop, int a);//menambah record untuk file bioskop
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 8 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/