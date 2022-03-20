#include <stdio.h>
int main () {
	int n;
	scanf("%d", &n);
	int tabInt[n];
	int i;
	int rat;
	for(i=0;i < n;i++){
		scanf("%d", &tabInt[i]);
	}
	int rata = tabInt[0];
	for(i = 1; i < n;i++){
		rata = rata + tabInt[i]/ n;
	}
	printf("%d\n", rata);
	return 0;
}