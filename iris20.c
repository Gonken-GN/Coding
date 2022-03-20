#include <stdio.h>
int main (){
	//deklarasi variabel
	int x1, y1, x2, y2, x3, y3, x4, y4;
	int p1, p2, l1, l2; 
	int luas1, luas2;
	int counter = 0;
	scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

	if(x2 < x3 || x4 < x1) {
		counter = 1;
	} else if(y2 > y3 || y4 > y1) {
		counter = 1;
	}
	
	if(counter == 1) {
		printf("tidak beririsan\n");
	} else {
		printf("beririsan\n");
	}

	p1 = x2 - x1;
	p2 = x4 - x3;
	l1 = y1 - y2;
	l2 = y3 - y4;

	luas1 = p1*l1;
	luas2 = p2*l2;

	if(luas1 > luas2) {
		printf("pertama\n");
	} else {
		printf("kedua\n");
	}
	
	 /*Saya Raden Fadhil A.A (2004305) mengerjakan Tugas Pratikum PPU20 dalam mata kuliah Alpro 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

	return 0;
}