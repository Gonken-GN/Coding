#include "header.h"
void pola(int n, char str[n][50], int m){
    int i, j;
    int spasi = 0;
    for(i=0;i<n;i++){
        if(i != 0){
            spasi += strlen(str[i-1])- m;
            for(j=0;j<spasi;j++){
             printf(" ");
            }
        }
        printf("%s", str[i]);
        printf("\n");
    }
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi Kuis3 Prosedur Fungsi Bahagia (PROFUN12) dalam mata kuliah Alpro 1
 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/