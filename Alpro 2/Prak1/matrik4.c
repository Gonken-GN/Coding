#include <stdio.h>
int main (){
    int i, j;
    int angka = 1;
    int matriks[2][3];
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            matriks[i][j] = angka++;
        }
    }
    int matrikst[2][3];
    for(i=0;i<2;i++){
        for(j=2;j>=0;j--){
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
    return 0;
}