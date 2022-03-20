#include "minmax.h"

int min(int n, int num[n]) {
	int i;
	int min = 0;

	for(i=0;i<n;i++) {
		if(min > num[i]) {
			min = num[i];
		}
	}
	return min;
}

int max(int n, int num[n]) {
	int i;
	int max = 0;

	for(i=0;i<n;i++) {
		if(max < num[i]) {
			max = num[i];
		}
	}
	return max;
}

int nilai(int min, int max) {
	return(min * max); 
}

void print(int nilai) {
	int i;

	for(i=0;i<nilai;i++) {
		printf("Terima Kasih untuk Tetap Semangat\n");
	}
}	

