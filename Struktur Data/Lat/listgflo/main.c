#include "header.h"

/*Saya Novaldi Sandi Ago 2003941
mengerjakan Soal no 9 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

int main(){
	int n, a, b;
	scanf("%d", &n);
	char word[n][100];
	for(int i = 0; i < n; i++){
		int depan;
		scanf("%s", word[i]);
		depan = convert(word[i]);
		if(i >= 3 && depan%2 == 0){
			swap(word, i);
		}
	}
	for(int i = 0; i < n; i++){
		if(i%2 == 1){
			for(int j = 0; j < strlen(word[i-1]); j++)
				printf(" ");
		}
		printf("%s %s\n", word[i], word[n-i-1]);
	}
	return 0;
}