#include <stdio.h>
#include <math.h>
int main (){
	int n;
	scanf("%d" ,&n);
	int tabInt[n];
	int i;

	for(i = 0; i < n;i++){
		scanf("%d", &tabInt[i]);
	}
	int jumlah = 0;
	for(i = 0;i < n;i++){
		if(tabInt[i] % 2 == 1){
			jumlah++;
		}
	}
	printf("Banyaknya elemen yang masuk termasuk ganjil %d\n", jumlah);
	return 0;
}