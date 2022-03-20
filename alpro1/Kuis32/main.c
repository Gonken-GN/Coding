#include "header.h"
int main (){
    int n, i;
    scanf("%d", &n);
    char str[n][50];
    char str2[n][50];
    char str3[n*2][50];
    int j;
    int b = 0;
    int c = 0;
    for(i=0;i<n;i++){
        scanf("%s", str[i]);
    }
    for(i=0;i<n;i++){
        scanf("%s", str2[i]);
    }

    i = 0;
    while(i < n*2) {
        if(b < n) {
            strcpy(str3[i], str[b]);
            b++;
            i++;
        }
        if(c < n) {
            strcpy(str3[i], str2[c]);
            c++;
            i++;
        }
    }
    int m;
    scanf("%d", &m);
    pola(n*2, str3, m);
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi Kuis3 Prosedur Fungsi Bahagia (PROFUN12) dalam mata kuliah Alpro 1
 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/