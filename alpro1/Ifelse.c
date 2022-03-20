#include <stdio.h>
int main (){
	char ca, cb, cc;
	scanf (" %c  %c  %c", &ca, &cb, &cc);

	int a=0, b=0, c=0;

	if((ca != 'a') && (ca != 'i')
		&& (ca != 'u') && (ca != 'e')
	    && (ca != 'o')){
		a = 1;
	}
	if((cb == 'a') || (cb == 'e')
		|| (cb == 'i') || (cb == 'u')
		|| (cb == 'o')){
		b = 1;
	}
	if ((cc != 'a') && (cc != 'i')
		&& (cc != 'e') && (cc != 'u')
		&& (cc != 'o')){
		c = 1;
	}
	if((a == 1) && (b == 1) && (c == 1)){
		printf("Memenuhi syarat\n");
	}else{
		printf("Tidak memenuhi syarat\n");
	}
	return 0;
}