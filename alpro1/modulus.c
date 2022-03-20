#include <stdio.h>
#include <math.h>
int main(){
	int bil, satuan, puluhan, ratusan, ribuan, modulus1, modulus2, modulus3;

	printf("Masukkan angka integer\n");
	scanf("%d", &bil);


	ribuan = bil / 1000;
	modulus1 = bil % 1000;
	ratusan = modulus1 / 100;
	modulus2 = modulus1 % 100;
	puluhan=modulus2/10; 
	modulus3=modulus2%10;
	satuan = modulus3;


	printf("Angka ribuan %d\n", ribuan);
	printf("Angka ratusan %d\n", ratusan);
	printf("Angka puluhan %d\n", puluhan);
	printf("Angka satuan %d\n", satuan);
	return 0;
}