#include "header.h"

/*Saya Novaldi Sandi Ago 2003941
mengerjakan Soal no 10 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

void tampil(int bil[], int n){
	printf("1\n");
	for(int i = 0; i < n; i++){
		if(bil[i]%2 == 1)
			printf("-%d\n", bil[i]);
	}
	printf("2\n");
	for(int i = 0; i < n; i++){
		if(bil[i]%2 == 0)
			printf("-%d\n", bil[i]);
	}
}