#include "pola.h"

int main () {

	int n;
	int i;

	scanf("%d", &n); //scan jumlah string

	char arr[n][101];

	for(i=0;i<n;i++) {
		scanf("%s", &arr[i]); //scan string sesuai jumlah yang ditentukan
	}

	pola(n, arr); //prosedur membuat pola

	return 0;
}

//Saya Alif Rizza Z mengerjakan evaluasi UAS dalam mata kuliah Alpro 1 C2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.