#include "header.h"
int main (){
    int i;//iterator
    int n;//banyaknya array
    scanf("%d", &n);
    data jual[n];//deklarasi data tersetruktur sebanyak n
    for(i=0;i<n;i++){
        jual[i].rata = 0;       //untuk mencegah terjadinya bug
        scanf("%s %f %f %s", &jual[i].nama, &jual[i].berat, &jual[i].harga, &jual[i].premium);//meminta user untuk memasukkan input
        //proses untuk mencari status premium
        if(strcmp(jual[i].premium, "premium") == 0){
            jual[i].status = 1;     //jika premium
        }else{
            jual[i].status = 0;     //jika standard (bukan premium)
        }
        jual[i].rata = jual[i].harga / jual[i].berat;//mencari nilai harga per berat
    }
    sort(n, jual);//deklarasi sorting
    int cari;//variabel untuk menyimpan input cari
    scanf("%d", &cari);
    //proses untuk menampilkan data jika data yang dicari ditemukan
    if(binsearch(n, cari, jual) == 1){//jika data ditemukan
        //proses menampilkan data sesuai dengan harga per berat yang dicari
        printf("nama kurma: %s\n", jual[indeks].nama);
        printf("berat: %0.0f gram\n", jual[indeks].berat);
        printf("harga: %0.0f\n", jual[indeks].harga);
        printf("harga per berat: %0.0f\n", jual[indeks].rata);
        //proses untuk menampilkan status premium
        if(jual[indeks].status == 1){
            printf("status premium: ya\n");
        }else{
            printf("status premium: tidak\n");
        }
    }else if(binsearch(n, cari, jual) == 0){  //jika data tidak ditemukan
        printf("tidak ditemukan\n");
    }
    return 0;
}

/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Kuis 1 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/