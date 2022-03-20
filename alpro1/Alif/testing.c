#include <stdio.h>
#include <string.h>
	int main() {

		int n, i, spasi=0, j;
		scanf("%d", &n);
		char str[n][101];

		for(i = 0;i < n;i++) {
			scanf("%s", &str[i]);
		}

		for(i=0;i<n;i++) {
			spasi+=strlen(str[i]);
		}

		for(i=0;i<n;i++) {
			spasi-=strlen(str[i]);
			for(j  = 0; j < spasi; j++) {
				printf(" ");
			}
			for(j=0;j<strlen(str[i]);j++) {
				printf("%c", str[i][j]);
			}
			printf("\n");
		}


		return 0;
	}