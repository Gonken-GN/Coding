#include "trans.h"

int main () {

	int i;
	int j;
	int n;
	int m;

	scanf("%d", &n); //scan jumlah baris
	scanf("%d", &m); //scan jumlah kolom

	char matriks[n][99];

	for(i=0;i<n;i++) {
		for(j=0;j<m;j++) {
			scanf(" %c", &matriks[i][j]); //scan isi matriks
		}
	}

	int count;

	scanf("%d", &count); //scan jumlah masukan

	char masukan[count];

	for(i=0;i<count;i++) {
		scanf(" %c", &masukan[i]); //scan masukan
	}

	for(i=0;i<count;i++) {
		if(masukan[i] == 'A') {
			transpose(n, m, matriks);
			int temp = n;
			n = m;
			m = temp;
		} else if(masukan[i] == 'B') {
			xreflection(n, m, matriks);
		} else if(masukan[i] == 'C') {
			yreflection(n, m, matriks);
		} else if(masukan[i] == 'D') {
			transpose(n, m, matriks);
			int temp = n;
			n = m;
			m = temp;
			xreflection(n, m, matriks);
		} else if(masukan[i] == 'E') {
			transpose(n, m, matriks);
			int temp = n;
			n = m;
			m = temp;
			yreflection(n, m, matriks);
		}

	}


	for(i=0;i<n;i++) {
		for(j=0;j<m;j++) {
			printf("%c", matriks[i][j]);
			if(j < m-1) {
				printf(" ");
			}
		}
		printf("\n");
	}




	return 0;
}