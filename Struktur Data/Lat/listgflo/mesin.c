#include "header.h"

/*Saya Novaldi Sandi Ago 2003941
mengerjakan Soal no 9 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

void swap(char word[][100], int a){
	char ganti[100];
	while(a >= 3){
		strcpy(ganti, word[a]);
		strcpy(word[a], word[a-1]);
		strcpy(word[a-1], ganti);
		a--;
	}
}

int convert(char word[]){
	int depan = 0;
	for(int i = 0; i < strlen(word) && word[i] != '.'; i++){
		depan *= 10;
		depan += word[i] - '0';
	}
	return depan;
}