#include <stdio.h>

int main(){

	//deklarasi variabel penampung angka1 dan angka2
	int angka1, angka2;

	//deklarasi variabel penampung hasil operasi
	int hasilTambah, hasilKurang, hasilKali, hasilBagi, hasilMod;

	//meminta user untuk menginputkan angka pertama
	printf("Masukkan angka pertama : ");
	scanf("%d,", &angka1);

	//meminta user untuk menginputkan angka kedua
	printf("Masukkan angka kedua : ");
	scanf("%d", &angka2);

	//proses operasi
	hasilTambah = angka1 + angka2;
	hasilKurang = angka1 - angka2;
	hasilKali = angka1 * angka2;	
	hasilBagi = angka1 / angka2;
	hasilMod = angka1 % angka2;

	//menampilkan hasil operasi
	printf("Pertambahan : %d\n", hasilTambah);
	printf("Pengurangan : %d\n", hasilKurang);
	printf("Perkalian : %d\n", hasilKali);
	printf("Pembagian : %d\n", hasilBagi);
	printf("Modulus : %d\n", hasilMod);

	return 0;
}