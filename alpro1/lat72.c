#include <stdio.h>
#include <string.h>
int main () {
	char x[25];
	scanf("%s", x);
	int i;
	int count = (strlen(x)-1) / 2;
	for(i=count;i>=0;i--){
		printf("%s", x[i]);
	}

}