#include "trans.h"

void transpose(int a, int b, char matriks[][99]) { //prosedur mentranspose matriks
	int i;
	int j;
	int q;
	int w;

	char matrix[b][a]; //variabel untuk menyimpan matriks yang sudah diubah

	q = 0;

	for(i=0;i<b;i++) { //algoritma mentranspose matriks
		for(j=0;j<a;j++) {
			matrix[i][j] = matriks[j][i];
		}
	}

	int temp = a; //menyimpan baris ke temporary 						//
	a = b;		  //mengubah baris menjadi kolom 						//menukar baris dan kolom jika matriks merupakan matriks persegi panjang
	b = temp;	  //memasukkan baris yg sudah disimpan di temp ke kolom //

	for(i=0;i<a;i++) {
		for(j=0;j<b;j++) {
			matriks[i][j] = matrix[i][j]; //memasukkan kembali matriks yg sudah disimpan ke matriks awal
		}
	}
}

void xreflection(int a, int b, char matriks[][99]) {
	int i;
	int j;
	int q = 0;
	int w;

	char matrix[a][b]; //variabel untuk menyimpan matriks yang sudah diubah

	for(i=0;i<a;i++) {
		w = 0;
		for(j=b-1;j>=0;j--) {			  
			matrix[q][w] = matriks[i][j]; //algoritma menrefleksi matriks ke kanan
			w++;				
		}
		q++;
	}

	for(i=0;i<a;i++) {
		for(j=0;j<b;j++) {
			matriks[i][j] = matrix[i][j]; //memasukkan kembali matriks yg sudah disimpan ke matriks awal
		}
	}
}

void yreflection(int a, int b, char matriks[][99]) {
	int i;
	int j;
	int q = 0;
	int w;

	char matrix[a][b]; //variabel untuk menyimpan matriks yang sudah diubah

	for(i=a-1;i>=0;i--) {
		w = 0;
		for(j=0;j<b;j++) {
			matrix[q][w] = matriks[i][j]; //algoritma menrefleksi matriks ke atas
			w++;
		}
		q++;
	}

	for(i=0;i<a;i++) {
		for(j=0;j<b;j++) {
			matriks[i][j] = matrix[i][j];  //memasukkan kembali matriks yg sudah disimpan ke matriks awal
		}
	}
}