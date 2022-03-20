#include "header.h"

void tukar(int n, int m, matriks pec1[n][100], matriks pec2[n][100]) {
    int i;
    int j;

    int temp1;
    int temp2;
    
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if((pec1[i][j].pembilang * pec2[i][j].penyebut) <= (pec2[i][j].pembilang * pec1[i][j].penyebut)) {
                temp1 = pec1[i][j].pembilang;
                pec1[i][j].pembilang = pec2[i][j].pembilang;
                pec2[i][j].pembilang = temp1;

                temp2 = pec1[i][j].penyebut;
                pec1[i][j].penyebut = pec2[i][j].penyebut;
                pec2[i][j].penyebut = temp2;
            }
        }
    }

    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("%d %d\n", pec2[i][j].pembilang, pec2[i][j].penyebut);
        }
    }
}