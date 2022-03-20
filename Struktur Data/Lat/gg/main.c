#include "header.h"

int main (){
    list L;
    createlist(&L);
    int n;
    scanf("%d", &n);
    mahasiswa contoh[n];
    int temugenap = 0, temuganjil = 0;
    int i, j;
    for(i=0;i<n;i++){
        scanf("%d", &contoh[i].nim);
        if(contoh[i].nim % 2 == 0){
            temugenap = 1;
        }else{
            temuganjil = 1;
        }
    }
    if(temuganjil == 1){
        addlastB(1, &L);
    }if(temugenap == 1){
        addlastB(2, &L);
    }
    for(i=0;i<n;i++){
        if(contoh[i].nim %  2 == 0){
            addlastK(contoh[i].nim, L.first->next);
        }else{
            addlastK(contoh[i].nim, L.first);
        }
    }
    //kolom(&L, contoh, n);
    printelement(L);
    return 0;
}