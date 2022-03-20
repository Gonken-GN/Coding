#include "palindrom.h"

int palindrom(int n, char arr[n][101]) {
	int i;
	int j;
	char sepawal[n][101];
	char sepakhir[n][101];

	for(i=0;i<n;i++) {
		int a = 0;
		int b = 0;
		if(n % 2 == 1) {
			for(j=0;j<(strlen(arr[i])+1)/2;j++) {
				sepawal[i][a] = arr[i][j];
				a++;
			}

			for(j=0;j>=(strlen(arr[i])+1)/2;j--) {
				sepakhir[i][b] = arr[i][j];
				b++;
			} 
		} else if (n % 2 == 0) {
			for(j=0;j<(strlen(arr[i]))/2;j++) {
				sepawal[i][a] = arr[i][j];
				a++;
			}

			for(j=0;j>=(strlen(arr[i]))/2;j--) {
				sepakhir[i][b] = arr[i][j];
				b++;
			}
		}
		sepawal[i][a] = '\0';
		sepakhir[i][b] = '\0';		
	}
}