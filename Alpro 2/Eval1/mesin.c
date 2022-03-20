#include "header.h"
void insert(data arr[], int banyak){//proses sorting dengan metode insertion
    int sisip;//variabel sementara untuk menampung nilai1
    char sisip2[100];//variabel sementara untuk menampung nama lagu
    int sisip3;
    int i, j;//iterator
    //proses mensorting 
    for(i=0;i<banyak;i++){
        //proses menyimpan nilai tiap indeks ke-i
        strcpy(sisip2, arr[i].nama);
        sisip = arr[i].nilai1;
        sisip3 = arr[i].nilai2;
        j = i-1;
        //sorting menanjak
            while(j >= 0 && strcmp(sisip2, arr[j].nama) < 0){//mensortin berdasarkan nilai1 lagu
                strcpy(arr[j+1].nama, arr[j].nama);
                arr[j+1].nilai1 = arr[j].nilai1;
                arr[j+1].nilai2 = arr[j].nilai2;
                j--;
            }
            //sorting menurun
        strcpy(arr[j+1].nama, sisip2);
        arr[j+1].nilai1 = sisip;
        arr[j+1].nilai2 = sisip3;
    }
}

void gabung(int banyak, int banyak2, data arr1[], data arr2[], data baru[]){//prosedur untuk menggabungkan 2 atau 3 array
    int i = 0, j = 0, k = 0, l = 0;//itertor
    //proses menggabungkan dan mensort array
    while((i<banyak) && (j<banyak2)){//syarat agar tidak melebihi batas
    //proses mensorting menanjak
            if(strcmp(arr1[i].nama, arr2[j].nama) < 0){
                baru[k].nilai1 = arr1[i].nilai1;
                baru[k].nilai2 = arr1[i].nilai2;
                strcpy(baru[k].nama, arr1[i].nama);
                i++;
                k++;
            }else if(strcmp(arr2[j].nama, arr1[i].nama) < 0){
                //proses memasukkan nilai untuk array gabungan dari array kedua
                baru[k].nilai1 = arr2[j].nilai1;
                baru[k].nilai2 = arr2[j].nilai2;
                strcpy(baru[k].nama, arr2[j].nama);
                j++;
                k++;
            }else{//jika nilai dari indeks sama
            //proses memasukkan nilai untuk array gabungan dari array pertama
                baru[k].nilai1 = arr1[i].nilai1;
                baru[k].nilai2 = arr1[i].nilai2;
                strcpy(baru[k].nama, arr1[i].nama);
                i++;
                k++;
                //proses memasukkan nilai untuk array gabungan dari array kedua
                baru[k].nilai1 = arr2[j].nilai1;
                baru[k].nilai1 = arr2[j].nilai2;
                strcpy(baru[k].nama, arr2[j].nama);
                j++;
                k++;
            }
            //proses untuk mensorting barang menurun
    }
    //proses menggabungkan barang jika nilai dari iterator masih kurang dari yang jumlah maksimum array1 dan array kedua
    if(i< banyak){
        //proses memasukkan nilai untuk array gabungan dari sisa array pertama
        for(l=i;l<banyak;l++){
            baru[k].nilai1 = arr1[l].nilai1;
            baru[k].nilai2 = arr1[l].nilai2;
            strcpy(baru[k].nama, arr1[l].nama);
            k++;
        }
    }
    if(j<banyak2){
        //proses memasukkan nilai untuk array gabungan dari sisa array kedua
        for(l=j;l<banyak2;l++){
            baru[k].nilai1 = arr2[l].nilai1;
            baru[k].nilai2 = arr2[l].nilai2;
            strcpy(baru[k].nama, arr2[l].nama);
            k++;
        }
    }
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Evaluasi 1 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/