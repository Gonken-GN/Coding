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
void push(char nim[], char nama[], stack *S){
    elemen* baru;
    baru = (elemen *) malloc(sizeof(elemen));
    strcpy(baru->kontainer.nama, nama);
    strcpy(baru->kontainer.nim, nim);
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
        int i = 1;
        while(bantu != NULL){
            printf("%d. %s\n", i,bantu->kontainer.nim);
            i++;
            bantu = bantu->next;
        }
    }else{
        printf("- Stack Kosong\n");
    }
}
void geser(stack *S, stack *W){
    if((*S).top != NULL){
        elemen* bantu = (*S).top;
        elemen* prev = NULL;
        while(bantu != NULL){
            if(prev == NULL){
                push(bantu->kontainer.nim, bantu->kontainer.nama, W);
                pop(S);
            }
            prev = bantu;
            bantu = bantu->next;
        }
    }
}