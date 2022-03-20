#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
	srand(time(NULL));
	int m[3][3];
	int i;
	int j;

	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			m[i][j] = rand()%9+1;
		}
	}

	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	printf("reflection horizontal:\n");

	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			printf("%d ", m[i][j]);
		}
		printf("| ");
		for(j=2;j>=0;j--) {
			printf("%d ", m[i][j]);	
		}
		printf("\n");
	}

	printf("reflection vertikal:\n");

	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<5;i++) {
		printf("-");
	}
	printf("\n");

	for(i=2;i>=0;i--) {
		for(j=0;j<3;j++) {
			printf("%d ", m[i][j]);	
		}
		printf("\n");
	}

	printf("transpost:\n");

	for(j=0;j<3;j++) {
		for(i=0;i<3;i++) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	printf("rotate 90 degree to right:\n");

	for(j=0;j<3;j++) {
		for(i=2;i>=0;i--) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	printf("rotate 90 degree to left:\n");

	for(j=2;j>=0;j--) {
		for(i=0;i<3;i++) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}	

	/*int n[2][2];

	for(i=0;i<2;i++) {
		for(j=0;j<2;j++) {
			scanf("%d", &n[i][j]);
		}
	}

	for(i=0;i<2;i++) {
		for(j=0;j<2;j++) {
			printf("%d ", n[i][j]);
		}
		printf("\n");
	}



	for(j=0;j<2;j++) {
		for(i=1;i>=0;i--) {
			printf("%d ", n[i][j]);
		}
		printf("\n");
	}*/

	return 0;
}