#include <stdio.h>
int main () {
	int i;
	int n;
	scanf("%d", &n);
	int x[n];
	int max;
	int inmax = 0;
	int inmin = 0;
	int min;
	int pertama;
	int kedua;

	for(i = 0;i < n;i++){
		scanf("%d", &x[i]);
	}
	max = x[0];
	min = x[0];
	for(i = 0; i < n;i++){
		if(x[i] > max){
			max = x[i];
			inmax = i;
		}
		if(x[i] < min){
			min = x[i];
			inmin = i;
		}
	}

	pertama = inmax * min;
	kedua = max - inmin;
	printf("Nilai pertama : %d\n", pertama);
	printf("Nilai kedua : %d\n", kedua);
}