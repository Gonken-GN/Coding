//Saya Alif Rizza mengerjakan evaluasi Remedial dalam mata kuliah Algoritma dan Pemograman I untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
//Aamiin.

#include "huruf.h"

void huruf(int n, char arr[n][101]) {
	int i;
	int j;
	int a = 0;

	a = 0;

	for(i=0;i<n;i++) {
		for(j=0;j<i;j++) {
			printf(" ");
		} //print spasi
		if(strlen(arr[i]) > a) {
			printf("%c", arr[i][a]); //print index yang diinginkan
		} else if (strlen(arr[i]) < a+1) {
			arr[i][a] = '_'; //cek jika jumlah huruf lebih sedikit dari jumlah index yan diminta
			printf("%c", arr[i][a]);
		}
		printf("\n");
		a++;
	}
}