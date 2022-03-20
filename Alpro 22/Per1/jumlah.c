#include <stdio.h>
int main (){
    int matriks1[2][2];
    int matriks2[2][2];
    int i, j;
    printf("Masukkan angka untuk matriks pertama\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Masukkan angka (baris %d, kolom %d): ", i, j);
            scanf("%d", &matriks1[i][j]);
            printf("\n");
        }
    }
    printf("Masukkan angka untuk matriks kedua");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Masukkan angka (baris %d, kolom %d): ", i, j);
            scanf("%d", &matriks2[i][j]);
            printf("\n");
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ", matriks1[i][j]);;
        }
        printf("\n");
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ", matriks2[i][j]);;
        }
        printf("\n");
    }
    int matriks3[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            matriks3[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }
    printf("Jumlah dari kedua matriks tersebut adalah: \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ", matriks3[i][j]);
        }
        printf("\n");
    }
    return 0;
}