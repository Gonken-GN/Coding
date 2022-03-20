#include "header.h"

/*Saya Novaldi Sandi Ago 2003941
mengerjakan Soal no 11 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int bil[m][m];
	for(int i = 0; i < m; i++){
		for(int j = 0; j <= i; j++){
			bil[i][j] = solve(bil[i-1][j-1], bil[i-1][j], i, j, n);
		}
	}
	int space = 0;
	for(int i = m-1; i >= 0; i--){
		for(int i = 0; i < space; i++)
			printf("  ");
		for(int j = i; j >= 0; j--){
			if(bil[i][j] < 10)
				printf("0");
			printf("%d", bil[i][j]);
			if(j > 0)
				printf("  ");
		}
		printf("\n");
		space++;
	}
	return 0;
}