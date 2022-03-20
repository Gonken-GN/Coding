#include <stdio.h>
typedef struct 
{
	char kode;
	int biner[20];
	int nilai;
	int pb;
}bungkusan;

int main () {
	int i, n, j;
	char pilih = 'x';
	scanf("%d", &n);
	bungkusan x[n];
	
	for(i=0;i<n;i++){
		scanf(" %c", &x[i].kode);
		scanf("%d", &x[i].nilai);
	}
	for(i=0;i<n;i++){
		scanf(" %c", &x[i].kode);
		scanf("%d", &x[i].nilai);
	}

	int temp;
	while(i<n){
		j=0;
		//temp = k;
		while(temp != 0){
			x[i].biner[j] = temp % 2;
			temp /= 2;
			j++;
		}
		x[i].pb = j;
		i++;
	}
	printf("Hasil Gabung:\n");
	while(i<n){
		j= x[i].pb;
		while(x[i].pb-1 != n && j<n){
			printf("%d %d", x[i].biner[j]);
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}