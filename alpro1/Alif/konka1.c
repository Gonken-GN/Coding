#include <stdio.h>
	int main () {

		int i;
		int input[6];

		for(i = 0; i < 6; i++) {
			scanf("%d", &input[i]);
		}

		int gn[3];
		int gj[3];
		int gnc = 0;
		int gjc = 0;

		for(i = 0; i < 6; i++) {
			if (input[i] % 2 == 0) {
				input[i] = gn[i];
				gnc++;
			}

			if (input[i] % 2 == 1) {
				input[i] = gj[i];
				gjc++;
			}
		}

		if (gnc == 3 && gjc == 3) {
			for (i = 0; 1 < 3; i++) {
				printf("%d\n%d", gn[i], gj[i]);
			}
		}
		return 0;
	}