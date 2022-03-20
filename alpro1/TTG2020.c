#include <stdio.h>

/*Saya Novaldi Sandi Ago 2003941
mengerjakan Soal dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

int main(){
	int i, n;
	scanf("%d", &n);
	char A[n];
	int WOY;
	for(i = 0; i < n; i++){
		scanf(" %c", &A[i]);
	}
	for(i = 0; i < n; i++){
		if((A[i] >= 65) && (A[i] <= 90)){
			WOY = (n / 26);
			A[i] = A[i] + (WOY * 26) - n;
			if(A[i] < 65){
				printf("%c", A[i] + 26);
			}
			else{
				printf("%c", A[i]);
			}
		}
		else if((A[i >= 97]) && (A[i] <= 122)){
			WOY = (n / 26);
			A[i] = A[i] - ((WOY + 1) * 26) + n;
			if(A[i] < 97){
				printf("%c", A[i] + 26);
			}
			else{
				printf("%c", A[i]);
			}
		}
	}
	printf("\n");
	return 0;
}