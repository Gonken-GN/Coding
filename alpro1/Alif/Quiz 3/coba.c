#include <stdio.h>

int main () {

	int i;
	int n;
	int j;
	scanf("%d", &n);

	int num[n];

	for(i=0;i<n;i++) {
		scanf("%d", &num[i]);
	}

	int a;
	int b;
	
	scanf("%d", &a);
	scanf("%d", &b);

	int chk = 0;
	int x = 0;

	int tampung[4][n/4];

	for(i=0;i<4;i++) {
		for(j=0;j<n/4;j++) {
			tampung[i][j] = num[x];
			x++;
		}
	}

	for(i=0;i<4;i++) {
		for(j=0;j<n/4;j++) {
			printf("%d", tampung[i][j]);
		}
		printf("\n");
	}

	for(j=0;j<n/4;j++) {
		if(tampung[a][j] == tampung[b][j]) {
			chk++;
		}
		printf("%d\n%d\n", tampung[a][j], tampung[b][j]);
	}

	printf("%d", chk);

	if(chk == n/4) {
		printf("sama\n");
	}

	return 0;
}