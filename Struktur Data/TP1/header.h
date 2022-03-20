#include <stdio.h>
#include <malloc.h>
#include <string.h>
/*deklarasi tipe data terstruktur untuk menyimpan isi dari list*/
typedef struct{
    char nama[100];
    int harga;
    float rating;
} ratingmatkul;
typedef struct elmt* alamatelmt;
typedef struct elmt{
    ratingmatkul kontainer;
    alamatelmt next;
}elemen;
typedef struct{
    elemen* first;
}list;
typedef struct{
    char nama[100];
    int harga;
    float rating;
}menu;
int uang;
char status[100];
int iterator;
//prosedur untuk membuat list dan mencari elemen kosong dari list
void createList(list *L);
int countElement(list L);
int emptyElement(list L);
//prosedur untuk memasukkan data ke dalam list, penempatan data dapat diletakkan di paling depan, tengah maupun belakang
void addFirst(char nama[], int harga, float rating, list *L);
void addAfter(elemen* prev, char nama[], int harga, float rating, list *L);
void addLastA(char nama[], int harga, float rating, list *L, menu data[]);
void addLastD(char nama[], int harga, float rating, list *L, menu data[]);
//prosedur untuk menghapus sebagian isi dari dalam list maupun seluruh isi list
void delFirst(list *L);
void delAfter(elemen* prev, list *L);
void delLast(list *L);
void printElement(list L);
void delAll(list *L);
void jumlah(int banyak, menu data[], list L);//prosedur untuk menghitung sisa uang yang dimiliki dari menu yang telah dipilih sesuai dengan uang yang dimilikinya
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 1 (TP1) dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/