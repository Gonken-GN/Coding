#include <stdio.h>

int main () {

	int matriks1[3][2];
	int matriks2[2][3];
	int matriks3[3][3];

	int baris, kolom, jumlah_kali;

	for(baris=0;baris<3;baris++) {
		for(kolom=0;kolom<2;kolom++) {
			printf("masukkan angka matriks 1 (%d,%d): ", baris, kolom);
			scanf("%d", &matriks1[baris][kolom]);
			printf("\n"); 
		}
	}

	for(baris=0;baris<2;baris++) {
		for(kolom=0;kolom<3;kolom++) {
			printf("masukkan angka matriks 2 (%d,%d): ", baris, kolom);
			scanf("%d", &matriks2[baris][kolom]);
			printf("\n"); 
		}
	}

	for(baris=0;baris<3;baris++) {
		for(kolom=0;kolom<3;kolom++) {
			matriks3[baris][kolom] = 0;
			for(jumlah_kali=0;jumlah_kali<2;jumlah_kali++) {
				matriks3[baris][kolom] = matriks3[baris][kolom] + (matriks1[baris][jumlah_kali] * matriks2[jumlah_kali][kolom]);
			}
		}
	}

	printf("kali = \n");

	for(baris=0;baris<3;baris++) {
		for(kolom=0;kolom<3;kolom++) {
			if(matriks3[baris][kolom] < 10) {
				printf("%d   ", matriks3[baris][kolom]);
			} else if(matriks3[baris][kolom] >= 10 && matriks3[baris][kolom] < 100) {
				printf("%d  ", matriks3[baris][kolom]);
			} else if(matriks3[baris][kolom] >=100) {
				printf("%d ", matriks3[baris][kolom]);
			}
		}
		printf("\n");
	}



	return 0;
}