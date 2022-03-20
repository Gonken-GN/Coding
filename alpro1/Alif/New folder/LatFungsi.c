#include "LatFungsi.h"

int  main () {
	int hasil;
	char str[50];
	scanf("%s", &str);
	hasil = jumlahA(str);
	printf("%d\n", hasil);

	scanf("%s", &str);
	printf("%d\n", jumlahA(str));

	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n", tambah(x, y));

	int n;
	int i;
	int s = 1; 

	while(s > 0) {
		scanf("%d", &n);

		int num[n];

		for(i=0;i<n;i++) {
			scanf("%d", &num[i]);
		}

		printf("%d\n", jumlahB(n, num));
		s++;

		int r = jumlahB(n, num);
		int t = r + 20;

		printf("%d", t);
	}	



	return 0;
}