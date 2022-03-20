#include "header.h"
int main (){
    int i, j;//iterator
    int n;
    char metode;
    scanf("%d", &n);//jumlah array yang diinginkan
    pecahan data[n];
    //proses untuk meminta user memasukkan nilai pembilang dan penyebut
    for(i=0;i<n;i++){
        scanf("%f %f", &data[i].pembilang, &data[i].penyebut);
        data[i].desimal = data[i].pembilang / data[i].penyebut;//pada saat input pembilang dan penyebut berlangsung, akan otomatis diubah menjadi nilai pecahan
    }
    scanf(" %c", &metode);//metode yang diinginkan bubble atau quick sort
    scanf(" %c", &urut);//urut menurun atau menanjak (descending atau ascending)
    if(metode == 'q'){
        qs(data, 0, n-1);//jika metode quick sort maka jalankan prosedur sorting metode quick sort
    }else if(metode == 'b'){
        buble(n, data);//jika metode yang dipilih adalah bubble sort maka jalankan prosedur sorting metode bubble sort
    }
    //proses menampilkan pembilang yang sudah disorting
    for(i=0;i<n;i++){
        printf("%0.0f",data[i].pembilang);
        if(i < n-1){
            printf("   ");
         }
    }
    printf("\n");//baris baru 
    //proses menampilkan tanda '-' agar output dapat terlihat pecahan
    for(i=0;i<n;i++){
        printf("-");
        if(i < n-1){
            printf(" , ");
        }
    }
    printf("\n");//baris baru
    //proses menampilkan penyebut yang sudah disort
    for(i=0;i<n;i++){
        printf("%0.0f", data[i].penyebut);
        if(i<n-1){
            printf("   ");
        }
    }
    printf("\n");
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 5 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/