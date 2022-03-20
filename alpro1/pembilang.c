#include <stdio.h>

typedef struct {
	int pembilang;
	int penyebut;
}pecahan;

int main () {
	pecahan p1, p2;
	pecahan p3;

	printf("Masukkan nilai pembilang penyebut pertama\n");
	scanf("%d %d", &p1.pembilang, &p1.penyebut);

	printf("Masukkan nilai pembilang penyebut kedua\n");
	scanf("%d %d", &p2.pembilang, &p2.penyebut);

	p3.penyebut = p1.penyebut * p2.penyebut;
	p3.pembilang = (p1.penyebut * p2.pembilang) + (p2.penyebut * p1.pembilang);

	printf("Hasil penjumlahan pecahan adalah pembilang: %d penyebut: %d\n", p3.pembilang, p3.penyebut);
	return 0;
}