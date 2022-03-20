#include <stdio.h>

int main () {
	int i;
	int n;
	scanf("%d", &n);
	int sec[n];
	int h[n], m[n], s[n];

	for(i=0;i<n;i++) {
		scanf("%d", &sec[i]);
	}

	int sort[n];

	sort[0] = sec[0];

	for(i=0;i<n;i++) {
		if(sort[i] < sec[i]) {
			sort[i] = sec[i];
		}
	}

	for(i=0;i<n;i++) {
		printf("%d\n", sort[i]);
	}

	for(i=0;i<n;i++) {
		h[i] = (sort[i]/3600);
		m[i] =  (sort[i] - (3600*h[i]))/60;
		s[i] = (sort[i] - (3600*h[i]) - (m[i]*60));
	}

	for(i=0;i<n;i++) {
		if(h[i] < 10) {
			printf("0%d:", h[i]);
		} else {
			printf("%d:", h[i]);
		}

		if(m[i] < 10) {
			printf("0%d:", m[i]);
		} else {
			printf("%d:", m[i]);
		}

		if(s[i] < 10) {
			printf("0%d", s[i]);
		} else {
			printf("%d", s[i]);
		}

		printf("\n");
	}


	return 0;
}