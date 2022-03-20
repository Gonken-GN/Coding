#include "header.h"
int main(){
    list L;
    createList(&L);
    int i;
    temp sepatu[6];
    for(i=0;i<6;i++){
        scanf("%s %s %s", &sepatu[i].nama, &sepatu[i].warna, &sepatu[i].ukuran);
    }
    addFirst(sepatu[0].nama, sepatu[0].warna, sepatu[0].ukuran, &L);
    addFirst(sepatu[1].nama, sepatu[1].warna, sepatu[1].ukuran, &L);
    addLast(sepatu[2].nama, sepatu[2].warna, sepatu[2].ukuran, &L);
    printElement(L);
    delLast(&L);
    addLast(sepatu[3].nama, sepatu[3].warna, sepatu[3].ukuran, &L);
    addAfter(L.first, sepatu[4].nama, sepatu[4].warna, sepatu[4].ukuran, &L);
    delFirst(&L);
    printElement(L);
    addAfter(L.data[L.first].next, sepatu[5].nama, sepatu[5].warna, sepatu[5].ukuran, &L);
    delAfter(L.first, &L);
    printElement(L);
    delAll(&L);
    printElement(L);
    return 0;
}