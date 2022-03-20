#include <stdio.h>
int main () {
	int n;
	char vok;
	char bes;
	int counter = 0;
	int baris;
	int kolom;

	scanf("%d", &n);
	scanf(" %c", &bes);

	if((vok == 'a') || (vok == 'i') || (vok == 'u') || (vok == 'e') || (vok == 'o')){
		counter = 1;
	} else if((vok != 'a') || (vok != 'i') || (vok != 'u') || (vok != 'e') || (vok != 'o')) {
		counter = 0;
	}
	if((vok == 'A') || (vok == 'I') || (vok == 'U') || (vok == 'E') || (vok == 'O')){
		counter = 1;
	} else if((vok != 'A') || (vok != 'I') || (vok != 'U') || (vok != 'E') || (vok != 'O')) {
		counter = 0;
	}
	switch(counter){
		case 0:
			for(baris = 1; baris <= n; baris++){
				for (kolom = 1; kolom <= n; kolom++){
				printf(" ");
				}
				for(kolom = 1; kolom<= n; kolom++){
				printf("*");
				}
				for(kolom = 1;kolom <= n;kolom++){
				printf(".,.,");
				}
				for(kolom = 1; kolom <= n;kolom++){
				printf("*");
				}
				if(baris == 1){
					for(kolom = 1; kolom <= n;kolom++){
					printf("*");
					}
				}
				if(baris != 1 && baris != n){
					for(kolom = 1; kolom <= n; kolom++){
					printf(" ");
					}
				}
				if(baris != 1 && baris != n){
					for(kolom = n;kolom <= n;kolom++){
					printf("*");
					}
				}
				if(baris == n){
					for(kolom = 1; kolom <= n;kolom++){
					printf("*");
					}
				}
			printf("\n");
		}
			for(baris = 1; baris <= n; baris++){
				for (kolom = 1; kolom <= n; kolom++){
					printf(" ");
				}
				for(kolom = baris;kolom <= baris;kolom++){
					printf(" ");
				}
				for(kolom = n-baris+1; kolom < n;kolom++){
					printf("  ");
				}
				for(kolom = n-baris; kolom >= 0;kolom--){
					printf("*");
				}
				if(baris == n){
					for(kolom = 1;kolom <= n;kolom++){
						printf("**");
					}
				}
				if(baris != n){
					for(kolom = n-baris; kolom>=1; kolom--){
					printf(".,");
				}
				for(kolom > 1; kolom < n;kolom++){
					printf(".,");
					}
				}
				for(kolom = n-baris; kolom >= 0;kolom--){
					printf("*");
				}
				printf("\n");
			}
			for(baris = 1; baris <= 1;baris++){
				for(kolom = 1; kolom <= n;kolom++){
					printf("--------");
				}
				printf("\n");
			}
			for(baris = 1; baris <= 1;baris++){
				for(kolom = 1;kolom <= 2;kolom++){
					printf(" ");
				}
				for(kolom = 1; kolom <= n;kolom++){
					printf("-------");
				}
				for(kolom = 1;kolom <= 2;kolom++){
					printf("-");
				}
				printf("\n");
			}
			break;
		case 1:
			for(baris = 1; baris <= n; baris++){
				for (kolom = 1; kolom <= n; kolom++){
				printf(" ");
				}
				for(kolom = 1; kolom<= n; kolom++){
				printf("*");
				}
				for(kolom = 1;kolom <= n;kolom++){
				printf("    ");
				}
				for(kolom = 1; kolom <= n;kolom++){
				printf("*");
				}
				if(baris == 1){
					for(kolom = 1; kolom <= n;kolom++){
					printf("*");
					}
				}
				if(baris != 1 && baris != n){
					for(kolom = 1; kolom <= n; kolom++){
					printf(" ");
					}
				}
				if(baris != 1 && baris != n){
					for(kolom = n;kolom <= n;kolom++){
					printf("*");
					}
				}
				if(baris == n){
					for(kolom = 1; kolom <= n;kolom++){
					printf("*");
					}
				}
			printf("\n");
		}
			for(baris = 1; baris <= n; baris++){
				for (kolom = 1; kolom <= n; kolom++){
					printf(" ");
				}
				for(kolom = baris;kolom <= baris;kolom++){
					printf(" ");
				}
				for(kolom = n-baris+1; kolom < n;kolom++){
					printf("  ");
				}
				for(kolom = n-baris; kolom >= 0;kolom--){
					printf("*");
				}
				if(baris == n){
					for(kolom = 1;kolom <= n;kolom++){
						printf("**");
					}
				}
				if(baris != n){
					for(kolom = n-baris; kolom>=1; kolom--){
					printf(".,");
				}
				for(kolom > 1; kolom < n;kolom++){
					printf(".,");
					}
				}
				for(kolom = n-baris; kolom >= 0;kolom--){
					printf("*");
				}
				printf("\n");
			}
			for(baris = 1; baris <= 1;baris++){
				for(kolom = 1; kolom <= n;kolom++){
					printf("--------");
				}
				printf("\n");
			}
			for(baris = 1; baris <= 1;baris++){
				for(kolom = 1;kolom <= 2;kolom++){
					printf(" ");
				}
				for(kolom = 1; kolom <= n;kolom++){
					printf("-------");
				}
				for(kolom = 1;kolom <= 2;kolom++){
					printf("-");
				}
				printf("\n");
			}
			break;
		}
		return 0;
/*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi TP4 Pola Cangkir Kopi Mang Oleh (PCKR20) dalam mata kuliah Alpro 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/		
}