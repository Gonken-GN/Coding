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
void add(char nama[], int prioritas, char kota[], int bantuan, queue *Q){
    //proses mencari alokasi baru untuk dimasukkan kedalam queue
    elemen* baru;
    baru = (elemen *) malloc (sizeof(elemen));
    //proses mengcopy input kedalma queue
    strcpy(baru->kontainer.nama, nama);
    strcpy(baru->kontainer.kota, kota);
    baru->kontainer.bantuan = bantuan;
    baru->kontainer.prioritas = prioritas;
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
void addP(char nama[], int prioritas, char kota[], int bantuan, queue *Q){
    //proses mencari alokasi baru untuk dimasukkan kedalma queue
    elemen* baru;
    baru = (elemen *) malloc (sizeof(elemen));
    //proses mengcopy isi input kedalam queue
    strcpy(baru->kontainer.nama, nama);
    strcpy(baru->kontainer.kota, kota);
    baru->kontainer.bantuan = bantuan;
    baru->kontainer.prioritas = prioritas;
    baru->next = NULL;
    //jika queue kosong

    if ((*Q).first == NULL){
        (*Q).first = baru;
        (*Q).last = baru;
    }else{
        if (prioritas > countelemen(*Q)){ 
            (*Q).last->next = baru;
            (*Q).last = baru;
            //jika antrian yg dimasukkan adalah antrian pertama atau 0 maka akan menjadi elemen pertama pada queue
        }else{// jika tidak
            if (prioritas == 1){
                baru->next = (*Q).first; // queue pertama dimasukan ke baru->next
                (*Q).first = baru; // baru menjadi queue pertama
            }
            // Jika tidak
            else{
               // deklarasi variabel sementara untuk menampung alokasi 
            elemen* bantu = (*Q).first;
            elemen* prev = NULL;
            elemen* simpan = (*Q).first;
            int i;
            //proses looping  untuk mencari alokasi
            for(i=0;i<prioritas-2;i++){
                simpan = simpan->next;
            }
            //proses ini mirip dengan add after pada list
            baru->next = simpan->next;
            simpan->next =baru;
            }
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
        int i= 0;
        //proses menampilkan bantuan yg tersalurkan 
        printf("Bantuan Tersalurkan:\n");
        while(i<banyak){
            printf("%s %d %s %d\n", bantu->kontainer.nama, bantu->kontainer.prioritas, bantu->kontainer.kota, bantu->kontainer.bantuan);
            bantu = bantu->next;
            i++;
        }
        //proses mengeluarkan elemen yg telah mendapatkan bantuan
        for(i=0;i<banyak;i++){
            del(&Q);
        }
        //proses menampilkan elemen yg belum mendapatkan bantuan
        printf("\nAntrian berisi:\n");
        while(bantu != NULL){
            printf("%s %d %s %d\n", bantu->kontainer.nama, bantu->kontainer.prioritas, bantu->kontainer.kota, bantu->kontainer.bantuan);
            bantu = bantu->next;
        }
    }else printf("Queue Kosong\n");
}

/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Kuis2 dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/