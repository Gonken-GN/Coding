#include <stdio.h>
int main (){
	float a;
	scanf("%f", &a);
	int b, c;

	b = a;
	c = 100*(a - b);
	if(b % c == 0){
		printf("Nilai valid");
	}else{
		printf("Nilai tidak valid\n");
	}
}