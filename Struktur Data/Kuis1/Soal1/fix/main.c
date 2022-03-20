#include "axel.h"

int main(){

	/*
		membuat 2 buah list untuk menampung
		data restoran 1 dan data restoran 2
	*/
	list L1;
	list L2;
	createlist(&L1);
	createlist(&L2);
	
	/*
		memasukkan data untuk data restoran 1
	*/
	scanf("%d", &n1);
	char nama_masakan1[n1][50];
	int harga_masakan1[n1];
	for ( i = 0; i < n1; i++){
		scanf("%s %d", nama_masakan1[i], &harga_masakan1[i]);
	}

	/*
		memasukkan data untuk data restoran 2
	*/
	scanf("%d", &n2);
	char nama_masakan2[n2][50];
	int harga_masakan2[n2];
	for ( i = 0; i < n2; i++){
		scanf("%s %d", nama_masakan2[i], &harga_masakan2[i]);
	}
	
	/*
		data restoran 1 dan data restoran 2
		dimasukkan kedalam list yang sudah disediakan
		pada bagian awal
	*/

	addfirst(nama_masakan1[0], harga_masakan1[0], &L1);
	for(i=1; i<n1; i++){
		addlast(nama_masakan1[i], harga_masakan1[i], &L1);
	}
	addfirst(nama_masakan2[0], harga_masakan2[0], &L2);
	for(i=1; i<n2; i++){
		addlast(nama_masakan2[i], harga_masakan2[i], &L2);
	}
	
	/*
		memasukkan data swap makanan
		sebagai data untuk di swap
	*/

	scanf("%d", &nswap); 
	char swap_food_1[nswap][100];
	char swap_food_2[nswap][100];
	for ( i = 0; i < nswap; i++){
		scanf("%s %s", swap_food_1[i], swap_food_2[i]);
	}

	/*
		melakukan pertukaran terhadap
		data makanan yang di request di awal
		dengan melakukan 2x perubahan yaitu 
		memasukkan makanan pertama di list 1
		dan memasukkan makanan ke 2 di list 2
	*/

	for(ix =0; ix<nswap; ix++){
		conf(swap_food_1[ix], &L1, &L2);
		conf(swap_food_2[ix], &L1, &L2);
	}

	/*
		print keseluruhan 
	*/
	printf("menu warung pertama:\n");
	printelemen(L1);
	printf("\nmenu warung kedua:\n");
	printelemen(L2);
	
	return 0;
}