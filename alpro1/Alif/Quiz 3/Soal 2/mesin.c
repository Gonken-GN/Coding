//Saya Alif Rizza mengerjakan evaluasi Quiz 3 dalam mata kuliah Algoritma dan Pemograman I untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
//Aamiin.

#include "num.h"

int cek(int n, int num[n], int a, int b) {
	int i;
	int j;
	int chk = 0;
	int x = 0;

	int tampung[4][n/4];

	for(i=0;i<4;i++) {
		for(j=0;j<n/4;j++) {
			tampung[i][j] = num[x];
			x++;
		}
	}

	//for(i=0;i<4;i++) {
	//	for(j=0;j<n/4;j++) {
	//		printf("%d", tampung[i][j]);
	//	}
	//	printf("\n");
	//}

	for(j=0;j<n/4;j++) {
		if(tampung[a][j] == tampung[b][j]) {
			chk++;
		}
	}

	return chk;
}