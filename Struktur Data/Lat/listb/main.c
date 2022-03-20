#include "header.h"

/*Saya Novaldi Sandi Ago 2003941
mengerjakan Soal no 10 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

int main(){
	int n, a, b, kiri = 0, kanan = 0;
	scanf("%d", &n);
	char word[n][100];
	for(int i = 0; i < n; i++){
		int depan;
		scanf("%s", word[i]);
		kanan += 2*strlen(word[i]);
		depan = banyak(word[i]);
		if(i >= 3 && depan%2 == 0){
			swap(word, i);
		}
	}
	for(int i = 0; i < n; i++){
		kanan -= (strlen(word[i]) + strlen(word[n-i-1]));
		for(int i = 0; i < kiri; i++)
			printf(" ");
		printf("%s ", word[n-i-1]);
		for(int i = 0; i < kanan; i++)
			printf(" ");
		printf("%s\n", word[i]);
		kiri += strlen(word[n-i-1]);
	}
	return 0;
}