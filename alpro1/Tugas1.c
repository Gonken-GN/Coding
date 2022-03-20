#include <stdio.h>
int main(){
	int bilSatu;//Membuat variabel untuk bilangan pertama
	;
	int bilDua;//Membuat variabel untuk bilangan kedua
	printf("masukkan bilangan pertama: \n", bilSatu);
	scanf("%d", &bilSatu);
	printf("masukkan bilangan kedua: \n", bilDua);
	scanf("%d", &bilDua);

	int hasil = bilSatu + bilDua;
	printf("hasil penambahan adalah %d\n", hasil);
	return 0;
}