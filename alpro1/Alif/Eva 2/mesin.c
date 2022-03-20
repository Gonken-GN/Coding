#include "anagram.h"

void cek(int n, char nama[n][100], int m, char anagram[m][100]) {
	int i;
	int j;

	int jumlahnama = 0;
	int jumlahanag = 0;

	for(i=0;i<n;i++) {
		jumlahnama = jumlahnama + strlen(nama[i]); //menambahkan seluruh jumlah huruf dari array of string ke dalam variabel integer jumlahnama
	}

	for(i=0;i<m;i++) {
		jumlahanag = jumlahanag + strlen(anagram[i]); //menambahkan seluruh jumlah huruf dari array of string ke dalam variabel integer jumlahanag
	}

	char tampung1[jumlahnama]; //untuk menyimpan semua huruf dari array of string yang disatukan
	char tampung2[jumlahanag]; //untuk menyimpan semua huruf dari array of string yang disatukan

	int a = 0;
	int b = 0;

	for(i=0;i<n;i++) {
		for(j=0;j<strlen(nama[i]);j++) {
			tampung1[a] = nama[i][j];
			a++;
		}
	} //algoritma memasukkan array of string ke dalam tampungan

	for(i=0;i<m;i++) {
		for(j=0;j<strlen(anagram[i]);j++) {
			tampung2[b] = anagram[i][j];
			b++;
		}
	} //algoritma memasukkan array of string ke dalam tampungan

	tampung1[jumlahnama] = '\0';
	tampung2[jumlahanag] = '\0';

	int check = 0;

	int ascii1 = 0; //variabel untuk menyimpan total ascii yg dijumlahkan dari tampungan
	int ascii2 = 0;	//variabel untuk menyimpan total ascii yg dijumlahkan dari tampungan

	for(i=0;i<strlen(tampung1);i++) { 
		ascii1 = ascii1 + tampung1[i];
	} //algoritma menjumlahkan ascii tiap huruf ke dalam variabel ascii1

	for(i=0;i<strlen(tampung2);i++) { 
		ascii2 = ascii2 + tampung2[i];
	} //algoritma menjumlahkan ascii tiap huruf ke dalam variabel ascii2

	if(ascii1 == ascii2) {
		if(strcmp(tampung1, "rajawhile") == 0) { //cek jika namanya raja while
			printf("Ini Makam Raja While!\n");
		} else {
			printf("Anda Menemukan Makam");
			for(i=0;i<n;i++) {
				printf(" %s", nama[i]);
			}
			printf("!\n");
		}
	} else {
		printf("Pemilik Makam Tidak Ditemukan.\n");
	}
}