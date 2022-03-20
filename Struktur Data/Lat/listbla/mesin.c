#include "header.h"

/*Saya Novaldi Sandi Ago 2003941
mengerjakan Soal no 8 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

void swap(char word[][100], int a){
	int tengah = a/2;
	char ganti[100];
	while(a > tengah){
		strcpy(ganti, word[a]);
		strcpy(word[a], word[a-1]);
		strcpy(word[a-1], ganti);
		a--;
	}
}