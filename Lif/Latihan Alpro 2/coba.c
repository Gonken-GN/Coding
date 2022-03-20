#include <stdio.h>

int faktorialBaris(int a){
    if(a<=1){
        return 1;
    }else {
        return a*faktorialBaris(a-1);
    }
}

int faktorialKolom(int b){
	if(b<=1){
        return 1;
    }else {
        return b*faktorialKolom(b-1);
    }	
}

int main () {
	int i;
	int j;
	int n;
	int m;
	char x;

	scanf(" %c", &x);

	if(x == 'B') {
		scanf("%d", &n);
		int tampungB[n];
		for(i=0;i<n;i++) {
			scanf("%d", &tampungB[i]);
		}
		scanf(" %c", &x);
		scanf("%d", &m);
		int tampungK[m];
		for(i=0;i<m;i++) {
			scanf("%d", &tampungK[i]);
		}
		int fB[n];
		int fK[m];
		for(i=0;i<n;i++) {
			fB[i] = tampungB[i];
		}

		for(i=0;i<m;i++) {
			fK[i] = tampungK[i];
		}
		int faB[n];
		int faK[m];

		printf("  ");

		for(i=0;i<m;i++) {
			faK[i] = faktorialKolom(fK[i]);
			printf("%d ", faK[i]);
		}

		printf("\n");

		for(i=0;i<n;i++) {
			faB[i] = faktorialBaris(fB[i]);
			printf("%d\n", faB[i]);	
		}

		int kali[n][m];

		for(i=0;i<n;i++) {
			for(j=0;j<m;j++) {
				kali[i][j] = faB[i]*faK[j];
			}
		}

		printf("\n");
		printf("\n");

		for(i=0;i<n;i++) {
			for(j=0;j<m;j++) {
				printf("%d\n", kali[i][j]);
			}
		}
	} else {
		scanf("%d", &m);
		int tampungK[m];
		for(i=0;i<m;i++) {
			scanf("%d", &tampungK[i]);
		}
		scanf(" %c", &x);
		scanf("%d", &n);
		int tampungB[n];
		int fB[n];
		int fK[m];
		for(i=0;i<n;i++) {
			scanf("%d", &tampungB[i]);
		}
		for(i=0;i<n;i++) {
			fB[i] = tampungB[i];
		}

		for(i=0;i<m;i++) {
			fK[i] = tampungK[i];
		}

		int faB[n];
		int faK[m];

		printf("  ");

		for(i=0;i<m;i++) {
			faK[i] = faktorialKolom(fK[i]);
			printf("%d ", faK[i]);
		}

		printf("\n");

		for(i=0;i<n;i++) {
			faB[i] = faktorialBaris(fB[i]);
			printf("%d\n", faB[i]);	
		}

		int kali[n][m];

		for(i=0;i<n;i++) {
			for(j=0;j<m;j++) {
				kali[i][j] = faB[i]*faK[j];
			}
		}

		printf("\n");
		printf("\n");

		for(i=0;i<n;i++) {
			for(j=0;j<m;j++) {
				printf("%d\n", kali[i][j]);
			}
		}
	}

	return 0;
}