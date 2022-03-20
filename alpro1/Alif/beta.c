#include <stdio.h>
#include <string.h>

int main () {

	int n;
	
	char penyakit[101]; 
	char elemenP[101]; 
	int i;

	scanf("%s", &penyakit);
	scanf("%s", &elemenP);

	scanf("%d", &n);

	char penawar[n][101]; 
	char elemenO[n][101];

	for(i=0;i<n;i++) {
		scanf("%s", &penawar[i]);
		scanf("%s", &elemenO[i]);
	}

	char storagePV[101];
	char storagePK[101];



	int j = 0;
	int k = 0;


	for(i=0;i<strlen(penyakit);i++) {
		if(penyakit[i] == 'a' || penyakit[i] == 'i' || penyakit[i] == 'u' || penyakit[i] == 'e' || penyakit[i] == 'o') {
			storagePV[j] = penyakit[i];
			j++;
		} else if (penyakit[i] != 'a' && penyakit[i] != 'i' && penyakit[i] != 'u' && penyakit[i] != 'e' && penyakit[i] != 'o' && penyakit[i] != '_') {
			storagePK[k] = penyakit[i];
			k++;

		}
	}

	storagePV[j] = '\0';
	storagePK[k] = '\0';

	int a;
	j = 0;
	k = 0;
	char storageOK[n][101];
	char storageOV[n][101];

	for(i=0;i<n;i++) {
		j = 0;
		k = 0;
		for(a=0;a<strlen(penawar[i]);a++) {
			if(penawar[i][a] == 'a' || penawar[i][a] == 'i' || penawar[i][a] == 'u' || penawar[i][a] == 'e' || penawar[i][a] == 'o') {
				storageOV[i][j] = penawar[i][a];
				j++;
			} else if (penawar[i][a] != 'a' && penawar[i][a] != 'i' && penawar[i][a] != 'u' && penawar[i][a] != 'e' && penawar[i][a] != 'o' && penawar[i][a] != '_') {
				storageOK[i][k] = penawar[i][a];
				k++;

			}
		}
		storageOV[i][j] = '\0';
		storageOK[i][k] = '\0';
	}

	int sembuh[n];

	for(i=0;i<n;i++) {
		sembuh[i] = 0;
	}

	for(i=0;i<n;i++) {
		if(strlen(storagePV) >= strlen(storageOV[i]) || strlen(storageOK[i]) >= strlen(storagePK)) {
			if(strcmp(elemenP, "air") == 0) { 
				if(strcmp(elemenO[i], "petir") == 0) {
					sembuh[i] = 1;
				} else if(strcmp(elemenO[i], "tanah") == 0) {
					sembuh[i] = 1;
				}
			} else if(strcmp(elemenP, "api") == 0) {
			 	if(strcmp(elemenO[i], "air") == 0) {
					sembuh[i] = 1;
				} else if(strcmp(elemenO[i], "tanah") == 0) {
					sembuh[i] = 1;
				}
			} else if(strcmp(elemenP, "udara") == 0) { 
				if(strcmp(elemenO[i], "air") == 0) {
					sembuh[i] = 1;
				} else if(strcmp(elemenO[i], "api") == 0) {
					sembuh[i] = 1;
				}
			} else if(strcmp(elemenP, "listrik") == 0) { 
				if(strcmp(elemenO[i], "udara") == 0) {
					sembuh[i] = 1;
				} else if(strcmp(elemenO[i], "api") == 0) {
					sembuh[i] = 1;
				}
			} else if(strcmp(elemenP, "tanah") == 0) { 
				if(strcmp(elemenO[i], "udara") == 0) {
					sembuh[i] = 1;
				} else if(strcmp(elemenO[i], "listrik") == 0) {
					sembuh[i] = 1;
				}
			}	
		}
	}

	int b[n];
	int c[n];

	int e = strlen(storagePK);

	for(i=0;i<n;i++) {
		b[i] = strlen(storageOK[i]);
		c[i] = strlen(penawar[i]);
	}
	int d = strlen(storagePV);

	printf("%d\n", d);

	for(i=0;i<n;i++) {
		printf("%d\n%d\n", c[i], b[i]);
	}

	printf("%d\n", e);

		
	for(i=0;i<n;i++) {
		printf("%d\n", sembuh[i]);
	}

	printf("===Berhasil===\n");

	for(i=0;i<n;i++) {
		if(sembuh[i] == 1) {
			printf("%s\n", penawar[i]);
		}
	}

	printf("===Gagal===\n");
	for(i=0;i<n;i++) {
		if(sembuh[i] == 0) {
			printf("%s\n", penawar[i]);
		}
	}
	return 0;
}

		
	