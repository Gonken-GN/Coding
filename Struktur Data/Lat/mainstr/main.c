#include "header.h"

/*Saya Novaldi Sandi Ago 2003941
mengerjakan Soal no 1 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

int main(){
	int n;
	scanf("%d", &n);
	int much[n], index[n];
	char word[n][100];
	for(int i = 0; i < n; i++){
		index[i] = i;
		scanf("%s", word[i]);
		much[i] = banyak(word[i], i);
		sorting(much, index, i);
	}
	for(int i = 0; i < n; i++){
		printf("%s\n", word[index[i]]);
	}
	return 0;
}