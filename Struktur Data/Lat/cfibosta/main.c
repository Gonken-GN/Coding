#include "header.h"

/*Saya Novaldi Sandi Ago 2003941
mengerjakan Soal no 7 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

int main(){
	int n, a, b;
	scanf("%d", &n);
	scanf("%d%d", &a, &b);
	char bil[n][4];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++)
			bil[i][j] = '0';
		if(i == 0)
			fibo(a, bil[i]);
		else if(i == 1)
			fibo(b, bil[i]);
		else{
			int help = a;
			a = b;
			b += help;
			fibo(b, bil[i]);
		}
	}
	for(int i = 0; i < n; i+=2){
		for(int j = 0; j < 2*i; j++)
			printf(" ");
		for(int j = 0; j < 3; j++)
			printf("%c", bil[n-i-1][j]);
		if(i+1 < n){
			printf("-");
			for(int j = 0; j < 3; j++)
				printf("%c", bil[n-i-2][j]);
		}
		printf("\n");
	}
	return 0;
}