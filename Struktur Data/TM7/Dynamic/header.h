#include <stdio.h>
#include <string.h>
#include <malloc.h>
//tipe data terstruktur untuk menyimpan input dan sebagai isi dari queue
typedef struct{
    char nim[100];
    char nama[100];
}nilai;
//deklarasi pointer
typedef struct elm *alamat;
typedef struct elm{
    nilai container;
    alamat next;
}elemen;
typedef struct{
    elemen *first;
    elemen *last;
}queue;
void createEmpty(queue *Q);//prosedur untuk inisialisasi sebuah queue
int isEmpty(queue Q);//prosedur untuk mengecek apakah queue kosong atau tidak
int countelemen(queue Q);//prosedur untuk menghitung jumlah queue yang terisi
void add(char nim[], char nama[], queue *Q);//prosedur untuk memasukkan data kedalam queue
void addP(char nim[], char nama[], queue *Q, int indeks);//prosedur untuk memasukkan data berdasakan prioritas data
void del(queue *Q);//prosedur untuk menghapus elemen dari queue
void print1(queue Q);//prosedur untuk menampilkan isi dari queue (elemen)
void print2(queue Q);//prosedur untuk menampilkan isi dari queue (elemen)
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Test Mesin (7) dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/