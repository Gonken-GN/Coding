#include <stdio.h>
	int main () {
		int n;
		int i;

		scanf("%d", &n);

		float x[n];

		for(i=0;i<n;i++) {
			scanf("%f", &x[i]);
		}

		int depan[n];
		int belakang[n];

		for(i=0;i<n;i++) {
			depan[i] = x[i];
			belakang[i] = ((x[i] - depan[i]) * 100 + .5);
		}

		int count = 0;

		for(i=0;i<n;i++) {
			if(depan[i] % belakang[i] == 0) {
				count++;
			}
		}

		if(count >=3) {
			printf("yes\n");
		} else if(count < 3) {
			printf("no\n");
		}

		return 0;
	}

