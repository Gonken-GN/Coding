#include <stdio.h>
int main (){
	char a;
	scanf(" %c", &a);

	if((a == 'a') || (a == 'i')
		||(a == 'u') || (a == 'e')
		||(a == 'o')){
			printf("Valid\n");
		}else{
			printf("Tidak Valid\n");
		}
		return 0;
}