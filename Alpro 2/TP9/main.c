#include "header.h"
#include 
int main (){
    char nama[100]; //variabel stringg menyimpan nama 
    char pita[100]; //varabel string menyimpan string pita
    scanf("%s", &nama);//memasukkan nama
    scanf("%49s", &pita);//memasukkan striing
    char temp1, temp2, temp3;//variabel sementara untuk menympan karakter pada mesin karakter
    int found = 0;//penanda telah menemukan karakter yang diinginkan
    start(pita);//memulai mesn karakter
    while (eop()==0){
        temp1=getcc();//menyimpan karakter pada mesin karakter denggan indeks 0
        inc(pita);//indeks bertambah
        if(eop()==0){
            temp2=getcc();//menyiimpan karakter pada mesin karakter dengan indeks 1
            inc(pita);//indeks bertambah
            if(eop()==0){
                temp3=getcc();//menyimpan karakter pada mesin karakter dengan indeks 2
                if(((temp1=='r')&&(temp2=='a')&&(temp3='r')) ||((temp1=='x')&&(temp2=='c')&&(temp3=='v')) ||((temp1=='x')&&(temp2=='a')&&(temp3=='r'))){//syarat untuk mencari karakter pada mesin karakter
                    found = 1;//jika telah ditemukanny karakter pada mesin karakter
                }
            }
        }
    }//proses looping akan terus terjadi selama belum menemukan end of pita yaitu titik
    //proses menampilkan apakah karakter yang dicari terdapat pada pita atau tidak
    if(found==1){   //jika ditemukan karakter yang diinginkan
        printf("%s adalah Agen Rahasia.\n", nama);
    }else{          //jika tidak
        printf("%s adalah pegawai biasa.\n", nama);
    }
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 9 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/