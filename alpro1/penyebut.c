#include <stdio.h>
 typedef struct {
 	int pembilang;
 	int penyebut;
 	
 }pecahan;

 int main (){
 	pecahan p1;
 	pecahan p2, p3;

 	printf("masukkan nilai pembilang penyebut pertama\n");
 	scanf ("%d %d", &p1.pembilang, &p1.penyebut);

 	printf("masukkan nilai pembilang penyebut kedua\n");
 	scanf("%d %d", &p2.pembilang, &p2.penyebut);

 	p3.pembilang = p1.pembilang * p2.pembilang;
 	p3.penyebut = p1.penyebut * p2.penyebut;

 	printf("Hasil perkalian pecahan adalah pembilang: %d penyebut:\n", p3.pembilang, p3.penyebut);
 	return 0;
 }