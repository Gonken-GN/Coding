#include <stdio.h>
int main () {
	int baris;
	int kolom;;
	int n;
	printf("Masukkan banyaknya bintang\n");
	scanf("%d", &n);

	for(baris = 1; baris <= n; baris++){
		for(kolom = n-baris; kolom >= 1; kolom--){
			printf(" ");
		}
		for(kolom = 1;kolom <= n;kolom++){
			printf("*");
		}
		printf("\n");
	}
	for(baris = 1;baris <= n-1; baris++){
		for(kolom = 1;kolom <= baris;kolom++){
			printf(" ");
		}
		for(kolom = 1;kolom <= n;kolom++){
			printf("*");
		}
		printf("\n");
	}
}