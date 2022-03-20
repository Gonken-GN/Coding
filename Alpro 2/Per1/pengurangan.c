#include <stdio.h>
int main (){
    int i, j;
    int matriks1[2][2];
    int matriks2[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Masukkan matriks1(baris %d, kolom %d): ", i, j);
            scanf("%d", &matriks1[i][j]);
            printf("\n");
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Masukkan matriks2(baris %d, kolom %d): ", i, j);
            scanf("%d", &matriks2[i][j]);
            printf("\n");
        }
    }
    int matriks3[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            matriks3[i][j] = matriks1[i][j] - matriks2[i][j];
        }
    }
    printf("Matriks 3\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ", matriks3[i][j]);
        }
        printf("\n");
    }
    return 0;
}