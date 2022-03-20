#include <stdio.h>
#include <string.h>
typedef struct{
    char warna[100];
    int red;
    int blue;
    int green;
    char tampung[100];
    int red2;
    int blue2;
    int green2;
}warna;
int main (){
    int n, m, i, j;
    char cari[100];
    scanf("%d %d", &n, &m);
    warna rgb[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%s %d %d %d", &rgb[i][j].warna, &rgb[i][j].red, &rgb[i][j].green, &rgb[i][j].blue);
        }
    }
    scanf("%s", cari);
    int count = 0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(strcmp(rgb[i][j].warna, cari) == 0){
                count = 1;
                printf("")
            }
        }
    }
    return 0;
}