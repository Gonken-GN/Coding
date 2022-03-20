#include "header.h"
void createlist(list *L){
    (*L).first = NULL;
}
int countelementB(list L){
    int hasil = 0;
    if(L.first != NULL){
        eBaris *bantu;
        bantu = L.first;
        while(bantu != NULL){
            hasil++;
            bantu = bantu->next;
        }
    }
    return hasil;
}
int countelementK(eBaris L){
    int hasil = 0;
    if(L.col != NULL){
        eKolom *bantu;
        bantu = L.col;
        while(bantu != NULL){
            hasil++;
            bantu = bantu->next_kol;
        }
    }
}
void addfirstB(char nama[], int jumlah, list *L){
    eBaris* baru;
    baru = (eBaris *) malloc (sizeof (eBaris));
    baru->kontainer.jumlah = jumlah;
    strcpy(baru->kontainer.nama, nama);
    baru->col = NULL;
    if((*L).first == NULL){
        baru->next = NULL;
    }else{
        baru->next = (*L).first;
    }
    (*L).first = baru;
    baru = NULL;
}
void addfirstK(char kode[], eBaris *L){
    eKolom* baru;
    baru = (eKolom *) malloc (sizeof (eKolom));
    strcpy(baru->kontainer_kol.kode, kode);
    if((*L).col == NULL){
        baru->next_kol = NULL;
    }else{
        baru->next_kol = (*L).col;
    }
    (*L).col = baru;
    baru = NULL;
}
void addafterB(eBaris* prev, char nama[], int jumlah){
    eBaris* baru;
    baru = (eBaris *) malloc (sizeof(eBaris));
    strcpy(baru->kontainer.nama, nama);
    baru->kontainer.jumlah = jumlah;
    baru->col = NULL;
    if(prev->next == NULL){
        baru->next = NULL;
    }else{
        baru->next = prev->next;
    }
    prev->next =baru;
    baru = NULL;
}
void addafterK(eKolom* prev,char kode[]){
    eKolom* baru;
    baru = (eKolom *) malloc (sizeof(eKolom));
    strcpy(baru->kontainer_kol.kode, kode);
    if(prev->next_kol == NULL){
        baru->next_kol = NULL;
    }else{
        baru->next_kol = prev->next_kol;
    }
    prev->next_kol = baru;
    baru = NULL;
}
void addlastB(char nama[], int jumlah, list *L){
    if((*L).first == NULL){
        addfirstB(nama, jumlah, L);
    }else{
        eBaris *last = (*L).first;
        while(last->next != NULL){
            last = last->next;
        }
        addafterB(last, nama, jumlah);
    }
}
void addlastK(char kode[], eBaris *L){
    if((*L).col ==NULL){
        addfirstK(kode, L);
    }else{
        eKolom *last = (*L).col;
        while(last->next_kol != NULL){
            last = last->next_kol;
        }
        addafterK(last, kode);
    }
}
void delfirstK(eBaris *L){
    if((*L).col != NULL){
        eKolom* hapus = (*L).col;
        if(countelementK(*L) == 1){
            (*L).col = NULL;
        }else{
            (*L).col = (*L).col->next_kol;
            hapus->next_kol = NULL;
        }
        free(hapus);
    }
}
void delafterK(eKolom* prev){
    eKolom* hapus = prev->next_kol;
    if(hapus != NULL){
        if(hapus->next_kol == NULL){
            prev->next_kol = NULL;
        }else{
            prev->next_kol = hapus->next_kol;
            hapus->next_kol = NULL;
        }
    }
    free(hapus);
}
void dellastK(eBaris *L){
    if((*L).col != NULL){
        if(countelementK(*L) == 1){
            delfirstK(L);
        }else{
            eKolom *last = (*L).col;
            eKolom *before_last;
            while(last->next_kol != NULL){
                before_last = last;
                last = last->next_kol;
            }
            delafterK(before_last);
        }
    }
}
void delallK(eBaris *L){
    if(countelementK(*L) != 0){
        int i;
        for(i=countelementK(*L);i>=1;i--){
            dellastK(L);
        }
    }
}
void delfirstB(list *L){
    if((*L).first != NULL){
        eBaris *hapus = (*L).first;
        if(hapus->col != NULL){
            delallK(hapus);
        }
        if(countelementB(*L) == 1){
            (*L).first = NULL;
        }else{
            (*L).first =(*L).first->next;
        }
        hapus->next = NULL;
        free(hapus);
    }
}
void delafterB(eBaris* prev){
    if(prev != NULL){
        eBaris *hapus = prev->next;
        if(hapus != NULL){
            if(hapus->col != NULL){
                delallK(hapus);
            }
            if(hapus->next == NULL){
                prev->next = NULL;
            }else{
                prev->next = hapus->next;
            }
            hapus->next = NULL;
            free(hapus);
        }
    }
}
void dellastB(list *L){
    if((*L).first != NULL){
        if(countelementB(*L) == 1){
            delfirstB(L);
        }else{
            eBaris *last = (*L).first;
            eBaris *before_last;
            while(last->next != NULL){
                before_last = last;
                last = last->next;
            }
            delafterB(before_last);
        }
    }
}
void delallB(list *L){
    if(countelementB(*L) != 0){
        for(int i = countelementB(*L);i>=1;i--){
            dellastB(L);
        }
    }
}
void printelement(list L){
    if(L.first != NULL){
        eBaris* bantu = L.first;
        int i = 1;
        while(bantu != NULL){
            printf("%d\n", bantu->kontainer.jumlah);
            eKolom* eCol = bantu->col;
            while(eCol != NULL){
                printf("-%s\n", eCol->kontainer_kol.kode);
                eCol = eCol->next_kol;
            }
            bantu = bantu->next;
        }
   }else{
       printf("List Kosong\n");
   }
}