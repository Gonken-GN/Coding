#include "header.h"

int main (){
    list L;
    createlist(&L);
    int n;
    scanf("%d", &n);
    mahasiswa contoh[n];
    int pembagi[10], iterator = 0, i , j;
    for(j=2;j<10;j++){
            pembagi[iterator] = j;
            iterator++;
    }
    for(i=0;i<n;i++){
        scanf("%d", &contoh[i].nim);
        if(contoh[i].nim == 1){
            addfirstB(contoh[i].nim, &L);
        }
    }
    for(i=2;i<10;i++){
        int temu = 0;
        for(j=0;j<n;j++){
            if((contoh[j].nim % i == 0) && (temu == 0)){
                temu = 1;
                addlastB(i, &L);
            }
        }
    }
    kolom(&L, contoh, n);
    printelement(L);
    return 0;
}