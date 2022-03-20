#include <stdio.h>

int main () {

	int i;
	int j;
	int q;
	int w;

	int n;
	int m;
	int count;

	scanf("%d", &n);
	scanf("%d", &m);

	char matriks[n][m];
	char matrix[m][n];

	for(i=0;i<n;i++) {
		for(j=0;j<m;j++) {
			scanf(" %c", &matriks[i][j]);
		}
	}

	scanf("%d", &count);

	char masukan[count];

	for(i=0;i<count;i++) {
		scanf(" %c", &masukan[i]);
	}

	for(i=0;i<count;i++) {
		if(masukan == 'A') {
			for(j=0;j<m;j++) {
				//w = 0;
				for(i=0;i<n;i++) {
					matrix[j][i] = matriks[i][j];
					//w++;
				}
				//q++;
			}

			if(n != m) {
				int temp = n;
				n = m;
				m = temp;
			}	
		}
	}


	q = 0;

	// for(j=0;j<m;j++) {
	// 	w = 0;
	// 	for(i=0;i<n;i++) {
	// 		matrix[q][w] = matriks[i][j];
	// 		w++;
	// 	}
	// 	q++;
	// }

	for(i=0;i<n;i++) {
		for(j=0;j<m;j++) {
			printf("%c ", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}