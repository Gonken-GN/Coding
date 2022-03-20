#include <stdio.h>
#include <string.h>

/*Saya M. Fajar Yusuf F. mengerjakan TP9 Alpro1 - TSKW19
dalam mata kuliah Alpro 1
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

char berhasil[100][100], gagal[100][100];//var global array sihir yg berhasil dan gagal
int vokalPy, konsonanPy, vokalPw, konsonanPw;//var global jumlah konsonan dan vokal
void check(int n, char penyakit[], char elemenPenyakit[], char penawar[][100], char elemen[][100]); //prosedur mengecek berhasil atau gagal
void checkVK(int j, char penyakit[], char penawar[][100]);//prosedur mengecek konsonan dan vokal
void print();//mencetak hasil