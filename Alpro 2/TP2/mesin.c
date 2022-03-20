#include "header.h"
//fungsi prosedur mencari nilai rata-rata siswa yang ingin ditukar
int rata(int a, int b, data matriks[a][b]){
    int i, j;//iterator
    //proses untuk mencari nilai rata-rata siswa yang ingin ditukar jika nama siswa yang ingin ditukar ada di dalam daftar siswa
    //dengan indeks yang ada di daftar siswa 
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            //mencari nilai rata-rata untuk siswa pertama
             matriks[temp1B][temp1K].rata = (matriks[temp1B][temp1K].nilai1 + matriks[temp1B][temp1K].nilai2 + matriks[temp1B][temp1K].nilai3) / 3;
             //mencari nilai rata-rata untuk siswa kedua
            matriks[temp2B][temp2K].rata = (matriks[temp2B][temp2K].nilai1 + matriks[temp2B][temp2K].nilai2 + matriks[temp2B][temp2K].nilai3) / 3;
        }
    }
    //proses jika nilai rata-rata siswa pertama lebih besar dari yang kedua maka akan melakukan prosedur pertukaran
    if(matriks[temp1B][temp1K].rata > matriks[temp2B][temp2K].rata){
        return 1;//jika nilai rata-rata siswa pertama lebih besar
    }else{
        return 0; //jika nilai rata-rata siswa pertama lebih kecil
    }
}
//prosedur untuk menukar nama siswa jika rata-rata nilai siswa pertama lebih besar dari siswa kedua
void change(int a, int b, data matriks[a][b]){
    data temp;//bungkusan untuk menampung nama siswa yang akan ditukar
    //proses menukar posisi nama siswa pertama dengan siswa kedua
    strcpy(temp.nama, matriks[temp1B][temp1K].nama);
    strcpy(matriks[temp1B][temp1K].nama, matriks[temp2B][temp2K].nama);
    strcpy(matriks[temp2B][temp2K].nama, temp.nama);
    //proses menukar posisi nilai pertama siswa pertama dengan siswa kedua
    temp.nilai1 = matriks[temp1B][temp1K].nilai1;
    matriks[temp1B][temp1K].nilai1 = matriks[temp2B][temp2K].nilai1;
    matriks[temp2B][temp2K].nilai1 = temp.nilai1;
    //proses menukar posisi nilai kedua siswa pertama dengan siswa kedua
    temp.nilai2 = matriks[temp1B][temp1K].nilai2;
    matriks[temp1B][temp1K].nilai2 = matriks[temp2B][temp2K].nilai2;
    matriks[temp2B][temp2K].nilai2 = temp.nilai2;
    //proses menukar posisi nilai ketiga siswa pertama dengan siswa kedua
    temp.nilai3 = matriks[temp1B][temp1K].nilai3;
    matriks[temp1B][temp1K].nilai3 = matriks[temp2B][temp2K].nilai3;
    matriks[temp2B][temp2K].nilai3 = temp.nilai3;
}
//prosedur untuk mencari string terpanjang tiap kolom pada daftar siswa sebelum dan sesudah ditukar
void string(int a, int b, data matriks[a][b], data sebelum[a][b]){
    int i, j;//iterator
    //proses membuat variabel tampung string terpanjang menjadi 0 agar tidak terjadi bug
    for(i=0;i<b;i++){
        max1[i] = 0;
        max[i] = 0;
    }
    //proses untuk mencari string terpanjang tiap kolom pada daftar siswa sebelum ditukar
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            if(strlen(sebelum[j][i].nama) > max1[i]){
                max1[i] = strlen(sebelum[j][i].nama);
            }
        }
    }
    //proses mencari string terpanjang tiap kolom pada daftar siswa sesudah ditukar
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            if(max[i]< strlen(matriks[j][i].nama)){
                max[i] = strlen(matriks[j][i].nama);
            }
        }
    }
}

/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 2 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
