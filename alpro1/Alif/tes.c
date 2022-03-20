#include <stdio.h>
#include <string.h>

	int main () {

		int n;
		int i;

		scanf("%d", &n);

		char array[n][50];
		int max = 0;

		for(i=0;i<n;i++) {
			scanf("%s", array[i]);
		}

		for(i=0;i<n;i++) {
			if(max < strlen(array[i])) {
				max = strlen(array[i]);
			}
		}

		int j;

		for(i=0;i<n;i++) {
			for(j=0;j<(max - strlen(array[i]));j++) {
				printf(" ");
			}
			printf("%s\n", array[i]);
		}


		return 0;
	}