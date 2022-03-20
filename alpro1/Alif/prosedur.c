#include <stdio.h>

int min, max = 0;

void getmin(int banyak, int angka[]) {
	min = angka[0];
	int i;
	for(i=0;i<banyak;i++) {
		if(min > angka[i]){
			min = angka[i];
		}
	}
}

void getmax(int angka) {
	int tampung = angka;
	if (tampung > max) {
		max = tampung;
	}
}

void cetakjumlah () {
	printf("min: %d max: %d\n", min, max);
	printf("hasil pertambahan min dan max = %d\n", min + max); 
}

int main () {
	int n;
	int i;
	scanf("%d", &n);

	int deret[n];

	for(i=0;i<n;i++) {
		scanf("%d", &deret[i]);
	}

	getmin(n,deret);
	for(i=0;i<n;i++) {
		getmax(deret[i]);
	}

	cetakjumlah();

	return 0;
}