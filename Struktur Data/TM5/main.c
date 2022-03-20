#include "header.h"

int main (){
    list L;
    createlist(&L);
    int i, n;
    scanf("%d", &n);
    char nama[50];
    char tahun[50];
    char nama2[50];
    for(i=0;i<n;i++){
        scanf("%s %s", &nama, &tahun);
        addlastB(tahun, nama, &L);
        eBaris* baris = kolom(nama, &L);
        if(baris != NULL){
            scanf("%s", &nama2);
            addlastK(nama2, baris);
            scanf("%s", &nama2);
            addfirstK(nama2, baris);
            scanf("%s", &nama2);
            addafterK(baris->col, nama2);
            scanf("%s", &nama2);
            addlastK(nama2, baris);
        }
    }
    sort(n, &L);
    delafterK(L.first->next->col->next_kol);
    dellastB(&L);
    delfirstK(L.first);
    printelement(L);
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Test Mesin 5(TM5) dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/