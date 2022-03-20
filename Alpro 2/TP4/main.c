#include "header.h"
int main (){
    int i;//iterator
    int n;//variabel untuk menampun berapa banyak input array 
    scanf("%d", &n);
    barang data[n];//deklarasi array data terstruktur sebanyak n
    //proses memasukkan nama, harga, dan nilai barang
    for(i=0;i<n;i++){
        scanf("%s %d %f", &data[i].nama, &data[i].harga, &data[i].nilai);
    }
    scanf("%s", &metode);//meminta user untuk memilih metode sorting (insertion atau selection)
    scanf("%s", &sort);//meminta user untuk memilih sort ascending atau descending
    scanf("%s", &pilih);//memlih sorting barang berdasarkan nama, harga atau nilai barang
    /*proses mensorting barang berdasarkan metode yang dipilih
    dan sorting menurun atau naik*/
    if(strcmp(metode, "insertion") == 0){
        if(strcmp(sort, "asc") == 0){//mensorting barang dengan metode insertion ascending
            insertionA(n, data);
        }else if(strcmp(sort, "desc") == 0){//mensorting barang dengan metode insertion descending
            insertionD(n, data);
        }
    }else if(strcmp(metode, "selection") == 0){//mensorting barang dengan metode selection ascending
        if(strcmp(sort, "asc") == 0){
            selectionA(n, data);
        }else if(strcmp(sort, "desc") == 0){//mensorting barang dengan metode selection descending
            selectionD(n, data);
        }
    }
    //proses menampilkan data barang yang telah disorting
    for(i=0;i<n;i++){
        printf("%s %d %0.1f\n", data[i].nama, data[i].harga, data[i].nilai);
    }
    return 0;
}/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 4 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/