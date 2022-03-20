#include <stdio.h>
#include <string.h>

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

	i = 0;
	while(i < n) {
		ascii1[i] = pass[i];
		i++; 
	}

	int ascii2[n];

	i = 0;
	while(i < n) {
		ascii2[i] = ascii1[i] - key[i];
		i++; 
	}

	char desc[n];

	i = 0;
	while(i < n) {
		desc[i] = ascii2[i];
		i++;
	}

	desc[n] = '\0';

	i = 0;
	while(i<n) {
		if(desc[i] == 'D' || desc[i] == 'd' && desc[i+1] == 'O' || desc[i+1] == 'o' && desc[i+2] == 'W' || desc[i+2] == 'w' && desc[i+3] == 'H' || desc[i+3] == 'h' && desc[i+4] == 'I' || desc[i+4] == 'i' && desc[i+5] == 'L' || desc[i+5] == 'l' && desc[i+6] == 'E' || desc[i+4] == 'e') {
			printf("Pewaris sah: Pangeran DoWhile.\n");
		} else if (desc[i] == 'F' || desc[i] == 'f' && desc[i+1] == 'O' || desc[i+1] == 'o' && desc[i+2] == 'R' || desc[i+2] == 'r') {
			printf("Pewaris sah: Pangeran For.\n");
		}
		i++;
	}

	return 0;
}