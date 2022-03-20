#include <stdio.h>
int main () {
	int i;
	int n;
	scanf("%d", &n);
	int x[n];
	int y[n];

	for(i=0;i<n;i++){
		scanf("%d", &x[i]);
	}
	int jumlah = 0, seper = n/3, count = n/3;
	for(i=0;i<seper;i++){
		jumlah = jumlah + x[count];
		count++;
	}
	if(x[n-1] == jumlah){
		printf("sesuai spesifikasi\n");
	} else {
		printf("tidak sesuai spesifikasi\n");
	}
}