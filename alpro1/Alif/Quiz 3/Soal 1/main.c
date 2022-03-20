//Saya Alif Rizza mengerjakan evaluasi Remedial dalam mata kuliah Algoritma dan Pemograman I untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
//Aamiin.

#include "huruf.h"

int main () {

	int i;
	int n;
	scanf("%d", &n); //scan jumlah array
	char arr[n][101];

	for(i=0;i<n;i++) {
		scanf(" %s", &arr[i]); //scan isi array 
	}
	
	huruf(n, arr); //prosedur yang dipanggil

	return 0;
}