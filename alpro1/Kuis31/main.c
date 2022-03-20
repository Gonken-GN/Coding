#include "header.h"
int main (){
    int i, n;
    scanf("%d", &n);
    char str[n][50];
    for(i=0;i<n;i++){
        scanf("%s", str[i]);
    }
    int m;
    scanf("%d", &m);
    char str2[m][50];
    for(i=0;i<m;i++){
        scanf("%s", str2[i]);
    }
    char sub[50];
    scanf("%s", sub);
    int tot1, tot2;
    tot1 = cek(n, str, sub);
    tot2 = cek(m, str2, sub);
    if(tot1 > tot2) {
        printf("%d\n", tot1);
    } else{
        printf("%d\n", tot2);
    }

    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi Kuis3 Prosedur Fungsi Bahagia (PROFUN12) dalam mata kuliah Alpro 1
 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/