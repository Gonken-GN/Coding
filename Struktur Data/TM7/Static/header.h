#include <stdio.h>
#include <string.h>
//tipe data terstruktur untuk menyimpan input dan sebagai isi dari elemen
typedef struct{
    char nim[100];
    char nama[100];
}nilai;
//deklarasi jumlah isi queue
typedef struct{
    int first;
    int last;
    nilai data[10];
}queue;

void createEmpty(queue *Q);//prosedur untuk inisialisasi sebuah queue
int isEmpty(queue Q);//prosdur untuk mengecek apakah queue kosong atau tidak
int isFull(queue Q);//prosedur untuk mengecek apakah queue penuh atau tidak
void add(char nim[], char nama[], queue *Q);//prosedur untuk memasukkan input menjadi elemen dari queue
void addpri(char nim[], char nama[], queue *Q, int indeks);//prosedur untuk memasukkan input berdasarkan prioritas
void addPr(char nim[], char nama[], queue *Q, int seq);
void del(queue *Q);//prosedur untuk menghapus elemen dari queue
void print1(queue Q);//prosedur untuk menampilkan isi dari queue
void print2(queue Q);//prosedur untuk menampilkan isi dari queue
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Test Mesin (7) dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/