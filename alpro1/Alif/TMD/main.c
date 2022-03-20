/*Saya Alif Rizza Z mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/


#include "numtrans.h"

int main () {

	int i;
	int t;
	int n;

	scanf("%d", &t); //scan jumlah angka untuk dirata-rata

	int num[t];

	for(i=0;i<t;i++) {
		scanf("%d", &num[i]); //scan angka untuk dirata-rata
	}

	scanf("%d", &n); //scan ketebalan

	meann(t, num); //fungsi rata-rata

	printf("\n");
	printf("\n");

	pola(n); //prosedur print pola

	return 0;
}
