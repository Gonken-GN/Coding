#include <stdio.h>
int main () {
	int i;
	int n;
	scanf("%d", &n);

	int hasil = 1;

	for(i = n; i > 0;i--){
		hasil = hasil * i;
	}
	printf("Hasil Faktorial = %d\n", hasil);
}