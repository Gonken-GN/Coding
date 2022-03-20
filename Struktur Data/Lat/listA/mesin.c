#include "header.h"

/*Saya Novaldi Sandi Ago 2003941
mengerjakan Soal no 11 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

void swap(char word[][100], int depan[], int a){
	char ganti[100];
	int help;
	while(a > 0 && depan[a] < depan[a-1]){
		strcpy(ganti, word[a]);
		strcpy(word[a], word[a-1]);
		strcpy(word[a-1], ganti);
		help = depan[a];
		depan[a] = depan[a-1];
		depan[a-1] = help;
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