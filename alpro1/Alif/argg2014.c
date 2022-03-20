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

	int counter = 0;

	if (n >= m) {
        for(i = 0; i < m; i++) {
            if((a[i] % 2 == 0 && b[i] % 2 == 0) || (a[i] % 2 == 1 && b[i] % 2 == 1)) {
            counter++;
            }
        }
    } else if (n <= m) {
        for(i = 0; i < n; i++) {
            if((a[i] % 2 == 0 && b[i] % 2 == 0) || (a[i] % 2 == 1 && b[i] % 2 == 1)) {
            counter++;
            }
        }
    }
    
    
    if (n >= m) {
        if (counter == m) {
            printf("valid\n");
        } else {
            printf("tidak valid\n");
        }
    } else if (n <= m) {
        if (counter == n) {
            printf("valid\n");
        } else {
            printf("tidak valid\n");
        }
    }
	return 0;
}