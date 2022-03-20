#include "header.h"

/*Saya Novaldi Sandi Ago 2003941
mengerjakan Soal no 10 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

int main(){
	int n;
	scanf("%d", &n);
	int bil[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &bil[i]);
	tampil(bil, n);
	return 0;
}