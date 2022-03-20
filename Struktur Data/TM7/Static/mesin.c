#include "header.h"

void createEmpty(queue *Q)
{
    //inisialisasi
    (*Q).first = -1;
    (*Q).last = -1;
}
int isEmpty(queue Q){
    int hasil = 0;
    //jika queue masih kosong
    if(Q.first == -1){
        hasil = 1;
    }
    return hasil;
}
int isFull(queue Q){
    int hasil = 0;
    //jika isi queue telah penuh
    if(Q.last == 9){
        hasil = 1;
    }
    return hasil;
}
void add(char nim[], char nama[], queue *Q){
    //jika queue kosong
    if(isEmpty(*Q) == 1){
        (*Q).first = 0;
        (*Q).last =0;
        strcpy((*Q).data[0].nama, nama);
        strcpy((*Q).data[0].nim, nim);
    }else{
        //selama queue tidak penuh
        if(isFull(*Q) != 1){
            (*Q).last++;
            //menambahkan isi queue dari akhir indeks
            strcpy((*Q).data[(*Q).last].nama, nama);
            strcpy((*Q).data[(*Q).last].nim, nim);
        }
    }
}
void addpri(char nim[], char nama[], queue *Q, int indeks){
    int i;
    //jika queue kosong
    if(isEmpty(*Q) == 1){
        (*Q).first = 0;
        (*Q).last = 0;
        strcpy((*Q).data[0].nama, nama);
        strcpy((*Q).data[0].nim, nim);
    }else{
        //selama stack tidak penuh
        if(isFull(*Q) != 1){
            //jika indeks yg diinput lebih besar dari jumlah isi queue
            if(indeks-1 > (*Q).last){
                //menambahkan jumlah maksimum queue lalu masukkan isi input
                (*Q).last++;
                strcpy((*Q).data[(*Q).last].nama, nama);
                strcpy((*Q).data[(*Q).last].nim, nim);
                //jika indeks yg diinput merupakan indeks pertama
            }else if((indeks == (*Q).first) || (indeks == 1)){
                (*Q).last++;
                //maka geser isi queue sebanyak satu
                for(i=(*Q).last;i>=0;i--){
                   strcpy((*Q).data[i].nim, (*Q).data[i-1].nim);
                    strcpy((*Q).data[i].nama, (*Q).data[i-1].nama);
                }
                //lalu masukkan input ke indeks 0
                strcpy((*Q).data[0].nama, nama);
                strcpy((*Q).data[0].nim, nim);
            }else{
                (*Q).last++;
                //geser isi queue
                for(i=(*Q).last;i>=indeks-1;i--){
                    strcpy((*Q).data[i].nim, (*Q).data[i-1].nim);
                    strcpy((*Q).data[i].nama, (*Q).data[i-1].nama);
                }
                strcpy((*Q).data[indeks-1].nama, nama);
                strcpy((*Q).data[indeks-1].nim, nim);
            }
        }
    }
}
void del(queue *Q){
    //jika isi queue kosong
    if((*Q).last == 0){
        (*Q).last = -1;
        (*Q).first = -1;
    }else{
        int i;
        for(i=(*Q).first+1;i<=(*Q).last;i++){
            strcpy((*Q).data[i-1].nim, (*Q).data[i].nim);
            strcpy((*Q).data[i-1].nama, (*Q).data[i].nama);
        }
        (*Q).last--;
    }
}
void print1(queue Q){
    if(Q.first != -1){
        printf("Queue 1\n");
        int i;
        for(i=0;i<=Q.last;i++){
            printf("%s %s\n", Q.data[i].nama ,Q.data[i].nim);
        }
        printf("******************\n");
    }else printf("Queue Kosong\n");
}
void print2(queue Q){
    if(Q.first != -1){
        printf("Queue 2\n");
        int i;
        for(i=0;i<=Q.last;i++){
            printf("%s %s\n", Q.data[i].nama ,Q.data[i].nim);
        }
        printf("******************\n");
    }else printf("Queue Kosong\n");
}