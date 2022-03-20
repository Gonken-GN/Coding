#include<stdio.h>/*Saya Muhammad Zakaria mengerjakan evaluasi TP4 Pola Cangkir Kopi Mang Oleh 
dalam mata kuliah Alpro untuk keberkahanNya 
maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. 
Aamiin. */
int main() {
	int x,i,j;
	char y;
	scanf("%d\n", &x); //meminta masukan integer(x) pembentuk pola
	scanf(" %c", &y); //meminta masukan karakter huruf vokal/konsonan
	for (i=0;i<x;i++) {
		for (j=0;j<x;j++) {
			printf(" "); //membuat spasi sepanjang x (jarak dari garis tepi)
		}
		for (j=0;j<x;j++) {
			printf("*"); //membuat bintang dengan sepanjang x
		} 
		if(y=='A'||y=='a'||y=='I'||y=='i'||y=='U'||y=='u'||y=='E'||y=='e'||y=='O'||y=='o') {
			for (j=0;j<x*2;j++) {
				printf("  ");//jika masukan berupa huruf vokal maka cangkir bagian atas tidak terisi
			}
		}
		else {
			for (j=0;j<x*2;j++) {
				printf(".,");//jika masukan berupa karakter lain maka cangkir bagian atas terisi
			}
		}
		for (j=0;j<x;j++) {
			printf("*");//gelas bagian kanan
		}
		for (j=0;j<x;j++) {
			if(i==0||i==x-1) {
			printf("*");
			}
			else {
			printf(" ");	
			}//membuat cangkir
		}
		if (i!=0&&i!=x-1) {
			printf("*");//bintang pada ujung gagang cangkir
		}
	printf("\n"); //garis baru untuk sebelum memulai perulangan dengan nilai i yang baru
	}
	for (i=0;i<x;i++) {
		for (j=0;j<x;j++) {
			printf(" "); //jarak dari garis tepi sepanjang x
		}
		for (j=0;j<=i;j++) {
			printf(" ");//a
		}
		for (j=0;j<i;j++) {
			printf(" ");//b
		}
		for (j=x;j>i;j--) {
			printf("*");//c = a+b+c membentuk pola pinggang cangkir
		}
		for (j=(x*2)-1;j>i;j--) {
			if(i!=x-1) {
			printf(".,");//mengisi bagian bawah cangkir
			}
			else {
			printf("**");//membuat bagian bawah cangkir
			}
		}
		for (j=x;j>i;j--) {
			printf("*"); //pinggang cangkir bagian kanan
		}
	printf("\n"); //garis baru untuk sebelum memulai perulangan dengan nilai i yang baru
	}
	int panjangstrip;
	panjangstrip=8*x;
	for (i=0;i<2;i++) {
		if(i==0) {
			for (j=0;j<x;j++) {
				printf("--------");//membuat talenan gelas sepangan 8 dikali masukan
			}
		}
		else {
			printf("  ");
			for (j=0;j<panjangstrip-4;j++) {//mencetak strip sebanyak strip awal dikurang 4
				printf("-");
			}
			printf("  ");
		}
	printf("\n");
	}

	
return 0;
}
