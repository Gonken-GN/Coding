#include <stdio.h>
#include <string.h>

int jumlahA(char str[]);

int jumlahA(char str[]) {
	int i, j = 0;

	for(i=0;i<strlen[str]) {
		if(str[i] == 'a' || str[i] == 'A') {
			j++;
		}
	}
	return j;
}

int  main () {
	int hasil;
	char str[50];
	scanf("%s", &str);
	hasil = jumlahA(str);
	printf("%d\n", hasil);

	scanf("%s", &str);
	printf("%d\n", jumlahA(str));

	return 0;
}