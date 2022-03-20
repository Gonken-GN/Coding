#include<stdio.h>
#include<string.h>

int main(){

	char str[50];
	scanf("%s", &str);
	int i, j, spasi=strlen(str);
	for(i=strlen(str); i>=0; i--){
		for(j=0; j<spasi; j++){
			printf(" ");
		}
		printf("%c\n", str[i]);
		spasi--;
	}

	return 0;
}