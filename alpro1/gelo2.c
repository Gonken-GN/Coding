#include <stdio.h>
typedef struct{
	int pembilang;
	int penyebut;
}pecahan;
int main () {
	int i, n;
	scanf("%d", &n);
	pecahan ikatan_pecahan[n];
	for(i=0;i<n;i++){
		scanf("%d", &ikatan_pecahan[i].pembilang);
		scanf("%d", &ikatan_pecahan[i].penyebut);
	}
	i=0;
	int maks = 0;
	int totalpeny = 1;
	int totalpem = 0;
	while((maks<n) && (i<n)){
		if((ikatan_pecahan[i].pembilang) % (ikatan_pecahan[i].penyebut) == 0){
			totalpeny *= ikatan_pecahan[i].penyebut;
			totalpem += (ikatan_pecahan[i].pembilang * ikatan_pecahan[i].penyebut);
			maks++;
		}
		i=i+1;
	}
	printf("%d %d\n", totalpem, totalpeny);
	return 0;
}