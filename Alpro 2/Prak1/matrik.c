#include <stdio.h>
int main (){
    int i, j;
    int matriks[4][5];
    int bantu = 0;
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            matriks[i][j] = bantu++;
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            if(matriks[i][j] < 10){
                printf("%d  ", matriks[i][j]);
            }else if(matriks[i][j] < 100){
                printf("%d ", matriks[i][j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}