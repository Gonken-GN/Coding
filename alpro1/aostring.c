#include <stdio.h>
#include <string.h>

/*Saya Novaldi Sandi Ago 2003941
mengerjakan soal arsss14 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

int main(){
	int i, j, k, l, n, SPASI = 0;
	scanf("%d", &n);
	char KATA[n][100];
	int PANJANG[n];
	for(i = 0; i < n; i++){
		scanf("%s", KATA[i]);
		PANJANG[i] = strlen(KATA[i]);
	}
	for(i = 0; i < n; i+=2){
		for(j = 0; j < SPASI; j++){
			printf(" ");
		}
		for(j = 0; j < PANJANG[i] / 2; j++){
			printf("%c", KATA[i][j]);
		}
		printf(" ");
		for(j = PANJANG[i] / 2; j < PANJANG[i]; j++){
			printf("%c", KATA[i][j]);
		}
		printf("\n");
		SPASI = SPASI + PANJANG[i] / 2;
		for(j = 0; j < PANJANG[i + 1]; j++){
			for(k = 0; k < 1; k++){
				for(l = 0; l < SPASI; l++){
					printf(" ");
				}
				printf("%c\n", KATA[i + 1][PANJANG[i + 1] - j - 1]);
			}
		}
		SPASI = SPASI + 1;
	}
	return 0;
}