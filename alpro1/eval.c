#include <stdio.h>
int main (){
	int i;//iterator untuk pola
	int kolom;
	int j;//iterator untuk user memasukkan input
	int n;//nilai yang akan dimasukkan
	scanf("%d", &n);
	char x[n];
	int angka;

	for(j=0;j<n;j++){
		scanf(" %c", &x[j]);
		angka += x[j];
	}
	kolom = x[0];
	for(i=0;i<n;i++){
		for(kolom=n-i;kolom>=2;kolom--){
			printf(" ");
		}
		for(kolom=0;kolom<i;kolom++){
			printf("%c", x[kolom]);
		}
		for(kolom=n-i;kolom<=n;kolom++){
			printf("%c", x[i]);
		}
		for(kolom=n-i;kolom>=2;kolom--){
			printf("%c", x[i]);
		}
		for(kolom=n-i;kolom>=3;kolom--){
			printf("%c", x[kolom-3]);
		}
		for(kolom=n-i;kolom<=n;kolom++){
			printf("%c", x[i]);
		}
		for(kolom=0;kolom<i;kolom++){
			printf("%c", x[kolom]);
		}
		printf("\n");
	}
	for(i=1;i<n;i++){
		for(kolom=0;kolom<i;kolom++){
			printf(" ");
		}
		for(kolom=n-i;kolom>=2;kolom--){
			printf("%c", x[i]);
		}
		for(kolom=n-i;kolom>=1;kolom--){
			printf("%c", x[kolom-1]);
		}
		for(kolom=n-i;kolom<n;kolom++){
			printf("%c", x[kolom-1]);
		}
		if(i != n){
			for(kolom=n-i;kolom>=2;kolom--){
				printf("%c", x[kolom]);
			}
		}
		if(i == n-1){
			printf("%c", x[kolom]);
		}
		for(kolom=n-i;kolom>=1;kolom--){
			printf("%c", x[kolom-1]);
		}
		for(kolom=n-i;kolom>=2;kolom--){
			printf("%c", x[kolom-2]);
		}
		printf("\n");
	}
	if(angka % 2 == 1){
		printf("halo loki.\n");
	} else if (angka % 2 == 0){
		printf("good bye my friend.\n");
	}


	return 0;
/*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi Alas Tiang Bendera (altibe20) dalam mata kuliah Alpro 1
 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
}