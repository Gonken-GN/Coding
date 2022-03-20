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
void add(char member[], char nama[], int waktu, queue *Q){
    //proses mencari alokasi baru untuk dimasukkan kedalam queue
    elemen* baru;
    baru = (elemen *) malloc (sizeof(elemen));
    //proses mengcopy input kedalma queue
    strcpy(baru->container.nama, nama);
    strcpy(baru->container.member, member);
    baru->container.waktu = waktu;
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
void addP(char member[],char nama[], int waktu, queue *Q){
    //proses mencari alokasi baru untuk dimasukkan kedalma queue
    elemen* baru;
    baru = (elemen *) malloc (sizeof(elemen));
    //proses mengcopy isi input kedalam queue
    strcpy(baru->container.nama, nama);
    strcpy(baru->container.member, member);
    baru->container.waktu = waktu;
    baru->next = NULL;
    //jika queue kosong
    if ((*Q).first == NULL){
        (*Q).first = baru;
        (*Q).last = baru;
    }else{
        //jika elemen baru yg dimasukkan adalah string dengan member platinum
        if(strcmp(baru->container.member, "platinum") == 0){
            //jika elemen pertama adalah platinum maka akan looping sebanyak jumlah member yg bernilai platinum dan akhir dari looping akan menjadi elemen baru tersebut
            if(strcmp((*Q).first->container.member, "platinum") == 0){
                elemen* bantu = (*Q).first;
                elemen* prev = (*Q).first;
                //proses looping akan terus berlangsung selama elemen pada queue bernilai platinum
                while(bantu != NULL){
                    if(strcmp(bantu->container.member, "platinum") == 0){
                        prev =bantu;
                    }
                   bantu = bantu->next;
                }
                //elemen terakhir dari looping tersebut akan menjadi elemen baru
                baru->next = prev->next;
                prev->next = baru;
            //jika elemen pertama adalah bukan platinum maka elemen baru akan menjadi elemen pertama
            }else{
                baru->next = (*Q).first;
                (*Q).first = baru;
            }
            //syarat jika elemen baru merupakan gold member
        }else if(strcmp(baru->container.member, "gold") == 0){
            //jika elemen pertama adalah gold atau platinum member maka akan melakukan proses looping untuk mencari elemen terakhir dari platinum dan gold member
            if((strcmp((*Q).first->container.member, "gold") == 0) || (strcmp((*Q).first->container.member, "platinum") == 0)){
                elemen *bantu = (*Q).first;
                elemen *prev = (*Q).first;
                while(bantu != NULL){
                    //jika elemen tersebut adalah gold atau platinum member maka alokasi dari elemen tersebut akan disimpan
                    if((strcmp(bantu->container.member, "gold") == 0) || (strcmp(bantu->container.member, "platinum") == 0)){
                        prev = bantu;
                    }
                    bantu = bantu->next;
                }
                //elemen yg telah disimpan akan menjadi elemen baru
                baru->next = prev->next;
                prev->next = baru;
                //jika elemen pertama adalah bukan gold atau platinum member maka akan menjadi elemen pertama
            }else{
                baru->next = (*Q).first;
                (*Q).first = baru;
            }
            //jika elemen yg diinput adalah silver member
        }else if(strcmp(baru->container.member, "silver") == 0){
            //jika elemen pertama adalah platinum, gold ataupun silver maka akan dicari elemen dimana bukan member
            if((strcmp((*Q).first->container.member, "gold") == 0) || (strcmp((*Q).first->container.member, "platinum") == 0) || (strcmp((*Q).first->container.member, "silver") == 0)){
                elemen *bantu = (*Q).first;
                elemen *prev = (*Q).first;
                while(bantu != NULL){
                    //jika elemen berisi platinum, gold ataupun silver maka akan alokasi akan disimpan
                    if((strcmp(bantu->container.member, "gold") == 0) || (strcmp(bantu->container.member, "platinum") == 0) || (strcmp(bantu->container.member, "silver") == 0)){
                        prev = bantu;
                    }
                    bantu = bantu->next;
                }
                //ujung dari alokasi tersebut akan menjadi elemen baru 
                baru->next = prev->next;
                prev->next = baru;
            }else{
                baru->next = (*Q).first;
                (*Q).first = baru;
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
        while(bantu != NULL){
            printf("%s\n", bantu->container.nama);
            bantu = bantu->next;
        }
    }else printf("Antrian kosong.\n");
}
void cek(queue *Q, queue *pemisah){
    elemen *bantu = (*Q).first;
    int total = 0;
    while(bantu != NULL){
        //waktu akan terus bertambah 
        total += bantu->container.waktu;
        //jika total waktu telah melebihi 6 jam maka elemen yg telah melebihi 6 jam akan dimasukkan kedalam pemisah
        if(total >= 360) add(bantu->container.member, bantu->container.nama, bantu->container.waktu, pemisah);
        bantu = bantu->next;
    }
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 4 (Tp4) dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/