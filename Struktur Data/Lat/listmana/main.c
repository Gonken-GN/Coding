#include "header.h"

/*Saya Novaldi Sandi Ago 2003941
mengerjakan Soal no 11 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

int main(){
	int n, a, b;
	scanf("%d", &n);
	char word[n][100];
	char depan[n];
	int done[n];
	for(int i = 0; i < n; i++){
		scanf("%s", word[i]);
		done[i] = 0;
		depan[i] = banyak(word[i]);
	}
	for(int i = 0; i < n; i++){
		if(done[i] == 1)
			continue;
		printf("%c\n-%s\n", depan[i], word[i]);
		done[i] = 1;
		for(int j = i+1; j < n; j++){
			if(depan[j] == depan[i] && done[j] == 0){
				printf("-%s\n", word[j]);
				done[j] = 1;
			}
		}
	}
	return 0;
}