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
void add(char nim[], char nama[], int nilai, int antrian, queue *Q){
    //proses mencari alokasi baru untuk dimasukkan kedalam queue
    elemen* baru;
    baru = (elemen *) malloc (sizeof(elemen));
    //proses mengcopy input kedalma queue
    strcpy(baru->container.nama, nama);
    strcpy(baru->container.nim, nim);
    baru->container.nilai = nilai;
    baru->container.antrian = antrian;
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
void addP(char nim[], char nama[], int nilai, int antrian, queue *Q){
    //proses mencari alokasi baru untuk dimasukkan kedalma queue
    elemen* baru;
    baru = (elemen *) malloc (sizeof(elemen));
    //proses mengcopy isi input kedalam queue
    strcpy(baru->container.nama, nama);
    strcpy(baru->container.nim, nim);
    baru->container.nilai = nilai;
    baru->container.antrian = antrian;
    baru->next = NULL;
    //jika queue kosong
    if((*Q).first == NULL){
        (*Q).first = baru;
        (*Q).last = baru;
    }else{
        //jika antrian yg dimasukkan lebih besar dari jumlah elemen yg ada maka akan menjadi elemen terakhir
        if(antrian > countelemen(*Q)){
            (*Q).last->next = baru;
            (*Q).last = baru;
            //jika antrian yg dimasukkan adalah antrian pertama atau 0 maka akan menjadi elemen pertama pada queue
        }else if(antrian == 1){
            baru->next = (*Q).first;
            (*Q).first = baru;
        }else{
            // deklarasi variabel sementara untuk menampung alokasi 
            elemen* bantu = (*Q).first;
            elemen* prev = NULL;
            elemen* simpan;
            int i;
            //proses looping  untuk mencari alokasi
            for(i=1;i<antrian-1;i++){
                simpan = simpan->next;
            }
            //proses ini mirip dengan add after pada list
            baru->next = simpan->next;
            simpan->next =baru;
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
void print(queue Q){
    if(Q.first != NULL){
        elemen* bantu = Q.first;
        //proses menampilkan isi dari queue
        while(bantu != NULL){
            printf("%s %d %s %d\n", bantu->container.nim, bantu->container.antrian, bantu->container.nama, bantu->container.nilai);
            bantu = bantu->next;
        }
    }else printf("Queue Kosong\n");
}
void cek(queue *Q, queue *W, nilai temp[], int jumlah, int keluar){
    int i;
    for(i=0;i<jumlah;i++){
        if(temp[i].antrian <= keluar){
            addP(temp[i].nim, temp[i].nama, temp[i].nilai, temp[i].antrian, Q);
        }else{
            addP(temp[i].nim, temp[i].nama, temp[i].nilai, temp[i].antrian, Q);
        }
    }
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Kuis2 dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/