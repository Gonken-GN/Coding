#include "header.h"
int main (){
    int i, n, m;//variabel untuk menampung angka inputan dan iterator
    scanf("%d", &n);//meminta user untuk memasukkan angka
    char str[n][100];//variabel untuk menampungs string utama
    for(i=0;i<n;i++){
        scanf("%s", str[i]);//meminta user untuk memasukkan string utama
    }//perulangan sebanyak n
    scanf("%d", &m);//meminta user untuk memasukkan angka 
    char str2[m][100];//variabel untuk menampung string pembandingg
    for(i=0;i<m;i++){
        scanf("%s", str2[i]);//meminta user untuk memasukkan string pembanding
    }//melakukan perulangan sebanyak m
    panstr(n, str, m, str2);//menampilkan prosedur untuk mencari panjang string dan memasukkan string tiap baris ke dalam tampung
    temp();//menampilkan prosedur untuk mencari apakah string utama memikiki jumlah huruf alfabet yang sama dengan pembanding
    if(hasil() == 1){//syarat jika string utama dan pembanding adalah anagram
        printf("Im ready!\n");
    }else if(hasil() == 0){//syarat jika string utam dan pembanding adalah bukan anagram
        printf("Not today!\n");
    }
    
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Evaluasi 2 dalam mata kuliah
Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/