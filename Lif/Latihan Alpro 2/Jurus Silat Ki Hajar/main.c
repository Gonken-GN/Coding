#include "prima.h"

int main () {

	int i;
	int n;
	scanf("%d", &n);

	for(i=1;i<=n;i++)
		printf("%d %d\n", i, i*prima(i));

	return 0;
}