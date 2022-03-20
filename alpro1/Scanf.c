#include <stdio.h>
int main (){
	char huruf; //deklarasi variabel

	//meminta user memasukan sebuah huruf
	scanf(" %c", &huruf);
	//     ^     ^ nama variabel yang akan diberi nilai dari masukan
	//     ^ perwakilan variabel ditulis dengan simbol format

	int angka; // deklarasi variabel
	float angka_berkoma;//deklarasi variabel

	//meminta masukan dua kali untuk variabel angka dan angka_berkoma
	scanf("%d %f", &angka, &angka_berkoma);

	//menampilkan semua variabel
	printf("%c %d %f\n", huruf, angka, angka_berkoma);

	return 0;
}