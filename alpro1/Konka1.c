#include <stdio.h>
int main (){
	////membuat kotak angka dan huruf
	int aa, ab, ac, a=0, b=0;
	char ba, bb, bc;
	//meminta user memasukan 3 kotak angka dan huruf
	scanf("%d %d %d", &aa, &ab, &ac);
	scanf(" %c %c %c", &ba, &bb, &bc);

	if(aa, ba, ab){
		if(bb, ac, bc){
			a = 1;
		}
	}
	if(ba, aa, bb){
		if(ab, bc, ac){
			b = 1;
		}
	}
	if ((a == 1) && (b == 1)){
		printf("kombinasi valid\n");
	}else{
		printf("kombinasi tidak valid\n");
	}
	return 0;
}