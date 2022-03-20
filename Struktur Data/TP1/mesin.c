#include "header.h"
//prosedur untuk membuat list kosong
void createList(list *L){
    (*L).first = NULL;
}
//fungsi prosedur untuk mencari elemen kosong 
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
void addFirst(char nama[], int harga, float rating, list *L){
    elemen* baru;
    baru = (elemen*) malloc (sizeof (elemen)); //fungsi untuk  mencari memori yang belum terpakai 
    //proses mengcopy data dari input
    baru->kontainer.harga = harga;
    strcpy(baru->kontainer.nama, nama);
    baru->kontainer.rating = rating;
    if((*L).first == NULL){//jika list kosong
        baru->next = NULL;
    }else{//jika list tidak kosong
        baru->next = (*L).first;
    }
    (*L).first = baru;
    baru = NULL;//membuat pointer menjadi 0
}
void addAfter(elemen* prev, char nama[], int harga, float rating, list *L){
    elemen* baru;
    baru = (elemen*) malloc (sizeof(elemen));
    baru->kontainer.harga = harga;
    strcpy(baru->kontainer.nama, nama);
    baru->kontainer.rating = rating;
    if(prev->next == NULL){//jika elemen yang akan dimasukkan adalah elemen terakhir
        baru->next = NULL;
    }else{//jika elemen yang akan dimasukkan adalah ditengah2 dari list
        baru->next = prev->next;
    }
    prev->next = baru;
    baru = NULL;
}
//prosedur ini merupakan prosedur add last yang telah dimodifikasi untuk mensorting list berdasarkan rating 
void addLastA(char nama[], int harga, float rating, list *L, menu data[]){
    if((*L).first == NULL){//jika list kosong
        addFirst(nama, harga, rating, L);
    }else{
        if(rating < (*L).first->kontainer.rating){//jika rating pada input lebih kecil dari elemen pertama dari list
            addFirst(nama, harga, rating, L);
        }else{//jika rating pada input lebih besar dari elemen pertama dari list
            elemen* prev = (*L).first;
            while((prev->next != NULL) && (rating > prev->next->kontainer.rating)){//mencari elemen dimana rating lebih besar dari pada input
                prev = prev->next;
            }
            addAfter(prev, nama, harga, rating, L);
        }
    }
}
void addLastD(char nama[], int harga, float rating, list *L, menu data[]){
    if((*L).first == NULL){
        addFirst(nama, harga, rating, L);
    }else{
        if(rating > (*L).first->kontainer.rating){//jika rating pada input lebih besar dari elemen pertama dari list
            addFirst(nama, harga, rating, L);
        }else{
            elemen* prev = (*L).first;
            while((prev->next != NULL) && (rating < prev->next->kontainer.rating)){
                prev = prev->next;
            }
            addAfter(prev, nama, harga, rating, L);
        }
    }
}
void delFirst(list *L){
    if((*L).first != NULL){
        elemen* hapus = (*L).first;
        if(countElement(*L) == 1){//jika elemen hanya terdiri dari 1 elemen saja
            (*L).first = NULL;
        }else{//jika lebih dari 1 elemen
            (*L).first = (*L).first->next;
            hapus->next = NULL;
        }
        free(hapus);
    }
}
void delAfter(elemen* prev, list *L){
    elemen* hapus = prev->next;
    if(hapus != NULL){
        if(hapus->next == NULL){//jika elemen yang akan dihapus merupakan elemen terakhir
            prev->next = NULL;
        }else{
            prev->next = hapus->next;
            hapus->next =NULL;
        }
        free(hapus);
    }
}
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
void printElement(list L){
    if(L.first != NULL){
        //jika list tidak kosong maka inisialisasi
        elemen* tunjuk = L.first;
        int i = 1;
        while(tunjuk != NULL){
            printf("%s %d %0.1f\n", tunjuk->kontainer.nama, tunjuk->kontainer.harga, tunjuk->kontainer.rating);
            tunjuk = tunjuk->next;
            i++;
        }
    }else{
        printf("List kosong\n");
    }
}
void delAll(list *L){
    if(countElement(*L) != 0){
        int i;
        for(i=countElement(*L);i>=1;i--){
            delLast(L);    
        }
    }
}
void jumlah(int banyak, menu data[], list L){
    elemen* tunjuk = L.first;//inisialisasi untuk iterasi
    int uangsebelum = uang;
    int ada = -1;//penanda beli makanan atau tidak
    printf("\n=== Dapat Dibeli ===\n");
    while((tunjuk != NULL) && (ada != 2)){
        if(uang >= tunjuk->kontainer.harga){//jika uang yang dimiliki lebih besar dari elemen yang ditunjuk
            printf("%s %d %0.1f\n", tunjuk->kontainer.nama, tunjuk->kontainer.harga, tunjuk->kontainer.rating);
            uang -= tunjuk->kontainer.harga;//uang berkurang
            ada = 1;
        }else{
            ada = 2;
        }
        tunjuk = tunjuk->next;
    }
    if((ada == 2) && (uangsebelum == uang)){
        printf("Tidak ada yang dapat dibeli\n");
    }
    printf("\nSisa uang: %d\n", uang);
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 1 (TP1) dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/