#include "header.h"
void createEmpty(stack *S){
    (*S).top = -1;
}
int isEmpty(stack S){
    int hasil = 0;
    if(S.top == -1){
        hasil = 1;
    }
    return hasil;
}
int isfull(stack S){
    int hasil = 0;
    if(S.top == 9){
        hasil = 1;
    }
    return hasil;
}
void push(char nim[], char nama[], float nilai, stack *S){
    if(isfull(*S) == 1){
        printf("Stack sudah penuh\n");
    }else{
        if(isEmpty(*S) == 1){
            (*S).top = 0;
            strcpy((*S).data[0].nama, nama);
            strcpy((*S).data[0].nim, nim);
            (*S).data[0].nilai = nilai;
        }else{
            (*S).top++;
            strcpy((*S).data[(*S).top].nama, nama);
            strcpy((*S).data[(*S).top].nim, nim);
            (*S).data[(*S).top].nilai = nilai;
        }
    }
}
void pop(stack *S){
   if((*S).top == 0){
       (*S).top = -1;
   }else{
       if((*S).top != -1) (*S).top--;
   }
}
void printelemen(stack S){
    if(S.top != -1){
        int i;
        for(i=S.top;i>=0;i--){
            printf("NIM: %s\n", S.data[i].nim);
            printf("Nama: %s\n", S.data[i].nama);
            printf("Nilai: %0.1f\n", S.data[i].nilai);
            if(i != 0){
                printf("\n");
            }
        }
    }else{
        printf("Stack kosong\n");
    }
}