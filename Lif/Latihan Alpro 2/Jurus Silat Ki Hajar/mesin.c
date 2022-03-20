#include "prima.h"

int prima(int a) {
	int i;
	int j;
	int bukanprima;
	int prime[100];
	int x = 0;
	int y;

	for(i=1;i<542;i++) {
		bukanprima = 0;
		for(j=1;j<i;j++) {
			if(i % j == 0) {
				bukanprima++;
			}
		}

		if(bukanprima < 2) {
			prime[x] = i;
			x++;
		}
	}

	y =  prime[a];

	return y;
}