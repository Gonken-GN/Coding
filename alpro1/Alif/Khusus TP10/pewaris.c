#include "pewaris.h"

int main () {

	int i;
	int n;

	scanf("%d", &n);

	int key[n];
	char pass[n];

	i = 0;
	while(i < n) {
		scanf(" %d", &key[i]);
		i++;
	}

	scanf("%s", &pass);

	int ascii1[n];

	descript(n, key, pass);

	if(pewaris(n, key, pass) == 1) {
		printf("Pewaris sah: Pangeran DoWhile.\n");
	} else if(pewaris(n, key, pass) == 2) {
		printf("Pewaris sah: Pangeran For.\n");
	} else {
		printf("Tidak ada pewaris yang sah.\n");
	}

	return 0;
}


