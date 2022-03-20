//Saya Alif Rizza mengerjakan evaluasi Remedial dalam mata kuliah Algoritma dan Pemograman I untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
//Aamiin.

#include "num.h"

void angka(int n, int num[n], int a) {
	int i;
	int chk = 0;
	int ada = 0;

	for(i=0;i<n;i++) {
		if(num[i] % a == 0) {
			ada++; //untuk menambah jumlah index tampungan
			if(ada > 3) {
				ada = 3; //agar index tidak lebih dari tiga
			} 
		}
	}

	if(ada < 3) {
		chk = 1; //jika kurang dari 3 chk = 1 agar masuk ke kasus tidak memenuhi syarat
	}

	int tampung[ada]; //variabel array untuk menampung angka kelipatan
	int x = 0;

	for(i=0;i<n;i++) {
		if(num[i] % a == 0 && ada == 3) {
			tampung[x] = num[i];
			x++;
		} //algoritma memasukkan angka kelipatan ke array tampung
	}

	if (chk == 1) {
		printf("tidak memenuhi syarat\n");
	} else {
		for(i=0;i<ada;i++) {
			printf("%d", tampung[i]);
			if(i < ada-1) {
				printf(" ");
			}
		}
		printf("\n");
	}
}