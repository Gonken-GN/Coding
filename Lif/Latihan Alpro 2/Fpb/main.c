#include "fpb.h"

int main () {
	int i;
	int j;
	int n;
	int m;
	char x;

	scanf(" %c", &x);
	
	if(x == 'B') {
		scanf("%d", &n);
		int baris[n];
		for(i=0;i<n;i++) {
			scanf("%d", &baris[i]);
		}

		scanf(" %c", &x);

		scanf("%d", &m);
		int kolom[m];
		for(i=0;i<m;i++) {
			scanf("%d", &kolom[i]);
		}	

		int faktor[n][m];

		for(i=0;i<n;i++) {
			for(j=0;j<m;j++) {
				faktor[i][j] = fpb(baris[i], kolom[j]);
			}
		}

		for(i=0;i<n;i++) {
			for(j=0;j<m;j++) {
				printf("%d", faktor[i][j]);
			}
		}
	} else if(x == 'K') {
		scanf("%d", &m);
		int kolom[m];
		for(i=0;i<m;i++) {
			scanf("%d", &kolom[i]);
		}

		scanf(" %c", &x);

		scanf("%d", &n);
		int baris[n];
		for(i=0;i<n;i++) {
			scanf("%d", &baris[i]);
		}

		int faktor[n][m];

		for(i=0;i<n;i++) {
			for(j=0;j<m;j++) {
				faktor[i][j] = fpb(baris[i], kolom[j]);
			}
		}

		for(i=0;i<n;i++) {
			for(j=0;j<m;j++) {
				printf("%d\n", faktor[i][j]);
			}
		}		
	} 

	return 0;
}