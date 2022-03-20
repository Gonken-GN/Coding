#include "header.h"

int main () {

    int i, j, awal, beda, n, m, a;

    scanf("%d", &awal);
    scanf("%d", &beda);
    scanf("%d %d", &n, &m);

    int arr[n*m];
    int banding[n][100];
    int tampung[n][m];

    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &banding[i][j]);
        }
    }

    a = 0;
    fib(n, m, arr, awal, beda, a); //panggil prosedur matriks fibonacci
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            tampung[i][j] = arr[a];
            a++;
        }
    }

    printf("Matriks Fibonacci:\n");

    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("%d", tampung[i][j]);
            if(j < m-1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");

    cek(n, m, banding, arr); //panggil prosedur cek matriks pembanding

    return 0;
}