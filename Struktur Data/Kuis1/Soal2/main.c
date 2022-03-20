#include "header.h"
int main (){
    list L;
    createList(&L);
    int i;
    int n;
    char temp[100];
    tampung2 = 0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%s", &temp);
        addLast(temp, &L);
        tampung2+= strlen(temp);
    }
    //run fungsi untuk menampilkan pola
    coba(L);
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Kuis1 dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/