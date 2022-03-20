#include <stdio.h>
#include <string.h>

int main () {

	int i;
	int j = 0;
	int n;
	scanf("%d", &n);
	char arr[n][100];

	for(i=0;i<n;i++) {
		scanf(" %s", &arr[i]);
	}

	for(i=0;i<n;i++) {
		arr[i][strlen(arr[i])] = '\0';
	}

	int a;

	scanf("%d", &a);

	for(i=0;i<n;i++) {
		if(strlen(arr[i]) < a) {
			j++;
		}
	}

	if(j + 2 == n) {
		printf("tidak ada");
	} else {
		for(i=0;i<n;i++) {
			if(strlen(arr[i]) >= a) {
				printf("%c", arr[i][a-1]);
			} else if(strlen(arr[i]) < a) {
				arr[i][a-1] = '_';
				printf("%c", arr[i][a-1]);
			}

			if(i < n-1) {
				printf("-");
			}
		}
	}
	return 0;
}