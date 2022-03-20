#include <stdio.h>
	int main () {

		int masukan;
		int baris;
		int kolom;

		scanf("%d", &masukan);

		for(baris = 1; baris <= masukan; baris++) {
			for(kolom = 1; kolom <= baris; kolom++) {
				printf("*");
			}
			for(kolom = masukan - 1; kolom >= baris; kolom--) {
				printf(" ");
			}
			for(kolom = masukan - 1; kolom >= baris; kolom--) {
				printf(" ");
			}
			for(kolom = 1; kolom <= baris; kolom++) {
				printf("*");
			}
			for(kolom = 1; kolom <= masukan; kolom++) {
				printf("*");
			}
			for(kolom = 1; kolom <= baris; kolom++) {
				printf("*");
			}
			printf("\n");
		}

		for(baris = 1; baris <= masukan - 1; baris++) {
			for(kolom = masukan; kolom >= baris + 1; kolom--) {
				printf("*");
			}
			for(kolom = 1; kolom <= baris; kolom++) {
				printf(" ");
			}
			for(kolom = 1; kolom <= baris; kolom++) {
				printf(" ");
			}
			for(kolom = masukan; kolom >= baris + 1; kolom--) {
				printf("*");
			}
			for(kolom = 1; kolom <= masukan; kolom++) {
				printf("*");
			}
			for(kolom = masukan; kolom >= baris + 1; kolom--) {
				printf("*");
			}
			printf("\n");
		}

		for(baris = 1; baris <= masukan; baris++) {
			if(masukan == 1) {
				for(kolom = 1; kolom <= baris; kolom++) {
					printf(" ");
				}
			}
			for(kolom = 1; kolom <= baris; kolom++) {
				printf("*");
			}
			for(kolom = masukan - 1; kolom >= baris; kolom--) {
				printf(" ");
			}
			for(kolom = masukan - 1; kolom >= baris; kolom--) {
				printf(" ");
			}
			for(kolom = 1; kolom <= baris; kolom++) {
				printf("*");
			}
			printf("\n");
		}
		return 0;
	}