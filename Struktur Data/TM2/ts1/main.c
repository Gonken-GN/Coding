#include"header.h"

int main(){
    list L;
    createList(&L);
    addFirst("AsamKlorida", "HCL", 0.1, &L);
    addLast("GaramDapur", "NaCl", 0.3, &L);
    addFirst("KaliumHidroksida", "KOH", 0.8, &L);
    printElement(L);
    addAfter(L.first->next, "SodaApi","NaOH",0.05,&L);
    printElement(L);
    delAfter(L.first->next,&L);
    addLast("Asamsulfat","H2SO4",1.0,&L);
    printElement(L);
    delFirst(&L);
    delLast(&L);
    printElement(L);
    delAll(&L);
    printElement(L);
    addLast("CukaDapur","CH3COOH",0.001,&L);
    printElement(L);
    return 0;
}