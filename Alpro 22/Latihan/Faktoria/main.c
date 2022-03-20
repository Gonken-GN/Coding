#include "header.h"
int main (){
    int i, j, n, m;
    char x, z;
    scanf(" %c", &x);
    if(x == 'B'){
        scanf("%d", &n);
        int baris[n];
        for(i=0;i<n;i++){
            scanf("%d", &baris[i]);
        }
        scanf(" %c", &z);
        scanf("%d", &m);
        int kolom[m];
        for(i=0;i<m;i++){
            scanf("%d", &kolom[i]);
        }
        long long int hasil[n][m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                hasil[i][j] = faktorial(baris[i]) * faktorial(kolom[j]);
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("%lld\n", hasil[i][j]);
            }
        }
    }else if(x == 'K'){
        scanf("%d", &m);
        int kolom[m];
        for(i=0;i<m;i++){
            scanf("%d", &kolom[i]);
        }
        scanf(" %c", &z);
        scanf("%d", &n);
        int baris[n];
        for(i=0;i<n;i++){
            scanf("%d", &baris[i]);
        }
        long long int hasil[n][m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                hasil[i][j] = faktorial(baris[i]) * faktorial(kolom[j]);
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("%lld\n", hasil[i][j]);
            }
        }
    }
    return 0;
}