#include <stdio.h>
	int main () {

		int masukan;
		int baris;
		int kolom;

		scanf("%d", &masukan);

		for(baris = 1; baris <= masukan*2; baris++) {
			for(kolom = 1; kolom <= baris; kolom++) {
				printf("*");
			}

			for(kolom = 2*masukan - 2; kolom >= baris - 1; kolom--) {
				printf(" ");
			}

			for(kolom = 2*masukan - 2; kolom >= baris - 1; kolom--) {
				printf(" ");
			}

			for(kolom = 1; kolom <= 2*baris-1; kolom++) {
				printf("*");
			}

			for(kolom = 2*masukan - 2; kolom >= baris - 1; kolom--) {
				printf(" ");
			}

			for(kolom = 2*masukan - 2; kolom >= baris - 1; kolom--) {
				printf(" ");
			}

			for(kolom = 1; kolom <= baris; kolom++) {
				printf("*");
			}
			printf("\n");
		}

		for(baris = 1; baris <= masukan; baris++) {
			for(kolom = 1; kolom <= 2*masukan + 1; kolom++) {
				printf(" ");
			}
		if (masukan == 3) {
			for(kolom = 1; kolom <= 3*masukan; kolom++) {
				printf("*");
			} 	
		} else if (masukan > 3) {
			for(kolom = 1; kolom <= 3*masukan + (masukan - 3); kolom++) {
				printf("*");
			}
		} else if (masukan < 3 && masukan != 1) {
			for(kolom = 1; kolom <= 3*masukan - (masukan - 1); kolom++) {
				printf("*");
			}
		} else if (masukan == 1) {
			for(kolom = 1; kolom <= masukan; kolom++) {
				printf("*");
			}
		} 
		printf("\n");
		}

		for(baris = 1; baris <= masukan; baris++) {
			if (masukan == 3) {
			for(kolom = 1; kolom <= 4*masukan; kolom++) {
				printf(" ");
			} 	
		} else if (masukan > 3) {
			for(kolom = 1; kolom <= 4*masukan + (masukan - 3); kolom++) {
				printf(" ");
			}
		} else if (masukan < 3 && masukan != 1) {
			for(kolom = 1; kolom <= 4*masukan - (masukan - 1); kolom++) {
				printf(" ");
			}
		} else if (masukan == 1) {
			for(kolom = 1; kolom <= masukan; kolom++) {
				printf(" ");
			}
		}

		if (masukan == 1) {
		for(kolom = 1; kolom <= baris + 1; kolom++) {
				printf(" ");
			}
		} else if (masukan > 1) {
			for(kolom = 1; kolom <= baris; kolom++) {
				printf(" ");
			}
		}

		if (masukan == 1) {
			for(kolom = masukan; kolom >= baris; kolom--) {
				printf("*");
			}
		} else if (masukan > 1) {
			for(kolom = masukan; kolom >= baris; kolom--) {
				printf("*");
			}
		}

		printf("\n");
		}

		return 0;
	}