#include <stdio.h>
#include <string.h>
int main (){
    int matriks1[3][2];
    int matriks2[2][3];
    int matriks3[3][3];
   int i, j, jumlah;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("Masukkan angka matriks pertama(baris, %d, kolom %d): ", i, j);
            scanf("%d", &matriks1[i][j]);
            printf("\n");
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Masukkan angka matriks kedua(baris, %d, kolom %d): ", i, j);
            scanf("%d", &matriks2[i][j]);
            printf("\n");
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matriks3[i][j] = 0;
            for(jumlah=0;jumlah<2;jumlah++){
                matriks3[i][j] = matriks3[i][j] + (matriks1[i][jumlah] * matriks2[jumlah][j]);
            }
        }
    }
    printf("Hasil perkalian kedua matriks tersebut adalah: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ", matriks3[i][j]);
        }
        printf("\n");
    }

    return 0;
}