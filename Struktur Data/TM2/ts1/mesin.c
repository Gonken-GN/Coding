#include"header.h"


void createList(list *L){
    (*L).first = NULL;
}

int countElement(list L){
    int hasil = 0;
    if(L.first != NULL){
        // list tidak boleh kosong

        elemen* tunjuk;

        // inisiasi
        tunjuk = L.first;
        while (tunjuk != NULL)
        {
            /* code */
            hasil = hasil +1;
            tunjuk = tunjuk->next;
        }
    }
    return hasil;
}

void addFirst(char nama[], char rumus[], float konsentrasi, list *L){
    elemen* baru;
    baru = (elemen*)malloc(sizeof (elemen));
    strcpy(baru->kontainer.nama, nama);
    strcpy(baru->kontainer.rumus, rumus);
    baru->kontainer.konsentrasi = konsentrasi;

    if((*L).first == NULL){
        baru->next = NULL;
    }else{
        baru->next = (*L).first;
    }
    (*L).first = baru;
    baru = NULL;
}

void addAfter(elemen* prev, char nama[], char rumus[], float konsentrasi, list *L){

    elemen* baru;
    baru = (elemen*)malloc(sizeof(elemen));
     baru = (elemen*)malloc(sizeof (elemen));
    strcpy(baru->kontainer.nama, nama);
    strcpy(baru->kontainer.rumus, rumus);
    baru->kontainer.konsentrasi = konsentrasi;
    if(prev->next == NULL){
        baru->next = NULL;
    }else{
        baru->next = prev->next;
    }
    prev->next = baru;
    baru = NULL;
}

void addLast(char nama[], char rumus[], float konsentrasi, list *L){
    if((*L).first == NULL){
        // jika list adalah list kosong
        addFirst(nama, rumus, konsentrasi, L);
    }else{
        // jika list tidak kosong
        // mencari elemen terakhir list
        elemen* prev = (*L).first;
        while (prev->next != NULL)
        {
            /* code */
            prev = prev->next;
        }
        addAfter(prev, nama, rumus, konsentrasi, L);
    }
}

void delFirst(list *L){
    if((*L).first != NULL){
        elemen* hapus = (*L).first;
        if(countElement(*L) == 1){
            (*L).first = NULL;
        }else{
            (*L).first = (*L).first->next;
            hapus->next = NULL;
        }
        free(hapus);
    }
}

void delAfter(elemen* prev, list *L){
    elemen* hapus = prev->next;
    if(hapus != NULL){
        if(hapus->next == NULL){
            prev->next = NULL;
        }else{
            prev->next = hapus->next;
            hapus->next = NULL;
        }
        free(hapus);
    }
}

void delLast(list *L){
    if((*L).first != NULL){
        if(countElement(*L) == 1){
            delFirst(L);
        }else{
            elemen* last = (*L).first;
            elemen* prev;
            while (last->next != NULL)
            {
                /* code */
                prev = last;
                last = last->next;
            }
            delAfter(prev, L);
        }
    }
}

void printElement(list L){
    if(L.first != NULL){
        elemen* tunjuk = L.first;
        int i =1;
        while (tunjuk != NULL)
        {
            /* code */
            printf("%s %s %.2f\n", tunjuk->kontainer.nama, tunjuk->kontainer.rumus, tunjuk->kontainer.konsentrasi);
            tunjuk = tunjuk->next;
            i++;
        }
    }else{
        printf("List kosong\n");
    }
}

void delAll(list *L){
    if(countElement(*L) != 0){
        int i;
        for(i=countElement(*L); i>= 1; i--){
            delLast(L);
        }
    }
}