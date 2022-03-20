#include <stdio.h>
int main (){
    int i, j;
    int matriks[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d", &matriks[i][j]);
        }
    }
    char tukar;
    int n;
    printf("Geser kanan(1) atau kiri(2): ");
    scanf(" %c", &tukar);
    printf("Berapa kali Geser: ");
    scanf("%d", &n);
    int q = 0, w;
    int matrikst[2][2];
    int matriks3[2][2];
    int k;
    if(tukar == '1'){
        for(k=0;k<n;k++){
            for(i=1;i>=0;i--){
                for(j=0;j<2;j++){
                    matrikst[j][1-i] = matriks[i][j];
                }
            }
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    matriks[i][j] = matrikst[i][j];
                }
            }
        }
    }else if(tukar == '2'){
        for(k=0;k<n;k++){
            for(i=0;i<2;i++){
                for(j=1;j>=0;j--){
                    if(i==0){
                        matrikst[i][1-j] = matriks[1-j][1];
                    }else if(i == 1){
                        matrikst[i][1-j] = matriks[1-j][0];
                    }
                }
            }
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){   
                    matriks[i][j] = matrikst[i][j];
                }
            }
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}