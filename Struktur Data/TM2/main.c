#include "header.h"

int main()
{
    list L;
    createList(&L);
    int i;
    kimia senyawa[10];
    for(i=0;i<6;i++){
        scanf("%s %s %s", &senyawa[i].nama, &senyawa[i].rumus, &senyawa[i].konsentrasi);
    }
    i = 0;
    printf("======\n");
    addFirst(senyawa[i].rumus, senyawa[i].nama, senyawa[i].konsentrasi, &L);i++;
    addLast(senyawa[i].rumus, senyawa[i].nama, senyawa[i].konsentrasi, &L);i++;
    addAfter(L.first->next, senyawa[i].rumus, senyawa[i].nama, senyawa[i].konsentrasi, &L);i++;
    printElement(L);
    delFirst(&L);
    addLast(senyawa[i].rumus, senyawa[i].nama, senyawa[i].konsentrasi, &L);i++;

    printElement(L);
    delLast(&L);
    addFirst(senyawa[i].rumus, senyawa[i].nama, senyawa[i].konsentrasi, &L);i++;
    printElement(L);
    delAll(&L);
    printElement(L);
    addLast(senyawa[i].rumus, senyawa[i].nama, senyawa[i].konsentrasi, &L);i++;
    printElement(L);
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tes Mesin (TM) 2 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/