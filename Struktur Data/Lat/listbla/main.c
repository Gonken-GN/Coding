#include "header.h"

/*Saya Novaldi Sandi Ago 2003941
mengerjakan Soal no 8 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

int main(){
	int n, a, b;
	scanf("%d", &n);
	char word[n][100];
	for(int i = 0; i < n; i++){
		scanf("%s", word[i]);
		if(strcmp(word[i], "dawala") == 0){
			swap(word, i);
		}
	}
	int space = 0;
	for(int i = 0; i < n; i++){
		for(int i = 0; i < space; i++){
			printf(" ");
		}
		printf("%s ", word[i]);
		printf("%s\n", word[n-i-1]);
		space += strlen(word[i]);
	}
	return 0;
}