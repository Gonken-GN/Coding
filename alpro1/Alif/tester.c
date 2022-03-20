#include <stdio.h>

int main () {

	int n;
	int i;
	int total = 0;

	scanf("%d", &n);

	int num[n];

	for(i=0;i<n;i++) {
		scanf("%d", &num[i]);
	}

	for(i=0;i<n;i++) {
		total += num[i];
	}

	int j;

	for(i=0;i<n;i++) {
		printf("%d", num[i]);
		if(i < n-1) {
			printf(" + ");
		}
	}

	printf("\n%d", total);



	return 0;
}