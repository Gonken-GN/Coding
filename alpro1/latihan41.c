#include <stdio.h>
int main () {
	int i;
	int n;
	scanf("%d", &n);
	int x[n];
	int ganjil;
	int counter = 0;
	int index;

	for(i = 0;i < n;i++){
		scanf("%d", &x[i]);
	}
	int m = 0;
	int y[m];
	for(i=0;i<n;i++){
		if(x[i] % 2 == 1){
			y[m] = i;
			counter = 1;
			m++;
		}
	}
	for(i=0;i<m;i++){
		printf("%d", y[i]);
		if(i != m-1) printf(" ");
	}
	if(counter == 0){
		printf("Tidak ada bilangan ganjil \n");
	}
}