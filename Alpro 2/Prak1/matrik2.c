#include <stdio.h>
int main (){
    int i, j;
    int angka = 0;
    int matriks[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            matriks[i][j] = angka++;
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(matriks[i][j] < 10){
                printf("%d  ", matriks[i][j]);
            }else if(matriks[i][j] < 100){
                printf("%d ", matriks[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n Masukkan angka untuk dikalikan dengan matriks : ");
    int cari;
    scanf("%d", &cari);
    int baris, kolom, count  = 0;
    int matriks3[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            matriks3[i][j] = matriks[i][j] * cari;
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(matriks[i][j] < 10){
                printf("%d  ", matriks3[i][j]);
            }else if(matriks[i][j] < 100){
                printf("%d ", matriks3[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}