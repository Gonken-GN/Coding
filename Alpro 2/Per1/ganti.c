#include <stdio.h>
int main (){
    int i, j;
    int matriks[2][2];
    int count = 0;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d", &matriks[i][j]);
            if(matriks[i][j] % 2 == 0){
                count++;
            }
        }
    }
    int matriks3[2][2];
    int tampung[count];
    int k;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(matriks[i][j] % 2 == 0){
                printf("Matriks tedapat angka genap: ");
                scanf("%d", &matriks3[i][j]);
            }else{
                matriks3[i][j] = matriks[i][j];
            }
        }
    }
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d ", matriks3[i][j]);
    }
    printf("\n");
}
    return 0;
}