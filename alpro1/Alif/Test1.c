#include <stdio.h>
	int main () {

		int baris;
		int kolom;
		int masukan;
		char a, b, c, d, e, f;

		scanf("%d", &masukan);
		scanf(" %c %c %c %c %c %c", &a, &b, &c, &d, &e, &f);
		
		for(baris = 1; baris <= masukan; baris++) {
			for(kolom = 1; kolom <= baris; kolom++) {
				printf("*");
			}
			for(kolom = masukan - 1; kolom >= baris; kolom--) {
				printf(" ");
			}
			for(kolom = baris; kolom <= baris; kolom++) {
				printf(" ");
			}
			for(kolom = masukan - 1; kolom >= baris; kolom--) {
				printf(" ");
			}
			for(kolom = 1; kolom <= baris; kolom++) {
				printf("*");
			}
			for(kolom = 1; kolom <= masukan; kolom++) {
				printf(" ");
			}
			for(kolom = masukan; kolom >= baris; kolom--) {
				printf(" ");
			}
			for(kolom = baris; kolom <= baris; kolom++) {
				printf("*");
			}
			printf("\n");
		}

		for(baris = 1; baris <= 2*masukan + 1; baris++) {
			printf("*");
		}
		for(baris = 1; baris <= masukan; baris++) {
			printf(" ");
		}
		printf("*");
		printf("\n");

		for(baris = 1; baris <= masukan; baris++) {
			for(kolom = masukan; kolom >= baris; kolom--) {
				printf(" ");
			}

			for(kolom = 1; kolom <= 1; kolom++) {
				printf("*");
			}

			for(kolom = 3; kolom <= (2*baris - 1); kolom++) {
				if(baris > 1){
					printf(" ");
				}
			}

			for(kolom = 1; kolom <= 1; kolom++) {
				if(baris > 1){
					printf("*");
				}
			}

			for(kolom = masukan; kolom >= baris; kolom--) {
				printf(" ");
			}

			for(kolom = masukan - 1; kolom >= baris; kolom--) {
				printf(" ");
			}

			for(kolom = 1; kolom <= 1; kolom++) {
				printf("*");
			}
			if(masukan % 2 == 1 && masukan != 1){
				for(kolom = masukan - (masukan/2); kolom <= baris; kolom++) {
					printf(" ");
				}
			}
			else if(masukan % 2 == 0){
				for(kolom = (masukan/2); kolom < baris; kolom++) {
					printf(" ");
				}
			}
			for(kolom = 1; kolom <= masukan / 2; kolom++) {
				if(baris > masukan / 2){
					printf("*");
				}
			}

			printf("\n");
		}

		for(baris = 1; baris <= 2; baris++) {
			for(kolom = 1; kolom <= ((masukan+1)*2 - 1) + (1+(masukan-(masukan/2))) + (masukan/2); kolom++) {
				if(baris <= 2){
					printf("*");
				}
			}
			if(baris <= 2){
				printf("\n");
			}
		}
		for(baris = 1; baris <= 2; baris++) {
			for(kolom = 1; kolom <= masukan; kolom++) {
				if(baris <= 2){
					printf(" ");
				}
			}
			for(kolom = 1; kolom <= (masukan/2) + 1; kolom++) {
				if(baris <= 2){
					printf("*");
				}
			}
			for(kolom = 1; kolom <= masukan; kolom++) {
				if(baris <= 2){
					printf(" ");
				}
			}
			for(kolom = 1; kolom <= (masukan/2) + 1; kolom++) {
				if(baris <= 2){
					printf("*");
				}
			}
			if(baris <= 2){
				printf("\n");
			}
		}
		for(baris = 1; baris <= 2; baris++) {
			for(kolom = 1; kolom <= ((masukan+1)*2 - 1) + (1+(masukan-(masukan/2))) + (masukan/2); kolom++) {
				if(baris <= 2){
					printf("*");
				}
			}
			if(baris <= 2){
				printf("\n");
			}
		}
		for(baris = 1; baris <= 6; baris++) {
			for(kolom = 2 - (masukan * 2); kolom <= baris; kolom++) {
				
					printf(" ");
			}
			if(baris == 1){
				printf("%c\n", a);
			}
			if(baris == 2){
				printf("%c\n", b);
			}
			if(baris == 3){
				printf("%c\n", c);
			}
			if(baris == 4){
				printf("%c\n", d);
			}
			if(baris == 5){
				printf("%c\n", e);
			}
			if(baris == 6){
				printf("%c\n", f);
			}

				printf("\n");
			
		}
		return 0;
	}

	/*Saya Alif R mengerjakan evaluasi PPKIDK19 dalam mata kuliah Alpro 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/