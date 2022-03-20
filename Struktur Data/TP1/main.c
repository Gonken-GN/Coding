#include "header.h"

int main()
{
    /*membuat list dan meminta input data untuk dimasukkan kedalam list
    input list berhenti jika memasukkan string "*" dan jumlah isi list tidak akan bertambah
    */
    list L;
    createList(&L);
    int n = 0, i, j = 0, temu = 0;
    uang = 0;
    menu makanan[20];
    while(temu != 1){
        scanf("%s", &makanan[n].nama);
        if(strcmp(makanan[n].nama, "*") != 0){
            scanf("%d %f", &makanan[n].harga, &makanan[n].rating);
            n++;
        }else{
            temu = 1;
        }
    }
    scanf("%d", &uang);
    scanf("%s", &status);
    //proses untuk memanggil prosedur sorting berdasarkan metode ascending atau descending
    for(i=0;i<n;i++){
        if(strcmp(status, "asc") == 0){
            addLastA(makanan[i].nama, makanan[i].harga, makanan[i].rating, &L, makanan);
        }else if(strcmp(status, "desc") == 0){
            addLastD(makanan[i].nama, makanan[i].harga, makanan[i].rating, &L, makanan);
        }
    }
    //menampilkan isi dari elemen yang telah diurutkan
    printf("=== Menu Terurut ===\n");
    printElement(L);
    //menampilkan menu makanan yang dapat dibeli berdasarkan uang yg dimiliki dan sisa uang tersebut
    jumlah(n, makanan, L);
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 1 (TP1) dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/