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
void addFirst(char nim[], list *L){
    elemen* baru;
    baru = (elemen*) malloc (sizeof (elemen));
    strcpy(baru->kontainer.nim, nim);
    if((*L).first == NULL){
        baru->next = NULL;
    }else{
        baru->next = (*L).first;
    }
    (*L).first = baru;
    baru = NULL;
}
void addAfter(elemen* prev, char nim[], char nama[], char nilai[], list *L){
    elemen* baru;
    baru = (elemen*) malloc (sizeof(elemen));
    strcpy(baru->kontainer.nim, nim);
    strcpy(baru->kontainer.nama, nama);
    strcpy(baru->kontainer.nilai, nilai);
    if(prev->next == NULL){
        baru->next = NULL;
    }else{
        baru->next = prev->next;
    }
    prev->next = baru;
    baru = NULL;
}
// void addLast(char nim[], char nama[], char nilai[], list *L){
//     if((*L).first == NULL){
//         addFirst(nim, nama, nilai, L);
//     }else{
//         elemen* prev = (*L).first;
//         while(prev->next != NULL){
//             prev = prev->next;
//         }
//         addAfter(prev, nim, nama, nilai, L);
//     }
// }
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
            printf("%s\n", tunjuk->kontainer.nim);
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
void sort(int banyak, int jumlah[], char str[][100]){
    int i, swap;
    char temp2[100];
    int temp;
    do{
        swap = 0;
        for(i=0;i<banyak-1;i++){
            if(jumlah[i] < jumlah[i+1]){
                temp = jumlah[i];
                jumlah[i] = jumlah[i+1];
                jumlah[i+1] = temp;
                strcpy(temp2, str[i]);
                strcpy(str[i], str[i+1]);
                strcpy(str[i+1], temp2);
                swap = 1;
            }
        }
    }while(swap == 1);
}