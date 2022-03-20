#include <stdio.h>
int main () {
	int total = 0;
	int n;
	printf("=== Warteg Onlen ===\n");
	do {
		printf("[Pilih Menu] :\n");
		printf("1.  Nasi Anget     | 2k\n");
		printf("2.  Tempe Bacem    | 1k\n");
		printf("3.  Ayam Serundeng | 12k\n");
		printf("4.  Pecel Lele     | 9k\n");
		printf("5.  Es Teh Dingin  | 4k\n");
		printf("-----------------------\n");
		scanf("%d", &n);
		if(n == 1){
			total += 2000;
		}
		if(n == 2){
			total += 1000;
		}
		if(n == 3){
			total += 12000;
		}
		if(n == 4){
			total += 9000;
		}
		if(n == 5){
			total += 4000;
		}
		else {
			printf("Tidak ada di menu cuy\n");
		}
	} while(n != 0);
	printf("===============\n");
	printf("Total Harga : Rp. %d\n", total);
	return 0;
}