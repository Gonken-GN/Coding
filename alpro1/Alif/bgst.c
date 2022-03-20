#include <stdio.h>
#include <string.h>

int main () {

	char arr1[100];
	int n;
	int i;
	scanf("%d", &n);
	char arr2[n][100];
	char nama[n][100];

	scanf("%s", &arr1);
	for(i=0;i<n;i++) {
		scanf("%s", &nama[i]);
		scanf("%s", &arr2[i]);
	}

	int count[n];

	for(i=0;i<n;i++) {
		count[i] = 0;
	}

	for(i=0;i<n;i++) {
		if(strcmp(arr1, "air") == 0) {
			if(strcmp(arr2[i], "tanah") == 0) {
				count[i] = 1;
			} else if(strcmp(arr2[i], "api") == 0) {
				count[i] = 1;
			}
		} else if(strcmp(arr1, "tanah") == 0) {
			if(strcmp(arr2[i], "air") == 0) {
				count[i] = 1;
			} else if(strcmp(arr2[i], "api") == 0) {
				count[i] = 1;
			}
		} else if(strcmp(arr1, "api") == 0) {
			if(strcmp(arr2[i], "tanah") == 0) {
				count[i] = 1;
			} else if(strcmp(arr2[i], "air") == 0) {
				count[i] = 1;
			}
		}
	}

	for(i=0;i<n;i++) {
		printf("%s\n%d\n%d\n", nama[i], count[i], i);
	}

	return 0;
}