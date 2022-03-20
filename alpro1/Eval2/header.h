#include <stdio.h>
#include <string.h>
int panputam, panpem;//variabel global untuk menampung panjang tiap string
char tampung[100], tampung2[100];//variabel global untuk menampung string yang telah digabung
int za, zb, zc, zd, ze, zf, zg, zh, zi, zj, zk, zl, zm, zn, zo, zp, zq, zr, zs, zt, zu, zv, zw, zx, zy, zz;//variabel untuk menghitung tiap huruf alfabet dalam string
int cek;//variabel untuk menampung apakah string tersebut adalah anagram atau tidak
void panstr(int n, char str[n][100], int m, char str2[m][100]);//prosedur untuk mencari panjang string dan memasukkan string tiap baris ke dalam tampung
void temp();//prosedur untuk mencari apakah string utama memikiki jumlah huruf alfabet yang sama dengan pembanding
int hasil();//fungsi untuk menentukan apakah string utama dengan pembanding adalah anagram atau tidak
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Evaluasi 2 dalam mata kuliah
Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/