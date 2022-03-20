#include "header.h"

/*
    Saya Cahya Gumilang 2003128 mengerjakan 
    Kuis1 Strukdat 2021 C1 - (gasta21) Ganda Statis Depan Belakang
    dalam mata kuliah Struktur Data
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin

*/

int main(){
    list L;
    int i, n;
    createList(&L);
    scanf("%d", &n);
    // input kata
    for(i=0;i<n;i++){
        char kata[50];
        scanf("%s", &kata);
        addLast(kata, &L);
    }
    // proses print kata
    printElement(L);
    return 0;

}
