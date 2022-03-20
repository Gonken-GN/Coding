#include "header.h"
int main (){
    int i, j, n, m;//iterator
    scanf("%d %d", &n, &m);//ordo matriks
    data matriks[n][m];//deklarasi matriks bungkusan untuk nama siswa yang telah ditukar
    data sebelum[n][m];//deklarasi matriks bungkusan untuk nama siswa yang belum ditukar
    //proses mendaftar nama dan nilai siswa
    //tipe data nilai bernilai float agar nilai desimal dapat dibandingkan
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            //memasukkan nama dan nilai siswa dan menyimpannya kedalam bungkusan sebelum
            scanf("%s %f %f %f", &matriks[i][j].nama, &matriks[i][j].nilai1, &matriks[i][j].nilai2, &matriks[i][j].nilai3);
            strcpy(sebelum[i][j].nama, matriks[i][j].nama);
            sebelum[i][j].nilai1 = matriks[i][j].nilai1;
            sebelum[i][j].nilai2 = matriks[i][j].nilai2;
            sebelum[i][j].nilai3 = matriks[i][j].nilai3;
        }
    }
    int x = 0;//iterator
    tukar ganti[100];
    //perulangan untuk menukar data siswa jika nilai rata2 siswa pertama lebih besar dari siswa kedua
    //perulangan akan terus berlanjut jika user memasukkan string "stop"
    do{
        //siswa pertama
        scanf("%s", &ganti[x].nama1);
        if(strcmp(ganti[x].nama1, "stop") != 0){
            //siswa kedua
            scanf("%s", &ganti[x].nama2);
            for(i=0;i<n;i++){
                for(j=0;j<m;j++){
                    //jika string nama siswa pertama terdapat didalam data siswa maka baris dan kolom pada daftar tersebut akan disimpan
                    if(strcmp(matriks[i][j].nama, ganti[x].nama1) == 0){
                        temp1B = i;
                        temp1K = j;
                    //jika string nama siswa kedua terdapat didalam data siswa maka baris dan kolom pada daftar tersebut akan disimpan
                    }else if(strcmp(matriks[i][j].nama, ganti[x].nama2) == 0){
                        temp2B=i;
                        temp2K = j;
                    }
                }
            }
            //jika nilai rata-rata siswa pertama lebih besar dari siswa kedua maka data siswa tersebut akan ditukar posisinya
            if(rata(n, m, matriks) == 1){
                change(n, m, matriks);
            }
        }
        x++;
    }while(strcmp(ganti[x-1].nama1, "stop") != 0);
    printf("Posisi Bangku Awal:\n");
    string(n, m, matriks, sebelum);//deklarasi prosedur mencari string terpanjang pada daftar siswa sebelum dan sesudah ditukar
    int z;//iterator
    //proses menampilkan nama siswa sebelum ditukar posisinya
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%s", sebelum[i][j].nama);
            if(j != m-1){
                //jumlah spasi adalah sebanyak jumlah string terpanjang dikurang panjang string nama siswa tersebut
                for(z=0;z<(max1[j]-strlen(sebelum[i][j].nama)) + 2;z++){
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    printf("\nPosisi Bangku Setelah Nilai Dicek:\n");
    //proses menampilkan nama siswa yang telah ditukar posisinya
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%s", matriks[i][j].nama);
            if(j != m-1){
                 //jumlah spasi adalah sebanyak jumlah string terpanjang dikurang panjang string nama siswa tersebut
                for(z=0;z<(max[j]-strlen(matriks[i][j].nama)) + 2;z++){
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 2 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/