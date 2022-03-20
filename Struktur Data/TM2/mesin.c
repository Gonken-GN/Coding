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
void addFirst(char rumus[], char nama[], char konsentrasi[], list *L){
    elemen* baru;
    baru = (elemen*) malloc (sizeof (elemen));
    strcpy(baru->kontainer.nama, nama);
    strcpy(baru->kontainer.rumus, rumus);
    strcpy(baru->kontainer.konsentrasi, konsentrasi);
    if((*L).first == NULL){
        baru->next = NULL;
    }else{ 
        baru->next = (*L).first;
    }
    (*L).first = baru;
    baru = NULL;
}
void addAfter(elemen* prev, char rumus[], char nama[], char konsentrasi[], list *L){
    elemen* baru;
    baru = (elemen*) malloc (sizeof(elemen));
    strcpy(baru->kontainer.rumus, rumus);
    strcpy(baru->kontainer.nama, nama);
    strcpy(baru->kontainer.konsentrasi, konsentrasi);
    if(prev->next == NULL){
        baru->next = NULL;
    }else{
        baru->next = prev->next;
    }
    prev->next = baru;
    baru = NULL;
}
void addLast(char rumus[], char nama[], char konsentrasi[], list *L){
    if((*L).first == NULL){
        addFirst(rumus, nama, konsentrasi, L);
    }else{
        elemen* prev = (*L).first;
        while(prev->next != NULL){
            prev = prev->next;
        }
        addAfter(prev, rumus, nama, konsentrasi, L);
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
            printf("%s", tunjuk->kontainer.nama);
            printf(" %s", tunjuk->kontainer.rumus);
            printf(" %s\n", tunjuk->kontainer.konsentrasi);
            tunjuk = tunjuk->next;
            i++;
        }
        printf("======\n");
    }else{
        printf("list kosong\n");
        printf("======\n");
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
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tes Mesin (TM) 2 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/