#include <stdio.h>

int main () {

	int matriks[2][2];
	int baris;
	int kolom;

	for(baris=0;baris<2;baris++) {
		for(kolom=0;kolom<2;kolom++) {
			printf("masukkan angka (%d,%d): ", baris, kolom);
			scanf("%d", &matriks[baris][kolom]);
			printf("\n"); 
		}
	}

	for(baris=0;baris<2;baris++) {
		for(kolom=0;kolom<2;kolom++) {
			printf("%d ", matriks[baris][kolom]);
		}
		printf("\n");
	}

	int det = ((matriks[0][0] * matriks[1][1]) - (matriks[0][1] * matriks[1][0]));

	printf("Determinan = %d\n", det);

	return 0;
}