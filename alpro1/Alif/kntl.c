#include <stdio.h>
#include <string.h>

int pelangi(char op[101]) {
	int c;

	if(strcmp(op, "Merah") == 0) {
		c = 1;
	} else if(strcmp(op, "Jingga") == 0) {
		c = 2;
	} else if(strcmp(op, "Kuning") == 0) {
		c = 3;
	} else if(strcmp(op, "Hijau") == 0) {
		c = 4;
	} else if(strcmp(op, "Biru") == 0) {
		c = 5;
	} else if(strcmp(op, "Nila") == 0) {
		c = 6;
	} else if(strcmp(op, "Ungu") == 0) {
		c = 7;
	}	
	return c;	
}

int main () {

	char op[101];

	scanf("%s", &op);

	pelangi(op);

	return 0;
}