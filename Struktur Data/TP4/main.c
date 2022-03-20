#include "header.h"
int main (){
    queue Q, pisah;//deklarasi queue
    //inisialisasi isi dari queue
    createEmpty(&Q);
    createEmpty(&pisah);
    nilai input;
    //proses input untuk nama
    scanf("%s", &input.nama);
    if(strcmp(input.nama, "stop") != 0){
        //proses looping untuk input nama, input akan terus berlangsung hingga user menginput stop
        while(strcmp(input.nama, "stop") != 0){
            //jika input nama tidak stop maka lakukan proses input member dan waktu
            scanf("%s %d", &input.member, &input.waktu);
            //untuk nonmember menggunakan add non prioritas
            if(strcmp(input.member, "nonmember") == 0){
                add(input.member, input.nama, input.waktu, &Q);
                //untuk pasien yg memiliki member akan dimasukkan queue melalui prioritas
            }else{
                addP(input.member, input.nama, input.waktu, &Q);
            }
            //memasukkan input nama selanjutnya
            scanf("%s", &input.nama);   
        }
        //prosedur untuk mengecek apakah waktu dari tiap elemen tidak melebihi 60 jika melebihi 60 maka akan dimasukkan kedalam queue pemisah
        cek(&Q, &pisah);
    }
    print(pisah);
    return 0;
}

/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 4 (Tp4) dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/