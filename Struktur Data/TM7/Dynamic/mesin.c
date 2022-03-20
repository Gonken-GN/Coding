#include "header.h"

void createEmpty(queue *Q)
{
    //inisialisasi tiap pointer
    (*Q).first = NULL;
    (*Q).last = NULL;
}
int isEmpty(queue Q){
    int hasil = 0;
    //pengecekan apakah queue kosong atau tidak
    if(Q.first == NULL){
        hasil = 1;
    }
    return hasil;
}
int countelemen(queue Q){
    int hasil = 0;
    //jika queue tidak kosong
    if(Q.first != NULL){
        //maka hitung jumlah elemen yang tidak kosong
        elemen *bantu = Q.first;
        while(bantu != NULL){
            hasil++;
            bantu = bantu->next;
        }
    }
    return hasil;
}
void add(char nim[], char nama[], queue *Q){
    //proses mencari alokasi baru untuk dimasukkan kedalam queue
    elemen* baru;
    baru = (elemen *) malloc (sizeof(elemen));
    //proses mengcopy input kedalma queue
    strcpy(baru->container.nama, nama);
    strcpy(baru->container.nim, nim);
    baru->next = NULL;
    //jika queue kosong maka akan menjadi elemen pertama
    if((*Q).first == NULL){
        (*Q).first = baru;
    }else{
        //jika queue tidak kosong maka elemen baru akan menjadi elemen selanjutnya dari elemen pertama
        (*Q).last->next = baru;
    }
    //setiap elemen baru dimasukkan maka akan menjadi elemen terakhir
    (*Q).last = baru;
    baru = NULL;
}
void addP(char nim[], char nama[], queue *Q, int indeks){
    //proses mencari alokasi baru untuk dimasukkan kedalma queue
    elemen* baru;
    baru = (elemen *) malloc (sizeof(elemen));
    //proses mengcopy isi input kedalam queue
    strcpy(baru->container.nama, nama);
    strcpy(baru->container.nim, nim);
    baru->next = NULL;
    //jika queue kosong
    if((*Q).first == NULL){
        (*Q).first = baru;
        (*Q).last = baru;
    }else{
        //jika indeks yg dimasukkan lebih besar dari jumlah elemen yg ada maka akan menjadi elemen terakhir
        if(indeks > countelemen(*Q)){
            (*Q).last->next = baru;
            (*Q).last = baru;
            //jika indeks yg dimasukkan adalah indeks pertama atau 0 maka akan menjadi elemen pertama pada queue
        }else if(indeks == 1){
            baru->next = (*Q).first;
            (*Q).first = baru;
        }else{
            //deklarasi variabel sementara untuk menampung alokasi 
            elemen* bantu = (*Q).first;
            elemen* prev = NULL;
            int i;
            //proses looping  untuk mencari alokasi
            while(i != indeks){
                i++;
                prev = bantu;
                bantu = bantu->next;
            }
            //proses ini mirip dengan add after pada list
            baru->next = prev->next;
            prev->next =baru;
        }
    }
    baru = NULL;
}
void del(queue *Q){
    //jika elemen tidak kosong
    if((*Q).first != NULL){
        //jika jumlah elemen berjumlah 1
        elemen *hapus =(*Q).first;
        if(countelemen(*Q) == 1){
            //deklarasi pointer menjadi null
            (*Q).first = NULL;
            (*Q).last = NULL;
        }else{
            //jika jumlah elemen lebih banyak dari 1 maka geser
            (*Q).first = (*Q).first->next;
            hapus->next = NULL;
        }
        free(hapus);
    }
}
void print1(queue Q){
    if(Q.first != NULL){
        elemen* bantu = Q.first;
        printf("Queue 1\n");
        //proses menampilkan isi dari queue
        while(bantu != NULL){
            printf("%s %s\n", bantu->container.nama, bantu->container.nim);
            bantu = bantu->next;
        }
        printf("******************\n");
    }else printf("Queue Kosong\n");
}
void print2(queue Q){
    if(Q.first != NULL){
        elemen* bantu = Q.first;
        printf("Queue 2\n");
        //proses menampilkan isi dari queue
        while(bantu != NULL){
            printf("%s %s\n", bantu->container.nama, bantu->container.nim);
            bantu = bantu->next;
        }
        printf("******************\n");
    }else printf("Queue Kosong\n");
}