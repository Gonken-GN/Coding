#include "header.h"

/*Saya Novaldi Sandi Ago 2003941
mengerjakan Soal no 1 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

int main(){
	int n;
	scanf("%d", &n);
	char word[n][100];
	for(int i = n-1; i >= 0; i--)
		scanf("%s", word[i]);
	tampil(n, word);
	return 0;
}