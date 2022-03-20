#include "header.h"
void createEmpty(stack *S){
    (*S).top = NULL;
}
int isEmpty(stack S){
    int hasil = 0;
    if(S.top == NULL){
        hasil = 1;
    }
    return hasil;
}
int countElement(stack S){
    int hasil = 0;
    if(S.top != NULL){
        elemen* bantu = S.top;
        while (bantu != NULL){
            hasil++;
            bantu = bantu->next;
        }
        
    }
    return hasil;
}
void push(char nim[], char nama[], float nilai, stack *S){
    elemen* baru;
    baru = (elemen *) malloc(sizeof(elemen));
    strcpy(baru->kontainer.nama, nama);
    strcpy(baru->kontainer.nim, nim);
    baru->kontainer.nilai = nilai;
    if((*S).top == NULL){
        baru->next = NULL;
    }else{
        baru->next = (*S).top;
    }
    (*S).top = baru;
    baru = NULL;
}
void pop(stack *S){
    if((*S).top != NULL){
        elemen *hapus = (*S).top;
        if(countElement(*S) == 1){
            (*S).top = NULL;
        }else{
            (*S).top = (*S).top->next;
        }
        hapus->next = NULL;
        free(hapus);
    }
}
void printelemen(stack S){
    if(S.top != NULL){
        elemen* bantu = S.top;
        while(bantu != NULL){
            printf("NIM: %s\n", bantu->kontainer.nim);
            printf("Nama: %s\n", bantu->kontainer.nama);
            printf("Nilai: %0.1f\n", bantu->kontainer.nilai);
            bantu = bantu->next;
            printf("\n");
        }
        
    }else{
        printf("Stack kosong\n");
    }
}