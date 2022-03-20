#include "header.h"

/*Saya Novaldi Sandi Ago 2003941
mengerjakan Soal no 6 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

int main(){
	int n;
	scanf("%d", &n);
	int much[n], index[n];
	int jam[n], menit[n], detik[n];
	for(int i = 0; i < n; i++){
		index[i] = i;
		scanf("%d%d%d", &jam[i], &menit[i], &detik[i]);
		much[i] = banyak(jam[i], menit[i], detik[i]);
		sorting(much, index, i);
	}
	for(int i = 0; i < n; i++){
		int cek;
		if(detik[index[i]] >= 60){
			cek = detik[index[i]]/60;
			menit[index[i]] += cek;
			detik[index[i]] %= 60;
		}
		if(menit[index[i]] >= 60){
			cek = menit[index[i]]/60;
			jam[index[i]] += cek;
			menit[index[i]] %= 60;
		}
		if(jam[index[i]] < 10)
			printf("0");
		printf("%d:", jam[index[i]]);
		if(menit[index[i]] < 10)
			printf("0");
		printf("%d:", menit[index[i]]);
		if(detik[index[i]] < 10)
			printf("0");
		printf("%d\n", detik[index[i]]);
	}
	return 0;
}