#include "header.h"
char str[100][100];
char nama[100][100];
char yes[100];
char bin[100];
char review[100][50];
void spasi(int n, char str[n][100]){
    int i, j, a;
    int count[n];
    for(i=0;i<n;i++){
        count[i] = 0;
    }
    for(i=0;i<n;i++){
        a=0;
        for(j=0;j<strlen(str[i]);j++){
            if((count[i] == 0) && (str[i][j] != '/')){
                nama[i][j] = str[i][j];
            }else if((count[i] == 0) && (str[i][j] == '/')){
                nama[i][j] = '\0';
                count[i]++;
            }else if((count[i] == 1) && (str[i][j] != '/')){
                yes[i] = str[i][j];
                count[i]++;
            }else if((count[i] == 2) && (str[i][j] != '/')){
                bin[i] = str[i][j];
                count[i]++;
            }else if((count[i] == 3) && (j<strlen(str[i]))){
                review[i][a] = str[i][j+1];
                a++;
            }
            review[i][a] = '\0';
        }
    }
    for(i=0;i<n;i++){
        printf("%s", nama[i]);
        printf(" %c", yes[i]);
        printf(" %c ", bin[i]);
        printf("%s", review[i]);
        printf("\n");
    }
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 9 "Bisnis Online Loki" (PR12020) dalam mata kuliah
Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/