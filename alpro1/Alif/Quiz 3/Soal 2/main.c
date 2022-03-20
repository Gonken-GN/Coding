//Saya Alif Rizza mengerjakan evaluasi Quiz 3 dalam mata kuliah Algoritma dan Pemograman I untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
//Aamiin.

#include "num.h"

int main () {

	int i;
	int n;
	int j;
	scanf("%d", &n);

	int num[n];

	for(i=0;i<n;i++) {
		scanf("%d", &num[i]);
	}

	int a;
	int b;
	
	scanf("%d", &a);
	scanf("%d", &b);

	if(cek(n, num, a, b) == n/4) {
		printf("sama\n");
	} else {
		printf("tidak sama\n");
	}

	return 0;
}