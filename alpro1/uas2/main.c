#include "header.h"
int main (){
    int i, n;//iterator
    scanf("%d", &n);//meminta user untuk memasukkan angka

    for(i=0;i<n;i++){
        scanf("%d %d %s", &bung[i].pan, &bung[i].leb, &bung[i].str);//meminta user untuk memasukkan angka dan string
    }
    cek(n);//menampilkan prosedur untuk mencari luas tiap bangun ruang dan mencari nilai maksimalnya
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Ujian Akhir Semester dalam mata kuliah
Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/