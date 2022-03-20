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
}