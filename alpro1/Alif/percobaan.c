#include <stdio.h>
#include <string.h>

	int main() {

		int n;
		int m;
		int i;
		int baris;
		int kolom;

		scanf("%d", &n);

		char array1[n + 1];

		for(i=0;i<n;i++) {
			scanf(" %c", &array1[i]);
		}

		scanf("%d", &m);		

		char array2[m + 1];

		for(i=0;i<m;i++) {
			scanf(" %c", &array2[i]);
		}

		int c = 0;

		char vokal[n+m];
		char konsonan[n+m];

		for(i=0;i<n;i++) {
			if(array1[i] == 'a' || array1[i] == 'i' || array1[i] == 'u' || array1[i] == 'e' || array1[i] == 'o') {
				array1[i] = vokal[c];
				c++;
			} else {
				array1[i] = konsonan[c];
				c++;
			}
		}

		int d = c;

		for(i=0;i<m;i++) {
			if(array2[i] == 'a' || array2[i] == 'i' || array2[i] == 'u' || array2[i] == 'e' || array2[i] == 'o') {
				array2[i] = vokal[d];
				d++;;
			} else {
				array2[i] = konsonan[d];
				d++;
			}
		}

		for(i=0;i<m+n;i++) {
			printf("%c", &vokal[i]);
			printf("\n");
			printf("%c", &konsonan[i]);
		}

		return 0;
	}