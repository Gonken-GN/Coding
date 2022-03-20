#include <stdio.h>
int main () {
	int baris;
	int kolom;
	int n;
	int bari;
	int kolo;
	printf("Masukkan banyaknya bintang\n");
	scanf("%d", &n);
	int spas;

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
			for(kolom = 1; kolom <= n;kolom++)
			printf("*");
		}
		if(baris != 1 && baris != n){
			for(kolom = 1; kolom <= n; kolom++)
			printf(" ");
		}
		if(baris != 1 && baris != n){
			for(kolom = n;kolom <= n;kolom++)
				printf("*");
		}
		printf("\n");
	}
	for(bari = 1;bari <= n-1;bari++){
		for(kolo = 1;kolo <= n; kolo++){
			printf("*");
		}
		printf("\n");
	}
}