#include "header.h"
void createList(list *L){
    (*L).first = NULL;
}
int countElement(list L){
    int hasil = 0;
    if(L.first != NULL){
        elemen* tunjuk;
        tunjuk = L.first;
        while(tunjuk != NULL){
            hasil+=1;
            tunjuk = tunjuk->next;
        }
    }
    return hasil;
}
void addFirst(char nama[], int harga, list *L){
    elemen* baru;
    baru = (elemen*) malloc (sizeof (elemen));
    strcpy(baru->kontainer.nama, nama);
    baru->kontainer.harga = harga;
    if((*L).first == NULL){
        baru->next = NULL;
    }else{
        baru->next = (*L).first;
    }
    (*L).first = baru;
    baru = NULL;
}
void addAfter(elemen* prev, char nama[], int harga, list *L){
    elemen* baru;
    baru = (elemen*) malloc (sizeof(elemen));
     baru->kontainer.harga = harga;
    strcpy(baru->kontainer.nama, nama);
    if(prev->next == NULL){
        baru->next = NULL;
    }else{
        baru->next = prev->next;
    }
    prev->next = baru;
    baru = NULL;
}
void addLast(char nama[], int harga, list *L){
    if((*L).first == NULL){
        addFirst(nama, harga, L);
    }else{
        elemen* prev = (*L).first;
        while(prev->next != NULL){
            prev = prev->next;
        }
        addAfter(prev, nama, harga, L);
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
            hapus->next =NULL;
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
            while(last->next != NULL){
                prev = last;
                last = last->next;
            }
            delAfter(prev, L);
        }
    }
}
void printElement(list L){
    if(L.first != NULL){
        //jika list tidak kosong maka inisialisasi
        elemen* tunjuk = L.first;
        int i = 1;
        while(tunjuk != NULL){
            printf("%s %d\n", tunjuk->kontainer.nama, tunjuk->kontainer.harga);
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
        for(i=countElement(*L);i>=1;i--){
            delLast(L);    
        }
    }
}
void tukar(char nama1[], char nama2[], list *L, list *M){
    elemen* tunjuk = (*L).first;
    elemen* tunjuk2 = (*M).first;
    int i = 1;
    if((*L).first != NULL){
        while(tunjuk != NULL){
            if(strcmp(tunjuk->kontainer.nama, nama1) == 0){
                addLast(tunjuk->kontainer.nama, tunjuk->kontainer.harga, M);
                delLast(L);
            }else if(strcmp((*L).first->kontainer.nama, nama1) == 0){
                addLast((*L).first->kontainer.nama, (*L).first->kontainer.harga, M);
                delFirst(L);
            }
            if((*M).first != NULL){
                while(tunjuk2 != NULL){
                    if(strcmp(tunjuk2->kontainer.nama, nama2) == 0){
                        addLast(tunjuk2->kontainer.nama, tunjuk2->kontainer.harga, L);
                        delLast(M);
                    }else if(strcmp((*M).first->kontainer.nama, nama2) == 0){
                        addLast((*M).first->kontainer.nama, (*M).first->kontainer.harga, L);
                    }
                }
            }
            tunjuk = tunjuk->next;
            i++;
        }
    }
}