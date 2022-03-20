//Saya Alif Rizza mengerjakan evaluasi Remedial dalam mata kuliah Algoritma dan Pemograman I untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
//Aamiin.

#include "num.h"

int main () {

int i;
	int n;
	scanf("%d", &n); //scan jumlah index array

	int num[n];

	for(i=0;i<n;i++) {
		scanf("%d", &num[i]); //scan isi array
 	}

	int a;

	scanf("%d", &a); //scan angka yang ingin dicek apakah ada kelipatannya atau tidak

	angka(n, num, a); //prosedur yang dipanggil

	return 0;
}