#include "header.h"
//prosedur mensorting siswa dengan metode bubble sort
void sort(int banyak, data arr[]){
   int i, j, swap;//iterator dan penanda
   float temp1[50], temp2;//menampung nilai dan rata-rata siswa
   char temp3[100];//menampung nama siswa
   int temp4;//menampung jmlah kegiatan siswa
    do{
        swap = 0;//penanda apakah data perlu disort atau tidak
        //proses mensorting data siswa
        for(i=0;i<banyak-1;i++){
            //sorting berdasarkan nilai rata-rata siswa
            if(arr[i].rata > arr[i+1].rata){
                //proses menukar isi indeks 
                temp2 = arr[i].rata;
                arr[i].rata = arr[i+1].rata;
                arr[i+1].rata = temp2;
                for(j=0;j<arr[i].jumlah;j++){
                    temp1[j] = arr[i].nilai[j];
                }
                for(j=0;j<arr[i+1].jumlah;j++){
                    arr[i].nilai[j] = arr[i+1].nilai[j];
                }
                temp4 = arr[i].jumlah;
                arr[i].jumlah = arr[i+1].jumlah;
                arr[i+1].jumlah = temp4;
                for(j=0;j<temp4;j++){
                    arr[i+1].nilai[j] = temp1[j];
                }
                strcpy(temp3, arr[i].nama);
                strcpy(arr[i].nama, arr[i+1].nama);
                strcpy(arr[i+1].nama, temp3);
                //proses menukar isi indeks untuk nilai siswa
                swap = 1;//penanda terjadinya sorting
            }
        }
    }while(swap == 1);//perulangan terus terjadi sampai tidak ada data yang perlu disort
}
//proses mencari data dengan metode binary search
void binsearch(int a, int cari, data arr[]){
    int found=0;//penanda telah ditemukan data yang dicari
    int i, k;//iterator
    i=0;
    k=0;
    //proses mencarii satu data
    while((i<=a) && (found == 0)){
        k=(int)(i+a) / 2;//pivot tengah
        if(k == cari){                  //jika indeks yang diminta sama dengan indeks yang dicari
            found = 1;                  //penanda telah ditemukannya data, proses pencarian berhenti
            strcpy(temp, arr[k].nama);  //mencopy string dengan indeks yang dicari
        }else{                          //jika belum ditemukannya indeks yang dicari
            if(k >cari){//jika iterator telah melebihi indeks yang dicari
                a = k-1;
            }else{
                i = k+1;
            }
        }
    }
}
//prosedur mencari data siswa dengan metode sequential search
void sequnsearch(int a, int cari, data arr[]){
    int i, found;//iterator dan penanda
    found = 0;
    i=0;
    //proses mencari data siswa
    while((i<a) &&(found == 0)){
        if(i ==cari){                   //jika iterator sama dengan indeks yang dicari
            found =1;                   //penanda telah ditemukannya data
            strcpy(temp, arr[i].nama);  //mencopy string dengan indeks yang dicari
        }else{//jika belum ditemukannya iterator dengan indeks yang dicari
            i++;
        }
    }    
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 7 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/