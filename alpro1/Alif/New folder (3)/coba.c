#include <stdio.h>
#include <string.h>

int main () {

	int i;
	int j;
	int n;
	int m;

	scanf("%d", &n);

	char nama[n][100];

	for(i=0;i<n;i++) {
		scanf("%s", &nama[i]);
	}

	scanf("%d", &m);

	char anagram[m][100];


	for(i=0;i<m;i++) {
		scanf("%s", &anagram[i]);
	}

	int jumlahnama = 0;
	int jumlahanag = 0;

	for(i=0;i<n;i++) {
		jumlahnama = jumlahnama + strlen(nama[i]);
	}

	for(i=0;i<m;i++) {
		jumlahanag = jumlahanag + strlen(anagram[i]);
	}

	printf("%d\n%d\n", jumlahnama, jumlahanag);

	char tampung1[jumlahnama];
	char tampung2[jumlahanag];

	int a = 0;
	int b = 0;

	for(i=0;i<n;i++) {
		for(j=0;j<strlen(nama[i]);j++) {
			tampung1[a] = nama[i][j];
			a++;
		}
	}

	for(i=0;i<m;i++) {
		for(j=0;j<strlen(anagram[i]);j++) {
			tampung2[b] = anagram[i][j];
			b++;
		}
	}

	tampung1[jumlahnama] = '\0';
	tampung2[jumlahanag] = '\0';

	printf("%s\n%s\n", tampung1, tampung2);

	int check = 0;

	int ascii1 = 0;
	int ascii2 = 0;

	for(i=0;i<strlen(tampung1);i++) { 
		ascii1 = ascii1 + tampung1[i];
	}

	for(i=0;i<strlen(tampung2);i++) { 
		ascii2 = ascii2 + tampung2[i];
	}
	
	printf("%d\n", ascii1);

	printf("%d\n", ascii2);

	if(ascii1 == ascii2) {
		if(strcmp(tampung1, "rajawhile") == 0) {
			printf("Ini Makam Raja While!\n");
		} else {
			printf("Anda Menemukan Makam");
			for(i=0;i<n;i++) {
				printf(" %s", nama[i]);
			}
			printf("!\n");
		}
	} else {
		printf("Pemilik Makam Tidak Ditemukan\n");
	}


	return 0;
}