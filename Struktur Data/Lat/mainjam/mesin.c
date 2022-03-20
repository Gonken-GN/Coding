#include "header.h"

/*Saya Novaldi Sandi Ago 2003941
mengerjakan Soal no 6 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

int banyak(int a, int b, int c){
	int much = 3600*a + 60*b + c;
	return much;
}

void sorting(int much[], int index[], int i){
	for(int j = i; j > 0 && much[j] < much[j-1]; j--){
		int help = much[j];
		much[j] = much[j-1];
		much[j-1] = help;
		help = index[j];
		index[j] = index[j-1];
		index[j-1] = help;
	}//pengurutan berdasarkan banyak a
}