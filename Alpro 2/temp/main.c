#include "header.h"
int main (){
    int i, j;
    int n, m;
    int cari;
    scanf("%d", &n);
    data siswa[n];
    data sebelum[n];
    for(i=0;i<n;i++){
        scanf("%s", &siswa[i].nama);
        scanf("%d", &siswa[i].jumlah);
        for(j=0;j<siswa[i].jumlah;j++){
            scanf("%f", &siswa[i].nilai[j]);
            siswa[i].rata = siswa[i].rata + siswa[i].nilai[j];
        }
        siswa[i].rata = siswa[i].rata / siswa[i].jumlah;
        if(i == n-1){
            sort(n, siswa, siswa[i].jumlah);
        }
    }
    scanf("%d", &cari);
  
    binsearch(n, cari, siswa);
    printf("Yang Diminta : %s", temp);
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 7 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/