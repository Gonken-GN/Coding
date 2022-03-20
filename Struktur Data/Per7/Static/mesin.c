#include "header.h"

void createEmpty(queue *Q)
{
    (*Q).first = -1;
    (*Q).last = -1;
}
int isEmpty(queue Q){
    int hasil = 0;
    if(Q.first == -1){
        hasil = 1;
    }
    return hasil;
}
int isFull(queue Q){
    int hasil = 0;
    if(Q.last == 9){
        hasil = 1;
    }
    return hasil;
}
void add(char nim[], char nama[], float nilai, queue *Q){
    if(isEmpty(*Q) == 1){
        (*Q).first = 0;
        (*Q).last =0;
        strcpy((*Q).data[0].nama, nama);
        strcpy((*Q).data[0].nim, nim);
        (*Q).data[0].nilai = nilai;
    }else{
        if(isFull(*Q) != 1){
            (*Q).last++;
            strcpy((*Q).data[(*Q).last].nama, nama);
            strcpy((*Q).data[(*Q).last].nim, nim);
            (*Q).data[(*Q).last].nilai = nilai;
        }
    }
}
void addpri(char nim[], char nama[], float nilai, queue *Q, int indeks){
    if(isEmpty(*Q) == 1){
        (*Q).first = 0;
        (*Q).last = 0;
        strcpy((*Q).data[0].nama, nama);
        strcpy((*Q).data[0].nim, nim);
        (*Q).data[0].nilai = nilai;
    }
}
void del(queue *Q){
    if((*Q).last == 0){
        (*Q).last = -1;
        (*Q).first = -1;
    }else{
        int i;
        for(i=(*Q).first+1;i<=(*Q).last;i++){
            strcpy((*Q).data[i-1].nim, (*Q).data[i].nim);
            strcpy((*Q).data[i-1].nama, (*Q).data[i].nama);
            (*Q).data[i-1].nilai = (*Q).data[i].nilai;
        }
        (*Q).last--;
    }
}
void print(queue Q){
    if(Q.first != -1){
        int i;
        for(i=0;i<=Q.last;i++){
            printf("%s %s %0.1f\n", Q.data[i].nim ,Q.data[i].nama, Q.data[i].nilai);
        }
    }else printf("Queue Kosong\n");
}