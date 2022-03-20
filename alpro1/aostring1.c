#include <stdio.h>
#include <string.h>

/*Saya Novaldi Sandi Ago 2003941
mengerjakan soal arsss14 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

int main(){
	int i, j, k, l, n, SPASI = 0;
	char KATA[100];
	scanf("%s", KATA);
	int PANJANG = strlen(KATA);
	for(i = 0; i < PANJANG; i++){
		j = i % 10;
		if((KATA[i] == 'a') || (KATA[i] =='i') || (KATA[i] == 'u') || (KATA[i] == 'e') || 
		(KATA[i] == 'o')){
			printf("%d", j);
		}
		else{
			printf("%c", KATA[i]);
		}
	}
	printf("\n");
	return 0;
}