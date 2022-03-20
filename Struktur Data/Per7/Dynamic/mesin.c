#include "header.h"

void createEmpty(queue *Q)
{
    (*Q).first = NULL;
    (*Q).last = NULL;
}
int isEmpty(queue Q){
    int hasil = 0;
    if(Q.first == NULL){
        hasil = 1;
    }
    return hasil;
}
int countelemen(queue Q){
    int hasil = 0;
    if(Q.first != NULL){
        elemen *bantu = Q.first;
        while(bantu != NULL){
            hasil++;
            bantu = bantu->next;
        }
    }
    return hasil;
}
void add(char nim[], char nama[], float nilai, queue *Q){
    elemen* baru;
    baru = (elemen *) malloc (sizeof(elemen));
    strcpy(baru->container.nama, nama);
    strcpy(baru->container.nim, nim);
    baru->container.nilai = nilai;
    baru->next = NULL;
    if((*Q).first == NULL){
        (*Q).first = baru;
    }else{
        (*Q).last->next = baru;
    }
    (*Q).last = baru;
    baru = NULL;
}
void addP(char nim[], char nama[], float nilai, queue *Q, int indeks){
    elemen* baru;
    baru = (elemen *) malloc (sizeof(elemen));
    strcpy(baru->container.nama, nama);
    strcpy(baru->container.nim, nim);
    baru->container.nilai = nilai;
    baru->next = NULL;
    if((*Q).first == NULL){
        (*Q).first = baru;
        (*Q).last = baru;
    }else{
        if(indeks > countelemen(*Q)){
            (*Q).last->next = baru;
            (*Q).last = baru;
        }else if(indeks == 1){
            baru->next = (*Q).first;
            (*Q).first = baru;
        }else{
            elemen* bantu = (*Q).first;
            elemen* prev = NULL;
            elemen* simpan, *simpan2;
            while(bantu != NULL){
                if(strcmp(nim, bantu->container.nim) > 0){
                    simpan = prev;
                    simpan2 = bantu;
                }
                prev = bantu;
                bantu = bantu->next;
            }
            baru->next = simpan2->next;
                    simpan2->next =baru;
        }
    }
    baru = NULL;
}
void del(queue *Q){
    if((*Q).first != NULL){
        elemen *hapus =(*Q).first;
        if(countelemen(*Q) == 1){
            (*Q).first = NULL;
            (*Q).last = NULL;
        }else{
            (*Q).first = (*Q).first->next;
            hapus->next = NULL;
        }
        free(hapus);
    }
}
void print(queue Q){
    if(Q.first != NULL){
        elemen* bantu = Q.first;
        while(bantu != NULL){
            printf("%s %s %0.1f\n", bantu->container.nim, bantu->container.nama, bantu->container.nilai);
            bantu = bantu->next;
        }
    }else printf("Queue Kosong\n");
}