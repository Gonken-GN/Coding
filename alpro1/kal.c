#include <stdio.h>
int main () {
	int num;
	int i;
	int n = 10;
	scanf("%d", &num);
	printf("\n");

	for(i = 1; i <= n;i++){
		printf("%d\n", num*i);
	}
}