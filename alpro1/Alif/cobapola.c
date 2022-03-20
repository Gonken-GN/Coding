#include <stdio.h>
#include <string.h>

int main () {

	int i;
	int n;
	
	scanf("%d", &n);

	char arr[n][101];

	for(i=0;i<n;i++) {
		scanf("%s", &arr[i]);
	}

	int panjang[n];

	for(i=0;i<n;i++) {
		panjang[i] = strlen(arr[i]);
	}

	char x;

	char tampung[i][101];

	scanf(" %c", &x);

	int j;

	for(i=0;i<n;i++) {
		int a = 0;
		for(j=0;j<panjang[i];j++) {
			if(arr[i][j] == x) {
				tampung[i][a] = arr[i][j];
				a++;
			}
		}
		tampung[i][a] = '\0';
	}
	
	int length[i];

	for(i=0;i<n;i++) {
		length[i] = strlen(tampung[i]);
	}

	int b = 0;

	for(i=0;i<n;i++) {
		if(b < length[i]) {
			b = length[i];
		}
	}

	printf("%d", b);

	return 0;
}