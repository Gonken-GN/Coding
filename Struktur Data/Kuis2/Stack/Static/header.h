#include <stdio.h>
#include <string.h>
//data terstruktur untuk menyimpan input dan sebagai isi dari stack (elemen)
typedef struct{
    char nama[100];
    char bahan[100];
}mhsiswa;
//data terstruktur untuk pointer top dan isi data mahasiswa sebagai isi dari stack
typedef struct{
    int top;
    mhsiswa data[50];
}stack;
char clear[50][100];
void createEmpty(stack *S);//inisialisasi untuk stack
int isEmpty(stack S);//prosedur pengecekan stack kosong atau tidak
int isfull(stack S);//prosedur pengecekan stack penuh atau tidak
void push(char nama[], char bahan[], stack *S);//prosedur untuk memasukkan input kedalam stack
void pop(stack *S);//prosedur untuk menghapus satu elemen dalam stack
void printelemen(stack S);//prosedur untuk menampilkan isi dari stack
int ambil(stack *S, stack *semua, int banyak, int iteratorS);
void sementara(stack S, stack *semua, int banyak);
void printelemenAll(stack S, int banyak);
void geser(stack *S, stack *W);//prosedur untuk memindahkan dari stack A ke stack B
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Kuis2 dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
