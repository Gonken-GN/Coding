#include "pola.h"
void pola(int n){
	int i, j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("*");
		}
		printf("\n");
	}
}

void tulisArrayInt(int n, int array[n]){
	int i;
	for(i=0;i<n;i++){
		printf("%d\n", array[i]);
	}
}