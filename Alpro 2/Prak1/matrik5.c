#include <stdio.h>
int main (){
    int i, j;
    int baris, kolom;
    scanf("%d", &baris);
    scanf("%d", &kolom);
    int matriks[baris][kolom];
    int angka = 1;
    for(i=0;i<baris;i++){
        for(j=0;j<kolom;j++){
            scanf("%d", &matriks[i][j]);
        }
    }
    int lr, putar;
    for(i=0;i<baris;i++){
        for(j=0;j<kolom;j++){
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
    printf("Putar kanan (1) atau kiri (2) : ");
    scanf("%d", &lr);
    printf(" Berapa kali putar : ");
    scanf("%d", &putar);
    int matrikst[kolom][baris];
    for(i=0;i<kolom;i++){
        for(j=0;j<baris;j++){
            matrikst[i][j] = matriks[j][i];
        }
    }
    int k;
    int matriks3[100][100];
    int a = 0, b = 0;
    if(lr == 1){
        if(putar == 1){
                for(i=0;i<kolom;i++){
                    b = 0;
                    for(j=baris-1;j>=0;j--){
                        matriks3[a][b] = matrikst[i][j];
                        b++;
                    }
                    a++;
                }
        }else if(putar == 3){
                for(i=kolom-1;i>=0;i--){
                    b = 0;
                    for(j=0;j<baris;j++){
                        matriks3[a][b] = matrikst[i][j];
                        b++;
                    }
                    a++;
                }
        }else if(putar == 2){
            for(i=baris-1;i>=0;i--){
                b=0;
                for(j=kolom-1;j>=0;j--){
                    matriks3[a][b] = matriks[i][j];
                    b++;
                }
                a++;
            }
        }else{
            for(i=0;i<baris;i++){
                b=0;
                for(j=0;j<kolom;j++){
                    matriks3[a][b] = matriks[i][j];
                    b++;
                }
                a++;
            }
        }
        if(putar % 2 == 1){
            for(i=0;i<kolom;i++){
                for(j=0;j<baris;j++){
                    printf("%d ", matriks3[i][j]);
                }
                printf("\n");
            }
        }else{
            for(i=0;i<baris;i++){
                for(j=0;j<kolom;j++){
                    printf("%d ", matriks3[i][j]);
                }
                printf("\n");
            }
        }
    }else if(lr == 2){
        if(putar == 1){
         for(i=kolom-1;i>=0;i--){
                 b = 0;
                for(j=0;j<baris;j++){
                     matriks3[a][b] = matrikst[i][j];
                    b++;
                }
                 a++;
            }
        }else if(putar == 2){
            for(i=baris-1;i>=0;i--){
                b=0;
                for(j=kolom-1;j>=0;j--){
                    matriks3[a][b] = matriks[i][j];
                    b++;
                }
                a++;
            }
        }else if(putar == 3){
            for(i=baris-1;i>=0;i--){
                b=0;
                for(j=kolom-1;j>=0;j--){
                    matriks3[a][b] = matriks[i][j];
                    b++;
                }
                a++;
            }
        }else{
            for(i=0;i<baris;i++){
                b=0;
                for(j=0;j<kolom;j++){
                    matriks3[a][b] = matriks[i][j];
                    b++;
                }
                a++;
            }
        }
         if(putar % 2 == 1){
            for(i=0;i<kolom;i++){
                for(j=0;j<baris;j++){
                    printf("%d ", matriks3[i][j]);
                }
                printf("\n");
            }
        }else{
            for(i=0;i<baris;i++){
                for(j=0;j<kolom;j++){
                    printf("%d ", matriks3[i][j]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}