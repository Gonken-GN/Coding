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
void addFirst(char nama[], int harga, float rating, list *L){
    elemen* baru;
    baru = (elemen*) malloc (sizeof (elemen));
    baru->kontainer.harga = harga;
    strcpy(baru->kontainer.nama, nama);
    baru->kontainer.rating = rating;
    if((*L).first == NULL){
        baru->next = NULL;
    }else{
        baru->next = (*L).first;
    }
    (*L).first = baru;
    baru = NULL;
}
void addAfter(elemen* prev, char nama[], int harga, float rating, list *L){
    elemen* baru;
    baru = (elemen*) malloc (sizeof(elemen));
    baru->kontainer.harga = harga;
    strcpy(baru->kontainer.nama, nama);
    baru->kontainer.rating = rating;
    if(prev->next == NULL){
        baru->next = NULL;
    }else{
        baru->next = prev->next;
    }
    prev->next = baru;
    baru = NULL;
}
void addLast(char nama[], int harga, float rating, list *L){
    if((*L).first == NULL){
        addFirst(nama, harga, rating, L);
    }else{
        elemen* prev = (*L).first;
        while(prev->next != NULL){
            prev = prev->next;
        }
        addAfter(prev, nama, harga, rating, L);
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
        elemen* sementara = L.first;
        int i = 1;
        float max = 0;
        while(tunjuk != NULL){
            printf("%0.1f ", tunjuk->next->kontainer.rating);
            if(tunjuk->kontainer.rating > tunjuk->next->kontainer.rating){
                printf("=%0.1f= ", tunjuk->kontainer.rating);
                max = tunjuk->kontainer.rating;
            }else{
                printf("-%0.1f-", tunjuk->next->kontainer.rating);
            }
            printf("%s %d %0.1f\n", tunjuk->kontainer.nama, tunjuk->kontainer.harga, tunjuk->kontainer.rating);
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
void sort(int banyak, menu data[], list *L){
    int i, swap;
    int temp2;
    char temp3[100];
    float temp;
    elemen* last = (*L).first;
    elemen* prev = (*L).first;
    do{
        swap = 0;
        for(i=0;i<banyak-1;i++){
            
            if(strcmp(status, "desc") == 0){
                if(data[i].rating > data[i+1].rating){
                    temp = data[i].rating;
                    data[i].rating = data[i+1].rating;
                    data[i+1].rating = temp;
                    temp2 = data[i].harga;
                    data[i].harga = data[i+1].harga;
                    data[i+1].harga = temp2;
                    strcpy(temp3, data[i].nama);
                    strcpy(data[i].nama, data[i+1].nama);
                    strcpy(data[i+1].nama, temp3);
                    prev = last;
                    last = last->next;
                    last->next = prev;
                    swap = 1;
                }
            }else if(strcmp(status, "asc") == 0){
                if(data[i].rating < data[i+1].rating){
                    
                    
                    swap = 1;
                }
            }
        }
    }while(swap == 1);
}
// void jumlah(int banyak, menu data[], list *K){
//     printf("%d", data[banyak].harga);
//     int i = banyak;
//     while(data[i].harga < uang){
//         addLast(data[i].nama, data[i].harga, data[i].rating, K);
//         printf("%d", data[i].harga);
//         uang -= data[i].harga;
//         i--;
//     }
// }
void sorting(list *L, menu data[], int banyak){
    int i  =0;
    for(i=0;i<banyak;i++){
        if(i==0){
            addFirst(data[i].nama, data[i].harga, data[i].rating, L);
        }else{
            if(data[i].rating < data[i+1].rating){
                addFirst(data[i].nama, data[i].harga, data[i].rating, L);
            }else{
   
                elemen* prev = (*L).first;
                elemen* sementara = (*L).first;
                while((prev->next != NULL) && (data[i].rating > sementara->kontainer.rating)){
                    sementara = prev;
                    prev = prev->next;
                }
                addAfter(sementara, data[i].nama, data[i].harga, data[i].rating, L);
            }
        }
            // if(data[i].rating < (*L).first->kontainer.rating){
            //     addFirst(data[i].nama, data[i].harga, data[i].rating, L);

            // }else{
            //     elemen* last = (*L).first;
            //     elemen* prev = last;
            //     while((last->next != NULL) && (data[i].rating > prev->kontainer.rating)){
            //         prev = last;
            //         last = last->next;
            //     }
            //     addAfter(prev, data[i].nama, data[i].harga, data[i].rating, L);
            // }
        
    }
}