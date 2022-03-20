#include "header.h"
int main()
{
    list L;

    createList(&L);
    int i;
    hp phone[10];
    for(i= 0;i<6;i++){
        scanf("%s %s %s", &phone[i].nama, &phone[i].tipe, &phone[i].jumlah);
    }
    int n = 0;
    addFirst(phone[n].nama, phone[n].tipe, phone[n].jumlah, &L);n++;
    addLast(phone[n].nama, phone[n].tipe, phone[n].jumlah, &L);n++;
    addAfter(L.first, phone[n].nama, phone[n].tipe, phone[n].jumlah, &L);n++;
    printElement(L);
    delAfter(L.data[L.first].next, &L);
    printElement(L);
    addAfter(L.data[L.first].next, phone[n].nama, phone[n].tipe, phone[n].jumlah, &L);n++;
    addLast(phone[n].nama, phone[n].tipe, phone[n].jumlah, &L);n++;
    delFirst(&L);
    printElement(L);
    addFirst(phone[n].nama, phone[n].tipe, phone[n].jumlah, &L);n++;
    delAfter(L.first, &L);
    printreverse(L);
    delAll(&L);
    printElement(L);
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Test Mesin (TM3) dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/