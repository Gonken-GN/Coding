#include <stdio.h>
int main () {
	int i;//iterator
	int n;//panjang kata
	scanf("%d", &n);
	char x[n];
	char y[n];
	int angka;
	int count = (n/26)+1;
	int j;
	for(i = 0;i < n;i++){
		scanf(" %c", &x[i]);
	}

	for(i = 0;i < n;i++){
		angka = x[i];
		if((x[i] > 64) && (x[i] < 91)){
			angka = x[i]-n;
			 for(j = 0;j < count;j++){
			 	if(angka < 65) {
			 		angka =((angka + n)+26)-n;
			 	}
			}
			y[i] = angka;
		}else if((x[i] > 96) && (x[i] < 123)) {
			angka = x[i] + n;
			for(j = 0;j < count;j++){
				if(angka > 122){
					angka = ((angka - n)-26)+n;
				}
			}
			y[i] = angka;
		}
	}
	for(i = 0;i < n;i++){
		printf("%c", y[i]);
	}
	printf("\n");
/*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi TP5 Mang Oleh Jadi Tamtam Geser (TTG2020) dalam mata kuliah Alpro 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
}