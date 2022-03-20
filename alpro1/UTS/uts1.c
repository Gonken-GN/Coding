#include <stdio.h>
int main () {
	int n;//deklarasi variabel n
	int baris;
	int kolom;

	scanf("%d", &n);//meminta user untuk memasukkan input

	for(i=0;i<n;i++){
		for(kolom=0;kolom<n;kolom++){
			printf(" ");
		}
		for(kolom=0;kolom<n;kolom++){
			printf("*");
		}
	}



	return 0;
/*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi TP5 Tamtam Geser (TTG2020) dalam mata kuliah Alpro 1
 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
}