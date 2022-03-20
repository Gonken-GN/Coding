#include <stdio.h>
int main(){
	float bil;
	int depan;
	int belakang;
	printf("Masukkan angka float:\n");
	scanf("%f", &bil);
	depan = bil;
	belakang = (bil - depan) * 100;
	printf("bilangan depan %d\n", depan);
	printf("bilangan belakang %d\n", belakang);
	return 0;
}