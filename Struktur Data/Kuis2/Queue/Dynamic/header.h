#include <stdio.h>
#include <string.h>
#include <malloc.h>
//tipe data terstruktur untuk menyimpan input dan sebagai isi dari queue
typedef struct{
    char nama[100];
    char kota[100];
    int bantuan;
    int prioritas;
}nilai;
//deklarasi pointer
typedef struct elm *alamat;
typedef struct elm{
    nilai kontainer;
    alamat next;
}elemen;
typedef struct{
    elemen *first;
    elemen *last;
}queue;
int banyak;
void createEmpty(queue *Q);//prosedur untuk inisialisasi sebuah queue
int isEmpty(queue Q);//prosedur untuk mengecek apakah queue kosong atau tidak
int countelemen(queue Q);//prosedur untuk menghitung jumlah queue yang terisi
void add(char nama[], int prioritas, char kota[], int bantuan, queue *Q);//prosedur untuk memasukkan data kedalam queue
void addP(char nama[], int prioritas, char kota[], int bantuan, queue *Q);
void del(queue *Q);//prosedur untuk menghapus elemen dari queue
void print(queue Q);//prosedur untuk menampilkan isi dari queue (elemen)
void cek(queue *Q, queue *W, nilai temp[], int jumlah, int keluar);
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Kuis2 dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/