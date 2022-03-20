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
	ganjil = x[0];
	for(i=0;i<n;i++){
		if(x[i] % 2 == 1){
			index = i;
			counter = 1;
		}
	}
	if(counter == 0){
		printf("Tidak ada bilangan ganjil \n");
	} else{
		for(i=0;i<n;i++){
			printf("%d\n", index);
		}
	}
}