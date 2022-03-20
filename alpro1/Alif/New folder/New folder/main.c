#include "minmax.h"

int main () {

	int n;
	int i;

	scanf("%d", &n);

	int num[n];

	for(i=0;i<n;i++) {
		scanf("%d", &num[i]);
	}

	print(min(n, num) * max(n, num));

	return 0;
}