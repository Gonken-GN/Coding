#include "head.h" //library head.h

int main(){

    //deklarasi variabel lokal
    int i;

    //meminta masukkan banyak elemen
    scanf("%d", &banyak);
    temp sem[banyak]; //deklarasi tipe data terstruktur sementara

    //membuat list L
    list L; 
    createList(&L);

    //meminta masukan user untuk mengisi typedef temp
    for(i=0; i<banyak; i++){
        scanf("%s", &sem[i].tempkata);
        addLast(sem[i].tempkata, &L);
    }

    pola(L); //cetak

    //selesai
    return 0;
}

