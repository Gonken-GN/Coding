#include<stdio.h>
#include<string.h>

int main(){

	char str[50];
	scanf("%s", &str);
	int i, j, spasi=0;
	for(i=0; i<strlen(str); i++){
		for(j=0; j<spasi; j++){
			printf(" ");
		}
		printf("%c\n", str[i]);
		spasi++;
	}

	return 0;
}