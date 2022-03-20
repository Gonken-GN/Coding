#include "header.h"
int main (){
    //deklarasi stack
    stack seluruh;
    stack lrock;
    stack lpop;
    //inisialisasi stack (menghubah top tiap stack menjadi 0)
    createEmpty(&seluruh);
    createEmpty(&lrock);
    createEmpty(&lpop);
    int n, i;
    scanf("%d", &n);
    //data terstrukur untuk menyimpan input (sementara)
    mhsiswa tampung[n];
    for(i=0;i<n;i++){
        scanf("%s %s %s", &tampung[i].tahun, &tampung[i].judul, &tampung[i].band);
        //mengisi stack untuk stack seluruh
        push(tampung[i].tahun, tampung[i].judul, tampung[i].band, &seluruh);
    }
    check(seluruh, &lpop, &lrock);//proses pengecekan judul ganjil atau genap
    //proses menampilkan isi dari tiap stack
    printf("Playlist Musik Rock:\n===================\n");
    printelemenR(lrock);
    printf("\n");
    printf("Playlist Musik Pop:\n===================\n");
    printelemenP(lpop);
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 3 (TP3) dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
