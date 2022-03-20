#include "header.h"
int palindrom(char str[100]){
    int i;//iterator
    int a;//variabel untuk menampung nilai apakah string palindrom atau bukan palindrom
    int k = strlen(str)-1;//variabel untuk menampung panjang string
    char tampung[100];//variabel untuk menampung string yang sudah dibalikkan posisi indeksnya
    for(i=0;i<strlen(str);i++){
        tampung[i] = str[k];
        k--;
    }//code untuk memasukkan char dimulai dari indeks akhir ke indeks awal
    tampung[i] = '\0';//deklarasi null
    int cmp = strcmp(str, tampung);//variabel untuk menampung apakah string tersebut palindrom atau tidak dengan cara menggunakan string compare
    if(cmp == 0){//jika stringpalindrom
        a = 1;
    }else{//jika striing bukan palindrom
        a = 0;
    }
    return a;//mengembalikan nilai a sehingga bisa diakses di main
}
void cek(char str[100]){
    int i, j;//iterator
    int k = strlen(str);
    int o = (strlen(str)/2);//variabel untuk menampung setengah panjang string
    int l;//variabel yang berfungsi jika string bernilai ganjil maka setengah panjang string akan bertambah 1 agar nilai iterator bernilai ganjil
    if(strlen(str) % 2 == 0){//jika panjang string bernilai genap
        l = (strlen(str)/2);
    } else if(strlen(str) % 2 == 1){//jika panjang string bernilai ganjil
         l = (strlen(str)/2) +1;
    }
    for(i=0;i<strlen(str)/2;i++){
        for(j=0;j<strlen(str)/2;j++){
            printf(" ");
        }//code untuk mencetak spasi sebanyak setengah dari panjang string
        printf("%c", str[i]);
        printf("\n");
    }//code untuk mencetak pola bagian pertama(setengah dari panjang string terlebih dahulu) secara vertikal
    for(i=0;i<strlen(str)/2;i++){
        printf("%c", str[i]);
    }//code untuk mencetak setengah string dari indeks[0] hingga setengah dari panjang string secara horizontall
    if(strlen(str) % 2 == 0){
        printf(" ");
    }//memberikan spasi di tengah pola jika string bernilai genap
    for(i=o;i<strlen(str);i++){
        printf("%c", str[i]);
    }//code untuk mencetak setengah spasi dimulai dimulai dari indeks setengah panjang string hingga panjang string
    printf("\n");
    for(i=l;i<strlen(str);i++){
        for(j=0;j<strlen(str)/2;j++){
            printf(" ");
        }
        printf("%c", str[i]);
        printf("\n");
    }//code untuk mencetak pola bagian kedua secara vertikal
}//prosedur untuk mencetak pola
/*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi TP10 Pola Bikin Soal Males Banget (BSMBC1) dalam mata kuliah Alpro 1
 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/