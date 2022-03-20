#include <stdio.h>

int main () {

	int matriks1[2][2];
	int matriks2[2][2];

	int baris;
	int kolom;

	for(baris=0;baris<2;baris++) {
		for(kolom=0;kolom<2;kolom++) {
			printf("masukkan angka matriks 1 (%d,%d): ", baris, kolom);
			scanf("%d", &matriks1[baris][kolom]);
			printf("\n"); 
		}
	}

	for(baris=0;baris<2;baris++) {
		for(kolom=0;kolom<2;kolom++) {
			printf("masukkan angka matriks 2 (%d,%d): ", baris, kolom);
			scanf("%d", &matriks2[baris][kolom]);
			printf("\n"); 
		}
	}

	for(baris=0;baris<2;baris++) {
		for(kolom=0;kolom<2;kolom++) {
			printf("%d ", matriks1[baris][kolom]);
		}
		printf("\n");
	}

	printf("\n");
	printf("+");
	printf("\n");
	printf("\n");

	for(baris=0;baris<2;baris++) {
		for(kolom=0;kolom<2;kolom++) {
			printf("%d ", matriks2[baris][kolom]);
		}
		printf("\n");
	}

	printf("\n");

	int jumlah[2][2];

	for(baris=0;baris<2;baris++) {
		for(kolom=0;kolom<2;kolom++) {
			jumlah[baris][kolom] = matriks1[baris][kolom] + matriks2[baris][kolom];
		}
	}

	printf("jumlah = \n");

	for(baris=0;baris<2;baris++) {
		for(kolom=0;kolom<2;kolom++) {
			if(jumlah[baris][kolom] < 10) {
				printf("%d  ", jumlah[baris][kolom]);
			} else if(jumlah[baris][kolom] >= 10) {
				printf("%d ", jumlah[baris][kolom]);
			}
		}
		printf("\n");
	}

	return 0;
}