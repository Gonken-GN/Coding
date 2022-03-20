#include "header.h"

/*Saya Novaldi Sandi Ago 2003941
mengerjakan Soal no 10 dalam mata kuliah Struktur Data
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

int banyak(char word[]){
	int depan = 0;
	for(int i = 0; i < strlen(word); i++){
		if(word[i] == 'a')
			depan++;
	}
	return depan;
}