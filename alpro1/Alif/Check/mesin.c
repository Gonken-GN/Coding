#include "cek.h"

int check(int n, char arr[n][101], char x) {
	int i;

	int panjang[n];

	for(i=0;i<n;i++) {
		panjang[i] = strlen(arr[i]); //memasukkan jumlah huruf tiap string ke array baru
	}

	char tampung[i][101]; //array menampung huruf yang dicari jumlahnya

	int j;

	for(i=0;i<n;i++) {
		int a = 0;
		for(j=0;j<panjang[i];j++) {
			if(arr[i][j] == x) {
				tampung[i][a] = arr[i][j];
				a++;
			}
		}
		tampung[i][a] = '\0';
	} //algoritma menampung huruf yang ada pada input di tiap string
	
	int length[i];

	for(i=0;i<n;i++) {
		length[i] = strlen(tampung[i]);
	} //menghitung jumlah huruf yang diinput tiap string

	int b = 0;

	for(i=0;i<n;i++) {
		if(b < length[i]) {
			b = length[i];
		}
	} //mencari string yang memiliki jumlah paling banyak huruf yang diinput

	return b; //mengembalikan nilai b
}

//Saya Alif Rizza Z mengerjakan evaluasi UAS dalam mata kuliah Alpro 1 C2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.