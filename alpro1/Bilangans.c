#include <stdio.h>
int main (){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if((a == c) && (b != c) && (b != a)){
		printf("Segitiga sama kaki\n");
	}
	if((a == b) && (a == c) && (b == c)){
		printf("Segitiga sama sisi\n");
	}
	if((a != b) && (a != c) && (b != c)){
		printf("Segitiga siku-siku\n");
	}
	return 0;
}