#include <stdio.h>
int main () {
	int n;
	scanf("%d", &n);
	int tabInt[n];
	int i;
	for(i=0;i < n;i++){
		scanf("%d", &tabInt[i]);
	}
	int maksimal = tabInt[0];
	for(i = 1; i < n;i++){
		if(tabInt[i] % 2 == 1){
			if (maksimal <  tabInt[i]){
				maksimal = tabInt[i];
			}
		}
	}
	printf("Nilai maksimal: %d\n", maksimal);
	return 0;
}