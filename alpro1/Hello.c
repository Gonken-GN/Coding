#include <stdio.h>
int main(int argc, char const *argv[])
{
	float angka = 5.1;
	printf("%f\n", angka);
	//       ^  ^ menyebutkan nama variabel yang akan di print
	//       ^ perwakilan variabel dengan  simbol format

    //hanya menampilkan 2 angka dibelakang koma
	printf("%0.2f\n", angka);

    //deklarasi variabel
	int kelas, angkatan;
	char huruf;

    //memasukkan nilai variabel
	kelas = 9;
	angkatan = 2020;
	huruf = 'C';

    // Kelas : 9C, Angkatan : 2020
	printf("kelas: %d%c, Angkatan : %d\n", kelas, huruf, angkatan);

    //memasukkan nilai variabel
	kelas = 10;
	angkatan = 2021;
	huruf = 'D';

    // Kelas : 10D, Angkatan : 2021
	printf("Kelas %d\n, Angkatan : %d\n", kelas, huruf, angkatan);

	return 0;
}