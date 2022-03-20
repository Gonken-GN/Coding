#include "header.h"
void sort(int banyak, data arr[], int banyak2){
   int i, j, swap;
   float temp1, temp2;
   char temp3[100];
   int temp4;
    do{
        swap = 0;
        for(i=0;i<banyak-1;i++){
            if(arr[i].rata > arr[i+1].rata){
                temp2 = arr[i].rata;
                arr[i].rata = arr[i+1].rata;
                arr[i+1].rata = temp2;
                temp4 = arr[i].jumlah;
                arr[i].jumlah = arr[i+1].jumlah;
                arr[i+1].jumlah = temp4;
                strcpy(temp3, arr[i].nama);
                strcpy(arr[i].nama, arr[i+1].nama);
                strcpy(arr[i+1].nama, temp3);
                for(j=0;j<banyak2;j++){
                    temp1 = arr[i].nilai[j];
                    arr[i].nilai[j] = arr[i+1].nilai[j];
                    arr[i+1].nilai[j] = temp1;
                }
                swap = 1;
            }
        }
    }while(swap == 1);
}
void binsearch(int a, int cari, data arr[]){
    int found=0;
    int i, k;
    i=0;
    k=0;
    while((i<=a) && (found == 0)){
        k=(int)(i+a) / 2;
        if(strcmp(arr[k].nama, arr[cari].nama) == 0){
            found = 1;
            strcpy(temp, arr[k].nama);
        }else{
            if(strcmp(arr[k].nama, arr[cari].nama) > 0){
                a = k-1;
            }else{
                i = k+1;
            }
        }
    }
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 7 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/