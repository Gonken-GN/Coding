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
        int hasil[n][m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                hasil[i][j] = fpb(baris[i], kolom[j]);
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("%d\n", hasil[i][j]);
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
        int hasil[n][m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                hasil[i][j] = fpb(baris[i], kolom[j]);
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("%d\n", hasil[i][j]);
            }
        }
    }
    return 0;
}