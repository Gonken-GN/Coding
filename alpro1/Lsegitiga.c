#include <stdio.h>
int main(int argc, char const *argv[])
{ 
	int alas;//Membuat variabel untuk menampung nilai alas
	int tinggi;//Membuat variabel untuk menamoung nilai tinggi
	printf("Masukkan angka alas:\n");
	scanf("%d", &alas);
	printf("Masukkan angka tinggi:\n");
	scanf("%d", &tinggi);
	float hasil = alas * tinggi / 2;
	printf("Hasil perhitungan luas adalah %0.2f\n", hasil);

	return 0;
}