#include <stdio.h>	
int main (){
	// 2 kotak bilangan
	int genap, ganjil;
	//meminta masukan user untuk 2 kotak bilangan
	scanf("%d %d", &genap, &ganjil);

	if(genap % 2 == 0){
		printf("Bilangan pertama genap\n");
	}else{
		printf("Bilangan pertama ganjil\n");
	}
	if(ganjil % 2 != 0){
		printf("Bilangan pertama ganjil\n");
	}else{
		printf("Bilangan pertama genap\n");
	}
	return 0;
}