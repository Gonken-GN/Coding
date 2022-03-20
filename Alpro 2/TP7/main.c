#include "header.h"
int main (){
    int i, j;//iterator
    int n;//banyaknya jumlah array
    int cari;
    scanf("%d", &n);
    data siswa[n];      //deklarasi tipe terstruktur sesudah disorting
    data sebelum[n];    //deklarasi tipe terstruktur sebelum disorting
    //proses memasukkan input data siswa
    for(i=0;i<n;i++){
        scanf("%s", &siswa[i].nama);    //input nama siswa
        scanf("%d", &siswa[i].jumlah);  //input jumlah kegatan siswa
        siswa[i].rata = 0;              //inisialisasi agar tidak terjadi bug
        //proses memasukkan nilai siswa
        for(j=0;j<siswa[i].jumlah;j++){
            scanf("%f", &siswa[i].nilai[j]);                        //input nilai siswa
            siswa[i].rata = siswa[i].rata + siswa[i].nilai[j];      //menjumlahkan total nilai siswa untuk mencari rata-rata
        }
        siswa[i].rata = siswa[i].rata / siswa[i].jumlah;            //membagi nilai yang telah ditotalkan dengan jumlah kegiatan agar dapat jadi rata-rata
        sebelum[i] = siswa[i];                                      //mencopy isi dari data siswa sebelum disorting
        if(i == n-1){
            sort(n, siswa);                        //mensorting siswa berdasarkan rata-rata siswa 
        }
    }
    int found = 0;//penanda apakah data sudah terurut atau belum
    //proses mengecek apakah data sudah terurut atau belum
    for(i=0;i<n;i++){
        //jika ada nilai rata-rata siswa dengan indeks i yang sudah disortng tidak sama dengan nama siswa yang telah disorting
        if(siswa[i].rata != sebelum[i].rata){
            found = 1;//penanda bahwa data sebelum disorting belum terurut
        }
    }
    scanf("%d", &cari);//input indeks mahasiswa yang akan dicari
    //proses menampilkan nama siswa yang telah disorting
    for(i=0;i<n;i++){
        printf("%s\n", siswa[i].nama);
    }
    //proses mencari nama siswa
    if(found == 0){
        binsearch(n, cari, siswa);      //jika data sebelum disort sudah terurut maka jalankan prosedur binarysearch
    }else{
        sequnsearch(n, cari, siswa);    //jika data sebelum disort belum terurut maka jalankan prosedur seqeuntial search
    }
    printf("\nYang Diminta : %s\n", temp);//menampilkan nama siswa yang sudah disearch
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 7 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/