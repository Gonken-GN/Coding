#include <stdio.h>
int main (){
	int a;
	scanf("%d", &a);

	if(a >= 1000){
		printf("Bilangan Ribuan\n");
	}
	if((a >= 100) && (a <= 999)){
		printf("Bilangan Ratusan\n");
	}
	if((a >= 10) && (a <= 99)){
		printf("Bilangan puluhan\n");
	}
	return 0;
}