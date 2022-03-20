#include "header.h"
int main (){
    int i, n, j;//iterator
    scanf("%d", &n);
    char str[n][100];
    int count[n];
    
    for(i=0;i<n;i++){
        scanf("%s", &str[i]);
    }
    spasi(n, str);
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 9 "Bisnis Online Loki" (PR12020) dalam mata kuliah
Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/