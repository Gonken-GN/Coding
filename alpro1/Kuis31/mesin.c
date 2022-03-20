#include "header.h"
int cek(int n, char str[n][50], char sub[50]){
    int i, j, k, l;
    char tampung[50];
    int a = 0;
    int count[n];
    for(i=0;i<n;i++){
        count[i] = 0;
    }
    int total = 0;
    int b = 0;
    int totfin = 0;
    for(i=0;i<n;i++) {
        for(j=0;j<strlen(str[i]);j++) {
            if(str[i][j] == sub[0]) {
                a = j+1;
                for(k=1;k<strlen(sub);k++) {
                    if(str[i][a] == sub[k]){
                        count[i]++;
                        a++;
                    }
                }
            }
        }

    }
    for(i=0;i<n;i++) {
        if((count[i]+1) % strlen(sub) == 0 && count[i] != 0) {
            total++;
        }
    }
    return total;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi Kuis3 Prosedur Fungsi Bahagia (PROFUN12) dalam mata kuliah Alpro 1
 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/