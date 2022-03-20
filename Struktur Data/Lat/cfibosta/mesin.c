#include "header.h"

/*Saya Novaldi Sandi Ago 2003941
mengerjakan Soal no 7 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

void fibo(int a, char bil[]){
	int c = 3, d = a;
	while(c-- && d > 0){
		bil[c] = ('0' + (d%10));
		d /= 10;
	}
}