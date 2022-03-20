#include "cek.h"

int main () {

	int n;
	int i;
	
	scanf("%d", &n); // scan jumlah string yang diinginkan

	char arr[n][101];

	for(i=0;i<n;i++) {
		scanf("%s", &arr[i]); // scan strinf sesuai jumlah yang diinginkan
	}

	char x;

	scanf(" %c", &x); // scan huruf yang dinput untuk dihitung jumlahnya pada setiap string

	printf("%d\n", check(n, arr, x)); // print jumlah huruf paling banyak yang ada di string sesuai inputan 

	return 0;
}

//Saya Alif Rizza Z mengerjakan evaluasi UAS dalam mata kuliah Alpro 1 C2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.