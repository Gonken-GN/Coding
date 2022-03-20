#include "header.h"
void sort(int banyak, data arr[]){
   int i, j, swap;//iterator dan penanda
   float temp1, temp2;//menampung berat dan harga per berat kurma
   char temp3[100];//menampung nama kurma
   float temp4;//menampung harga kurma
   int temp5;//menampung status premium kurma
    do{
        swap = 0;//penanda apakah data perlu disort atau tidak
        //proses mensorting data siswa
        for(i=0;i<banyak-1;i++){
            //sorting berdasarkan harga per berat kurma
            if(arr[i].rata < arr[i+1].rata){
                //proses menukar isi indeks 
                strcpy(temp3, arr[i].nama);
                strcpy(arr[i].nama, arr[i+1].nama);
                strcpy(arr[i+1].nama, temp3);
                temp2 = arr[i].rata;
                arr[i].rata = arr[i+1].rata;
                arr[i+1].rata = temp2;
                temp1 = arr[i].berat;
                arr[i].berat = arr[i+1].berat;
                arr[i+1].berat = temp1;
                temp4 = arr[i].harga;
                arr[i].harga = arr[i+1].harga;
                arr[i+1].harga = temp4;
                temp5 = arr[i].status;
                arr[i].status = arr[i+1].status;
                arr[i+1].status = temp5;
                swap = 1;//penanda terjadinya sorting
            }
        }
    }while(swap == 1);//perulangan terus terjadi sampai tidak ada data yang perlu disort
}//prosedur untuk mensorting dengan metode bubble sort
int binsearch(int a, int cari, data arr[]){
    int found=0;//penanda telah ditemukan data yang dicari
    int i, k;//iterator
    i=0;
    k=0;
    //proses mencarii satu data
    while((i<=a) && (found == 0)){
        k=(int)(i+a) / 2;//pivot tengah
        if(arr[k].rata == cari){                  //jika harga per berat yang dicari telah ditemukan
            found = 1;              //penanda telah ditemukannya data, proses pencarian berhenti
            indeks = k;             //menyimpan indeks data yang telah ditemukan
        }else{                          //jika belum ditemukannya indeks yang dicari
            if(arr[k].rata <cari){//jika iterator telah melebihi indeks yang dicari
                a = k-1;
            }else{
                i = k+1;
            }
        }
    }
    return found;
}//fungsi prosedur untuk mencari data dengan input cari
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Kuis 1 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/