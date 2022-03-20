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
void push(char nim[], char nama[], stack *S){
    if(isfull(*S) == 1){
        printf("Stack sudah penuh\n");
    }else{
        if(isEmpty(*S) == 1){
            (*S).top = 0;
            strcpy((*S).data[0].nama, nama);
            strcpy((*S).data[0].nim, nim);
        }else{
            (*S).top++;
            strcpy((*S).data[(*S).top].nama, nama);
            strcpy((*S).data[(*S).top].nim, nim);
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
        int iterator = 1;
        for(i=S.top;i>=0;i--){
            printf("%d. %s\n", iterator,S.data[i].nim);
            iterator++;
        }
    }else{
        printf("- Stack Kosong\n");
    }
}
void geser(stack *S, stack *W){
    int i;
    if((*S).top != -1){
        for(i=0;i<(*S).top;i++){
           if(i == (*S).top - 1){
               push((*S).data[i].nim, (*S).data[i].nama, W);
               //pop(S);
           }
        }
    }
}