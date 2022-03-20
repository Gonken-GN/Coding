#include <stdio.h>
int main () {
	int n;
	scanf("%d", &n);
	int tabInt[n];
	int i;
	for(i=0;i < n;i++){
		scanf("%d", &tabInt[i]);
	}
	int minimal = tabInt[1];
	for(i = 1;i < n;i+=2){
		if(minimal > tabInt[i]){
			minimal = tabInt[i];
		}
	}
	printf("Nilai minimal indeks genap: %d\n", minimal);
	return 0;
}