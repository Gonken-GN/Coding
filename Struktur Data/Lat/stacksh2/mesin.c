#include "header.h"

/*Saya Novaldi Sandi Ago 2003941
mengerjakan Soal no 16 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

void tampil(int n, int m, int sama, char word[][100], char kata[][100]){
	if(sama == 1){
		for(int i = 0; i < n; i++)
			printf("%s\n", word[i]);
	}
	else{
		for(int i = 0; i < n; i++)
			printf("%s\n", word[i]);
		for(int i = 0; i < m; i++)
			printf("%s\n", kata[i]);
	}
}