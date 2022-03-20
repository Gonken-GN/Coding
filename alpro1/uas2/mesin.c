#include "header.h"
void cek(int n){
    int i;//iterator
    float volum[n];//variabel untuk menampung float dan hasil penjumlahan dari rumus yang disediakan
    for(i=0;i<n;i++){
        volum[i] = 0;
    }//perulangan untuk membuat tiap array menjadi 0 (untuk mencegah terjadinya bug)
    for(i=0;i<n;i++){
        if(strcmp(bung[i].str, "persegi") == 0){//syarat jka string yang diinput adalah persegi
            volum[i] = bung[i].pan * bung[i].leb;//melakukan proses luas persegi = panjang * lebar
        }else if(strcmp(bung[i].str, "segitiga") == 0){//syarat jika string yang diinput adalah segitiga
            volum[i] = (bung[i].pan * bung[i].leb) / 2;//melakukan proses luas segitiga =  panjang * lebar dibagi 2
        }
    }
    for(i=0;i<n;i++){
        printf("%0.2f\n", volum[i]);//float dibasi dua dibelakang koma
    }//prosedur untuk menampilkan float hasil diatas
    float max = volum[0];//vaiabell untuk menampung nilai maksimum dari array
    for(i=1;i<n;i++){
        if(volum[i] > max){
            max = volum[i];
        }//syarat jika ada array yang nilainya lebih besar dariipada volum indeks ke 0
    }//perulangan untuk mencari nilai maksimum dari array
    printf("maksimal: %0.2f\n", max);//menampilkan niilai maksimal dari array
}//prosedur untuk mencari luas tiap bangun ruang dan mencari nilai maksimalnya
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Ujian Akhir Semester dalam mata kuliah
Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/