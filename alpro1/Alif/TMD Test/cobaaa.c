#include <stdio.h>

int main () {

	float tot = 0;
	int i;
	int n;

	scanf("%d", &n);

	int num[n];

	for(i=0;i<n;i++) {
		scanf("%d", &num[i]);
	}

	for(i=0;i<n;i++) {
		tot += num[i];
	}

	float mean;

	mean = tot/n;

	for(i=0;i<n;i++) {
		printf("%d", num[i]);
		if(i < n-1) {
			printf(" + ");
		}
	}

	int depan = mean;
	if(mean == 00.00) {
		depan = 0;
	}
	int belakang = ((mean - depan)*100) + .5;
	if(belakang == 0) {
		belakang = 0;
	}

	int countd = depan;
	int jumlahdepan = 0;
	int countb = belakang;
	int jumlahbelakang = 0;

	printf("\n");

	printf("%d\n%d\n", depan, belakang);

	if(countd == 0) {
		jumlahdepan = jumlahdepan + 1;
	}

	while(countd > 0) {
		countd = (countd - (countd%10))/10;
		jumlahdepan++;
	}

	int depan1[jumlahdepan];

	for(i=jumlahdepan - 1;i>=0;i--) {
		depan1[i] = depan;
		depan = (depan -(depan%10))/10;
	}

	int storage[jumlahdepan];

	for(i=0;i<jumlahdepan;i++) {
		storage[i] = depan1[i] % 10;
	}

	int ttk = jumlahdepan + 1;

	storage[ttk - 1] = 10;

	if(countb == 0) {
		jumlahbelakang = jumlahbelakang + 2;
	}

	if(countb < 10) {
		jumlahbelakang = jumlahbelakang + 1;
	}

	while(countb > 0) {
		countb = (countb - (countb%10))/10;
		jumlahbelakang++;
	}

	int belakang1[jumlahbelakang];

	for(i=jumlahbelakang - 1;i>=0;i--) {
		if (belakang == 0) {
			belakang1[i] = 0;
		}
		belakang1[i] = belakang;
		belakang = (belakang -(belakang%10))/10; 
	}

	int total = ttk + jumlahbelakang;

	int x = 0;

	for(i=ttk;i<total;i++) {
		storage[i] = belakang1[x] % 10;
		x++;
	}

	printf("\n");	

	for(i=0;i<total;i++) {
		printf("%d\n", storage[i]);
	}

	return 0;
}

//Check %d = %d\n Check2 %d = %d\n   i, chk[i], i, chk2[i],