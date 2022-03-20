#include "header.h" //library header
//membuat list
void createList(list *L){
    (*L).first = NULL;
}
//menghitung elemen pada list
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
//addfirst
void addFirst(char namafood[], int harga, list *L){
    elemen* baru;
    baru = (elemen*) malloc (sizeof (elemen));
    strcpy(baru->kontainer.namafood, namafood);
    baru->kontainer.harga=harga;
    if((*L).first == NULL){
        baru->next = NULL;
    }else{
        baru->next = (*L).first;
    }
    (*L).first = baru;
    baru = NULL;
}
//addafter
void addAfter(elemen* prev, char namafood[], int harga, list *L){
    elemen* baru;
    baru = (elemen*) malloc (sizeof(elemen));
    strcpy(baru->kontainer.namafood, namafood);
    baru->kontainer.harga=harga;
    if(prev->next == NULL){
        baru->next = NULL;
    }else{
        baru->next = prev->next;
    }
    prev->next = baru;
    baru = NULL;
}
//addlast
void addLast(char namafood[], int harga, list *L){
    if((*L).first == NULL){
        addFirst(namafood, harga, L);
    }else{
        elemen* prev = (*L).first;
        while(prev->next != NULL){
            prev = prev->next;
        }
        addAfter(prev, namafood, harga, L);
    }
}
//delfirst
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
//delafter
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
//dellast
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
//print
void printElement(list L){
    if(L.first != NULL){
        //jika list tidak kosong maka inisialisasi
        elemen* tunjuk = L.first;
        int i = 1;
        while(tunjuk != NULL){
            printf("%s ", tunjuk->kontainer.namafood);
            printf("%d\n", tunjuk->kontainer.harga);
            //iterasi
            tunjuk = tunjuk->next;
            i = i + 1;
        }
    }else{
        printf("list kosong\n");
    }
}
//delall
void delAll(list *L){
    if(countElement(*L) != 0){
        int i;
        for(i=countElement(*L);i>=1;i--){
            delLast(L);    
        }
    }
}

//prosedur tukar
void proctukar(list *L, list *M, char tfood1[], char tfood2[]){

    int i, j, k;
    int isave, jsave;

    int tempharga1;
    int tempharga2;

    if((*L).first != NULL){

        elemen* tunjuk;
        elemen* tunjuk2;
        elemen* bantutunjuk;
        tunjuk = (*L).first;

        i=0;
        isave=0;
        jsave=0;
        while(tunjuk != NULL){
            if(strcmp(tunjuk->kontainer.namafood, tfood1)==0){
                tempharga1=tunjuk->kontainer.harga;
                isave=i;

                if(isave==0){
                    delFirst(L);
                }else{
                    bantutunjuk=(*L).first;
                    for(k=0; k<isave; k++){
                        if(k==isave-1){
                            delAfter(bantutunjuk, L);
                        }
                        bantutunjuk=bantutunjuk->next;
                    }
                }
                
                if((*M).first != NULL){
                    j=0;
                    tunjuk2 = (*M).first;
                    while(tunjuk2 != NULL){
                        if(strcmp(tunjuk2->kontainer.namafood, tfood2)==0){
                            tempharga2=tunjuk2->kontainer.harga;
                            jsave=j;

                            if(jsave==0){
                                delFirst(M);
                            }else{
                                bantutunjuk=(*M).first;
                                for(k=0; k<jsave; k++){
                                    if(k==jsave-1){
                                        delAfter(bantutunjuk, M);
                                    }
                                    bantutunjuk=bantutunjuk->next;
                                }
                            }
                            
                            addLast(tfood1, tempharga1, M);
                            addLast(tfood2, tempharga2, L);
                        }
                        tunjuk2 = tunjuk2->next;
                        j++;
                    }
                }
            }
            tunjuk = tunjuk->next;
            i++;
        }
    }
    if((*M).first != NULL){

        elemen* tunjuk;
        elemen* tunjuk2;
        elemen* bantutunjuk;
        tunjuk = (*M).first;

        i=0;
        isave=0;
        jsave=0;
        while(tunjuk != NULL){
            if(strcmp(tunjuk->kontainer.namafood, tfood1)==0){
                tempharga1=tunjuk->kontainer.harga;
                isave=i;
                
                if(isave==0){
                    delFirst(M);
                }else{
                    bantutunjuk=(*M).first;
                    for(k=0; k<isave; k++){
                        if(k==isave-1){
                            delAfter(bantutunjuk, M);
                        }
                        bantutunjuk=bantutunjuk->next;
                    }
                }

                if((*L).first != NULL){
                    
                    j=0;
                    tunjuk2 = (*L).first;
                    while(tunjuk2 != NULL){
                        if(strcmp(tunjuk2->kontainer.namafood, tfood2)==0){
                            tempharga2=tunjuk2->kontainer.harga;
                            jsave=j;

                            if(jsave==0){
                                delFirst(L);
                            }else{
                                bantutunjuk=(*L).first;
                                for(k=0; k<jsave; k++){
                                    if(k==jsave-1){
                                        delAfter(bantutunjuk, L);
                                    }
                                    bantutunjuk=bantutunjuk->next;
                                }
                            }
                            addLast(tfood1, tempharga1, L);
                            addLast(tfood2, tempharga2, M);
                        }
                        tunjuk2 = tunjuk2->next;
                        j++;
                    }
                }
            }
            tunjuk = tunjuk->next;
            i++;
        }
    }

}