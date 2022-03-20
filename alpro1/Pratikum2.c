#include <stdio.h>
int main (){
	//deklarasi variabel
	int angka;

	//meminta user memasukan nilai
	printf("Masukkan Nilai :\n");
	scanf ("%d", &angka);

	//Syarat pertama
	if(angka < 10){
		printf("Nilainya kurang dari 10\n");
	}else{
		printf("Nilainya lebih besar dari 10\n");
	}
	return 0;
}