#include "header.h"

int main (){
    list L;
    createlist(&L);
    int i;
    int n;
    scanf("%d", &n);
    int iterator = 0;
    int intergen[n];
    int temp[n];
    mahasiswa contoh[n];
    for(i=0;i<n;i++){
        int temu = 0;
        intergen[i] = 0;
        scanf("%s", &contoh[i].nama);
        for(int j = 0;j<strlen(contoh[i].nama);j++){
            if((contoh[i].nama[j] == 'a') || (contoh[i].nama[j] == 'A')){
                intergen[i]++;
            }
        }
        if(i==0){
            addfirstB(contoh[i].nama, intergen[i], &L);
        }
        if(L.first != NULL){
            eBaris *bantu = L.first;
            while((bantu != NULL) && (temu != 1)){
                if(bantu->kontainer.jumlah == intergen[i]){
                    addlastK(contoh[i].nama, bantu);
                    temu = 1;
                }
                bantu = bantu->next;
            }
        }
        if(temu == 0){
            addlastB(contoh[i].nama, intergen[i], &L);
            eBaris *bantu2 = L.first;
            while(bantu2 != NULL){
                if(bantu2->kontainer.jumlah == intergen[i]){
                    addlastK(contoh[i].nama, bantu2);
                }
                bantu2 = bantu2->next;
            }
        }
    }

    printelement(L);
    return 0;
}