#include "header.h"
void createEmpty(stack *S){
    (*S).top = NULL;//deklarasi top
}
int isEmpty(stack S){
    int hasil = 0;
    //jika stack masih kosong
    if(S.top == NULL){
        hasil = 1;
    }
    return hasil;
}
int countElement(stack S){
    int hasil = 0;
    //jika stack tidak kosong
    if(S.top != NULL){
        elemen* bantu = S.top;
        //proses menghitung isi dari stack
        while (bantu != NULL){
            hasil++;
            bantu = bantu->next;
        }
        
    }
    return hasil;
}
void push(char tahun[], char judul[], char band[], stack *S){
    elemen* baru; //deklarasi pointer untuk menampung alokasi baru
    baru = (elemen *) malloc(sizeof(elemen));//mencari alokasi
    //proses mengcopy input ke isi stack
    strcpy(baru->kontainer.judul, judul);
    strcpy(baru->kontainer.tahun, tahun);
    strcpy(baru->kontainer.band, band);
    //jika stack kosong
    if((*S).top == NULL){
        baru->next = NULL;//maka elemen pertama selanjutnya bernilai null
    }else{
        baru->next = (*S).top;//maka elemen baru akan diisi dengan elemen sebelumnya
    }
    (*S).top = baru;//pointer top = baru
    baru = NULL;
}
void pop(stack *S){
    //jika stack tidak kosong
    if((*S).top != NULL){
        elemen *hapus = (*S).top;
        //jika stack hanya memiliki 1 elemen
        if(countElement(*S) == 1){
            (*S).top = NULL;
        }else{
            (*S).top = (*S).top->next;
        }
        hapus->next = NULL;
        free(hapus);
    }
}
void printelemenR(stack S){
    //jika stack ROCK tidak kosong 
    if(S.top != NULL){
        elemen* bantu = S.top;
        int i = 1;//untuk nomor
        //proses menampilkan judul lagu dari stack ROCK
        while(bantu != NULL){
            printf("%d. %s\n", i,bantu->kontainer.judul);
            i++;
            bantu = bantu->next;
        }
        //jika stack ROCK ksoong
    }else{
        printf("BUKAN ANAK ROCK!\n");
    }
}
void printelemenP(stack S){
    //jika stack POP tidak kosong
    if(S.top != NULL){
        elemen* bantu = S.top;
        int i = 1;
        //proses menampilkan judul lagu untuk stack POP
        while(bantu != NULL){
            printf("%d. %s\n", i,bantu->kontainer.judul);
            i++;
            bantu = bantu->next;
        }
        //jika stack POP kosong
    }else{
        printf("BUKAN ANAK POP!\n");
    }
}
void check(stack S, stack *ganjil, stack *genap){
    int tampung = 0, i;
    //jika stack seluruh tidak kosong
    if(S.top != NULL){
        elemen* bantu = S.top;
        //proses looping
        while(bantu != NULL){
            int ascii = 0;//variabel untuk menampung nilai ascii dari string
            tampung = 0;//variabel untuk menampung panjang string
            tampung = strlen(bantu->kontainer.judul);
            for(i = 0;i<tampung;i++){
                //proses menjumlahkan ascii tiap karakter pada string
                ascii += bantu->kontainer.judul[i];
            }
            //jika ascii string judul lagu berjumlah genap maka masukkan kedalam stack ROCK (genap)
            if(ascii % 2 == 0){
                push(bantu->kontainer.tahun, bantu->kontainer.judul, bantu->kontainer.band, genap);
            //jika ascii string judul lagu berjumlah ganjil maka masukkan kedalam stack POP (ganjil)
            }else{
                push(bantu->kontainer.tahun, bantu->kontainer.judul, bantu->kontainer.band, ganjil);
            }
            bantu = bantu->next;
        }
    }
}

/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 3 (TP3) dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/