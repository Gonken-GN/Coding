#include<stdio.h>

int main()
{

	int n;
	int m;
	int i;
	int jumlahA = 0;
	int jumlahB = 0;

	scanf("%d", &n);

	int a[n];

	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	scanf("%d", &m);

	int b[m];

	for(i = 0;i < m;i++) {
		scanf("%d", &b[i]);
	}

	for(i = 0; i < n/2; i++) {
		jumlahA+=a[i];
	}

	for(i = m-1; i > (m/2) - 1; i--) {
		jumlahB+=b[i];
	}

	if(jumlahA == jumlahB) {
		printf("valid\n");
	} else {
		printf("tidak valid\n");
	}

	return 0;
}