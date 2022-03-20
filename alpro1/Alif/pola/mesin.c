#include "pola.h"

void pola(int n, char arr[n][101]) {

	int i;
	int j;

	int panjang[n];

	for(i=0;i<n;i++) {
		panjang[i] = strlen(arr[i]); //Mengukur panjagn tiap string
	}

	int real[i];

	for(i=0;i<n;i++) {
		real[i] = panjang[i] - 1; //Memasukkan panjang string ke array baru untuk digunakan saat membuat pola
		printf("%d\n", real[i]);
	}

	int x = -1; //Untuk print huruf di belakang

	for(i=0;i<n;i++) {
		for(j=0;j<i;j++) {
			printf("-"); //print spasi
		}

		if(real[i] >= x) {
			for(j=real[i] - x;j<=real[i];j++) {
				printf("%c", arr[i][j]);
			} //print index belakang
		} else {
			printf("%s", arr[i]);
		}

		if(i > 0 && real[i] >= x) {
			printf("-"); //spasi yang membatasi index belakang dan depam
		}

		for(j=0;j<real[i] - x;j++) {
			printf("%c", arr[i][j]);
		} //priont index depa n

		printf("\n");
		x++;
	}

}

//Saya Alif Rizza Z mengerjakan evaluasi UAS dalam mata kuliah Alpro 1 C2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.