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
    int matrikst[3][2];
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            matrikst[i][j] = matriks[j][i];
        }
    }
    printf("Transpose dari matriks tersebut adalah \n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d ", matrikst[i][j]);
        }
        printf("\n");
    }
    return 0;
}