#include <stdio.h>
#include <string.h>
int k;//variabel global iterator k (agar tidak mendeklarasi variabel k setiap prosedur)
int panjang[100];//variabel global untuk menampung panjang tiap string
int check[10];//variabel global untuk menampung apakah panjang string sama dengan 1
int check2[10];//variabel global untuk menampung apakah panjang string sama dengan 3
void input(int n, int m, char str[m][100]);//prosedur untuk mencari panjang string dan mengecek apakah panjang string sama dengan 1 dan atau 3
void pola(int o, int n,int m); //prosedur membentuk dan print pola sesuai dengan nilai panjang string
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/