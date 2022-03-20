#include <stdio.h>
#include <math.h>

int main () {

	int i;
	int j;

	int matriks[3][3];


	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			scanf("%d", &matriks[i][j]);
		}
	}

	printf("\n");
	printf("\n");
	printf("\n");

	for(i=0;i<3;i++) {
		printf("| ");
		for(j=0;j<3;j++) {
			printf("%d ", matriks[i][j]);
		}
		printf("|");
		printf("\n");
	}

	int det2[3];
	int det3[3];

	det2[0] = (matriks[1][1] * matriks[2][2]) - (matriks[1][2] * matriks[2][1]);
	det2[1] = (matriks[1][0] * matriks[2][2]) - (matriks[1][2] * matriks[2][0]);
	det2[2] = (matriks[1][0] * matriks[2][1]) - (matriks[1][1] * matriks[2][0]); 

	for(i=0;i<3;i++) {
		det3[i] = (pow(-1,(1 + i+1))*matriks[0][i]*det2[i]);
	}

	int det = 0;

	for(i=0;i<3;i++) {
		det = det + det3[i];
	}

	printf("determinan : %d", det);



	return 0;
}