#include "header.h"

int main () {

    int i;
    int j;
    int n;
    int m;

    scanf("%d %d", &n, &m);

    matriks pec1[n][100];
    matriks pec2[n][100];

    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &pec1[i][j].pembilang);
            scanf("%d", &pec1[i][j].penyebut);
        }
    }

    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &pec2[i][j].pembilang);
            scanf("%d", &pec2[i][j].penyebut);
        }
    }

    tukar(n, m, pec1, pec2);

    

    // for(i=0;i<n;i++) {
    //     for(j=0;j<m;j++) {
    //         printf("%d %d", pec1[i][j].pembilang, pec1[i][j].penyebut);
    //     }
    //     printf("\n");
    // }

    // printf("\n");
    // printf("\n");
    // printf("\n");
    // printf("\n");

    return 0;
}