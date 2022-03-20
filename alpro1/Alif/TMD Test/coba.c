#include <stdio.h>

int main () {

	int i;
	int j;
	int k;
	int n;

	scanf("%d", &n);

	i = 0;

	while(i < 3) {
		for(j=0;j<n;j++) {	
			for(k=0;k<=j;k++) {
				printf("*");
			}
			printf("\n");
		}
		i++;
	}

	return 0;
}