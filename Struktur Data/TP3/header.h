#include <stdio.h>
#include <string.h>
#include <malloc.h>
//data terstruktur untuk menyimpan input dan isi stack
typedef struct{
    char tahun[100];
    char judul[100];
    char band[100];
}mhsiswa;
//deklarasi data terstruktur untuk pointer
typedef struct elmt *alamatelmt;
typedef struct elmt{
    mhsiswa kontainer;
    alamatelmt next;
}elemen;

typedef struct{
    elemen* top;
}stack;
void createEmpty(stack *S);//inisialisasi stack
int isEmpty(stack S);//pengecekan stack kosong atau tidak
int countElement(stack S);//menghitung isi dari stack
void push(char tahun[], char judul[], char band[], stack *S);//prosedur untuk mengisi stack
void pop(stack *S);//prosedur untuk menghapus isi stack
void printelemenR(stack S);//print isi stack untuk ROCK
void check(stack S, stack *ganjil, stack *genap);//prosedur untuk mengecek judul ganjil atau genap lalu memasukkan kedalam stack yang telah disediakan
void printelemenP(stack S);//print isi stack untuk POP

/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 3 (TP3) dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/