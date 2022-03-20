#include <stdio.h>
#include <string.h>
typedef struct{
    char nama[100];
    char id[100];
    char penulis[100];
    char genre[100];
}buku;
int indeks;     //variabel untuk menampung indeks pada huruf tiap string  
int panjangkata;//varibael untuk menampung panjang kata string
char ckata[50];//variabel untuk menampung string kata pada pita
void STARTKATA(char pita[]);//prosedur untuk memulai mesin kata
void INCKATA(char pita[]);//prosedur untuk menambah indeks agar huruf pada string pita dapat maju
char* GETCKATA();//fungsi untuk menampung atau mengambil string pada pita
int GETPANJANGKATA();//fungsi untuk menampung atau mengambil panjang string
int EOPKATA(char pita[]);//fungsi untuk mengecek apakah huruf pada string pita menemukan titik '.'
void RESETKATA();
void flushnkomik(FILE *nkomik, buku komik[]);
void flushgkomik(FILE *gkomik, buku genre[]);
void flushpkomik(FILE *pkomik, buku penulis[]);
void insertgkomik(buku genre[], char pita[], int banyak);
void insertpkomik(buku penulis[], char pita[], int banyak);
void insertnkomik(buku komik[], char pita[], int banyak);
void deletegkomik(buku genre[], int banyak, int i);
void deletepkomik(buku penulis[], int banyak, int i);
void deletenkomik(buku komik[], int banyak, int i);
void tampilnkomik(buku komik[]);
void tampilgkomik(buku genre[]);
void tampilpkomik(buku penulis[]);
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/