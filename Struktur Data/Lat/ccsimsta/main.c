#include "header.h"

/*Saya Novaldi Sandi Ago 2003941
mengerjakan Soal no 11 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

int main(){
	int n, top = 0;
	scanf("%d", &n);
	int arr[n];
	while(n--){
		char perintah[100];
		int angka;
		scanf("%s", perintah);
		if(strcmp(perintah, "push") == 0){
			scanf("%d", &angka);
			arr[top] = angka;
			top++;
		}
		else if(strcmp(perintah, "pop_cari") == 0){
			scanf("%d", &angka);
			do{
				top--;
			}while(arr[top] != angka && top > 0);
		}
		else if(strcmp(perintah, "pop_banyak") == 0){
			scanf("%d", &angka);
			int banyak = 0;
			do{
				top--;
				banyak++;
			}while(banyak < angka && top > 0);
		}
		else if(strcmp(perintah, "print_stack") == 0){
			tampil(arr, top);
		}
	}
	return 0;
}