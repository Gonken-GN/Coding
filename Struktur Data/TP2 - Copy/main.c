#include "header.h"
int main(){
    //proses membuat list sebanyak n
    list L;
    createList(&L);
    komponen input[50];
    int i, temu =0, n = 0;
    //proses memasukkan input dimana input akan berakhir jika memasukkan string tertentu
    //jumlah list akan terus bertambah dengan kondisi tertentu
    while(temu != 1){
        scanf("%s", &input[n].nama);
        if(strcmp(input[n].nama, "---") == 0){
            temu = 1;
        }else{
            scanf("%d %d", &input[n].harga, &input[n].kode);
            n++;
        }
    }
    scanf("%s %s", &metode, &urut);
    int add = 0;
    //proses memasukkan list dari data dengan kode genap
    //jika kode ganjil maka tidak dimasukkan kedalam list 
    for(i=0;i<n;i++){
        if(input[i].kode % 2 == 0){
            addLast(input[i].harga, input[i].nama, input[i].kode, &L);
            add++;
        }
    }
    if(add != 0){
        sort(n, &L);
    }
    printElement(L);
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 2 (TP2) dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/