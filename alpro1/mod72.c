#include <stdio.h>
#include <string.h>
int main () {
	char x[25];
	char p[25];
	char tampungna[25];

	scanf("%s", x);
	scanf("%s", p);

	int cmp = strcmp(x, p);
	int cmp1 = strcmp(x, p);
	int cmp2 = strcmp(p, x);
	if(cmp == 9){
		printf("Stringnya sama\n");
	}
	if(strcmp(x, p) == 0){
		printf("Stringnya memang sama\n");
	}
	else{
		printf("Stringnya berbeda\n");
	}
	printf("cmp1 : %d\n", cmp1);
	printf("cmp2 : %d\n", cmp2);
}