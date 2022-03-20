#include "header.h"
int main(){
    list L;
    createList(&L);
    nilaimatkul data[10];
    int i;
    for(i=0;i<6;i++){
        scanf("%s %s %s", &data[i].nama, &data[i].nim, &data[i].nilai);
    }

    int n = 0;
    addFirst(data[n].nim, data[n].nama, data[n].nilai, &L);n++;
    addAfter(L.first, data[n].nim, data[n].nama, data[n].nilai, &L);n++;
    addBefore(L.first->next, data[n].nim, data[n].nama, data[n].nilai, &L);n++;
    printElement(L);
    delAfter(L.first->next->prev, &L);
    addLast(data[n].nim, data[n].nama, data[n].nilai, &L);n++;
    printElement(L);
    delFirst(&L);
    addLast(data[n].nim, data[n].nama, data[n].nilai, &L);n++;
    addAfter(L.first->next, data[n].nim, data[n].nama, data[n].nilai, &L);n++;
    delLast(&L);
    printreverse(L);
    delAll(&L);
    printElement(L);
    return 0;
}