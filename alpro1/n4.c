#include <stdio.h>
int main () {
	int baris;
	int kolom;
	int bintang;
	printf("Masukkan banyaknya bintang\n");
	scanf("%d", &bintang);
	printf("\n");
	for(baris = 1; baris <= bintang; baris++) {
		for(kolom = 1; kolom <= baris; kolom++){
		printf("*");
	}
	printf("\n");
}
	return 0;
}