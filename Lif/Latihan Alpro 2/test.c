#include <stdio.h>
#include <string.h>

int main () {
	
	int i;
	int j;
	int x;
	int y;

	int kasus;

	int map[4][4]; 

	scanf("%d", &kasus);

	for(i=0;i<kasus;i++) {

		for(i=0;i<4;i++) {
			for(j=0;j<4;j++) {
				map[i][j] = 0;
			}
		}

		scanf("%d", &x);
		scanf("%d", &y);

		int jlangkah;
		int q, w;

		scanf("%d", &jlangkah);

		char langkah[jlangkah][99];

		for(i=0;i<jlangkah;i++) {
			scanf(" %s", &langkah[i]);
			scanf("%d", &q);

			for(j=0;j<q;j++) {
				if(strcmp(langkah[i], "horizontal") == 0) {
					x = x + 1;
				} else if(strcmp(langkah[i], "-horizontal") == 0) {
					x = x - 1;
				} else if(strcmp(langkah[i], "vertikal") == 0) {
					y = y + 1;
				} else if(strcmp(langkah[i], "-vertikal") == 0) {
					y = y - 1;
				} else if(strcmp(langkah[i], "miring") == 0) {
					x = x + 1;
					y = y + 1;
				} else if(strcmp(langkah[i], "-miring") == 0) {
					x = x - 1;
					y = y - 1;
				}
			}
		}

		int koor[4][4];

		koor[x-1][y-1] = 1;

		for(i=0;i<4;i++) {
			for(j=0;j<4;j++) {
				if(koor[i][j] == 1) {
					printf("%d %d\n", i, j);
				}
			}
		}
	}

	//int a;

	// for(a=0;a<kasus;a++) {
	// 	for(i=0;i<4;i++) {
	// 		for(j=0;j<4;j++) {
	// 			if(koor[a][i][j] == 1) {
	// 				printf("%d %d\n", i, j);
	// 			}
	// 		}
	// 	}
	// }

	return 0;
}