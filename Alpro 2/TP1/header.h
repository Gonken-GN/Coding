#include <stdio.h>
int matrikst[100][100], matrikst2[100][100];//variabel untuk menampung transpose matriks
int matriksa[100][100];//variabel untuk menampung matriks final(matriks yang telah diputar)
int c;//variabel untuk menampung jumlah kolom terakhir matriks
int trafek(int a, int b, int matriks[a][b]);//fungsi prosedur untuk mencari kolom terakhir matriks yang telah di refleksikan dan ditranspose
void putarR(int a, int b, int matriks[a][b]);//prosedur untuk membuat matriks rotasi kanan
void putarL(int a, int b, int matriks[a][b]);//prosedur untuk membuat matriks rotasi kiri
int sama(int a, int b, int matriks[a][b]);//fungsi prosedur untuk mengetahui apakah matriks yang telah dirotasikan akan sama dengan matriks awal(input user)
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 1 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/