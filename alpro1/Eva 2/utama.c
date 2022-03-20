#include "ana.h"
void cek(int n, char nama1[n][100], int m, char nama2[m][100]){
    int i, j;
    int sumna1 = 0;
    int sumna2 = 0;
    for(i=0;i<n;i++){
        sumna1 += strlen(nama1[i]);
    }
    for(i=0;i<m;i++){
        sumna2 += strlen(nama2[i]);
    }
    char tampung1[sumna1];
    char tampung2[sumna2];
    int a = 0;
    int b = 0;
    for(i=0;i<n;i++){
        for(j=0;j<strlen(nama1[i]);j++){
            tampung1[a] = nama1[i][j];
            a++;
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<strlen(nama2[i]);j++){
            tampung2[b] = nama2[i][j];
            b++;
        }
    }
    tampung1[sumna1] = '\0';
    tampung2[sumna2] = '\0';
    int asci1 = 0;
    int asci2 = 0;
    for(i=0;i<strlen(tampung1);i++){
        asci1 += tampung1[i];
    }
    for(i=0;i<strlen(tampung2);i++){
        asci2 += tampung2[i];
    }
    if(asci1 == asci2){
        if(strcmp(tampung1, "rajawhile") == 0){
            printf("Ini Makam Raja While!\n");
        } else {
            printf("Anda Menemukan Makam ");
            for(i=0;i<n;i++){
                printf("%s", nama1[i]);
                if(i < n-1){
                    printf(" ");
                }
            }
            printf("!\n");
        }
    }else{
        printf("Pemilik Makam Tidak Ditemukan.");
    }
}