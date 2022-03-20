#include <stdio.h>
int main () {
	int baris;
	int kolom;
	int n;
	printf("Masukkan banyaknya bintang\n");
	scanf("%d", &n);

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
		for(kolom = n-baris; kolom >= 0;kolom--)
		{
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
		printf("\n");
	}
}