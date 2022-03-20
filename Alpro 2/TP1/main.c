#include "header.h"
int main (){
    int i, j, n, m;//iterator
    scanf("%d", &n);//meminta user untuk memasukkan berapa banyak baris matriks
    scanf("%d", &m);//meminta user untuk memasukkan berapa banyak kolom matriks
    int matriks[n][m];//variabel menampung matriks
    for(i=0;i<n;i++){//perulangan untuk meminta user memasukkan angka matriks tiap baris dan kolom
        for(j=0;j<m;j++){
            scanf("%d", &matriks[i][j]);
        }
    }
    if(trafek(n, m, matriks) % 2 == 1){//proses untuk mencari tau apakah nilai kolom terkahir matriks bernilai ganjil atau genap
        putarR(n, m, matriks);//jika nilai kolom terakhir bernilai ganjil maka tampilkan matriks pada prosedur rotasi kanan
    }else{
        putarL(n, m, matriks);//jika nilai kolom terakhir bernilai genap maka tampilkan matriks pada prosedur rotasi kiri
    }
    if(sama(n, m, matriks) == 1){//proses untuk mengetahui apakah matriks yang telah dirotasikan sama dengan matriks awal (input user)
        printf("Coba lagi besok!\n");//jika matriks akhir(yang telah dirotasikan) sama dengan matriks awal(matriks input user)
    }else{
        printf("Wihh matrix yang seru!\n");//jika matriks akhir(matriks yang telah dirotasikan) tidak sama dengan matriks awal
    }
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 1 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/