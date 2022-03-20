#include <stdio.h>

int main () {

	int i;
	int n;
	scanf("%d", &n);

	int num[n];

	for(i=0;i<n;i++) {
		scanf("%d", &num[i]);
	}

	int a;
	int chk = 0;
	int ada = 0;

	scanf("%d", &a);

	for(i=0;i<n;i++) {
		if(num[i] % a == 0 && num[i+1] % a == 0) {
			ada++;
			if(ada > 3) {
				ada = 3;
			} 
		}
	}

	if(ada < 3) {
		chk = 1;
	}

	int tampung[ada];
	int x = 0;

	for(i=0;i<n;i++) {
		if(num[i] % a == 0 && ada == 3) {
			tampung[x] = num[i];
			x++;
		}
	}

	if (chk == 1) {
		printf("tidak memenuhi syarat\n");
	} else {
		for(i=0;i<ada;i++) {
			printf("%d ", tampung[i]);
		}
		printf("\n");
	}

	return 0;
}