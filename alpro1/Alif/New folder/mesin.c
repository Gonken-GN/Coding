#include "LatFungsi.h"

int jumlahA(char str[]) {
	int i, j = 0;

	for(i=0;i<strlen(str);i++) {
		if(str[i] == 'a' || str[i] == 'A') {
			j++;
		}
	}
	return j;
}

int tambah (int a, int b) {
	return (a + b);
}

int jumlahB (int n, int num[]) {
	int i;
	int jumlah;

	for(i=0;i<n;i++) {
		jumlah += num[i];
	}
	return jumlah;
}