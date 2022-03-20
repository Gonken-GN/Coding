#include <stdio.h>
#include <string.h>
#include <malloc.h>
//tipe data terstruktur untuk menyimpan input dan sebagai isi dari queue
typedef struct{
    char nama[100];
    char member[100];
    int waktu;
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
void add(char member[], char nama[], int waktu, queue *Q);//prosedur untuk memasukkan data kedalam queue
void addP(char member[], char nama[], int waktu,queue *Q);//prosedur untuk memasukkan data berdasakan prioritas data
void cek(queue *Q, queue *pemisah);
void del(queue *Q);//prosedur untuk menghapus elemen dari queue
void print(queue Q);//prosedur untuk menampilkan isi dari queue (elemen)
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 4 (Tp4) dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/