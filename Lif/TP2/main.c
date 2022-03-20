#include "header.h"

int main () {

    int i, j, n, m;
    
    scanf("%d %d", &n, &m); //input ukuran matriks

    food var[n][100];

    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf(" %s", var[i][j].nama); //input nama
        }
    }

    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf(" %s", var[i][j].m1); //input makanan 1
        }
    }

    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf(" %s", var[i][j].m2); //input makanan 2
        }
    }

    char change[100];

    while(strcmp(change, "stop.") != 0) { //input &change akan berhenti jika diberi masukkan "stop."
        scanf(" %s", &change); //scan masukkan untuk menukar makanan sesuai keinginan
        changer(n, m, var, change); //panggil prosedur menukar makanan
    }

    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("%s->%s,%s", var[i][j].nama, var[i][j].m1, var[i][j].m2); //output
            if(j < m-1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}