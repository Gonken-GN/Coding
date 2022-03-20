#include <stdio.h>
int main () {
    int n, m;
    scanf("%d %d", &n, &m);
    int matriks[n][m];
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Masukkan angka (baris %d, kolom %d)", i, j);
            scanf("%d", &matriks[i][j]);
            printf("\n");
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
    int det = 0;
    if(n == 2 && m == 2){
        det = ((matriks[0][0] * matriks[1][1]) - (matriks[0][1] * matriks[1][0]));
    }else if (n == 3 && m == 3){
        det = ((matriks[0][0] * matriks[1][1] * matriks[2][2]) + (matriks[0][1] * matriks[1][2] * matriks[2][0]) + (matriks[0][2] * matriks[1][0] * matriks[2][1]) - 
        (matriks[0][2] * matriks[1][1] * matriks[2][0]) - (matriks[0][0] * matriks[1][2] * matriks[2][1]) - (matriks[0][1] * matriks[1][0] * matriks[2][2]));
    }
    printf("Determinan dari matriks tersebut adalah %d \n", det);
    return 0;
}