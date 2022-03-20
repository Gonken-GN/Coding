#include "header.h"
void insertionA(int a, barang data[a]){
    int sisip1;//variabel sisip untuk harga
    char sisip2[100];//variabel sementara untuk menampung nilai terkecil untuk string (nama barang)
    float sisip3;//variabel sementara untuk menampung nilai terkecil untuk nilai barang
    int i, j;//iterator
    //proses mensorting barang dengan metode insertion ascending
    for(i=1;i<a;i++){
        //proses menyimpan nilai tiap indeks ke-i
        strcpy(sisip2, data[i].nama);
        sisip1 = data[i].harga;
        sisip3 = data[i].nilai;
        j = i-1;
        if(strcmp(pilih, "nama") == 0){//mensorting barang berdasarkan nama dengan jumlah terkecl nilai ascii  pada stringg lalu terbesar
            while(j>=0 && strcmp(sisip2, data[j].nama) < 0){
                strcpy(data[j+1].nama, data[j].nama);
                data[j+1].harga = data[j].harga;
                data[j+1].nilai = data[j].nilai;
                j--;
            }
        }else if(strcmp(pilih, "harga") == 0){//mensorting barang berdasarkan harga barang dengan harga barang terkecil lalu terbesar
            while(j>=0 && sisip1 < data[j].harga){
                strcpy(data[j+1].nama, data[j].nama);
                data[j+1].harga = data[j].harga;
                data[j+1].nilai = data[j].nilai;
                j--;
            }
        }else if(strcmp(pilih, "penilaian") == 0){//mensortng barang berdasrkan nilai barang terkecil lalu terbesar
            while(j>=0 && sisip3 < data[j].nilai){
                strcpy(data[j+1].nama, data[j].nama);
                data[j+1].harga = data[j].harga;
                data[j+1].nilai = data[j].nilai;
                j--;
            }
        }
        strcpy(data[j+1].nama, sisip2);
        data[j+1].harga = sisip1;
        data[j+1].nilai = sisip3;
    }
}//prosedur untuk mensorting dengan metode insertiion ascending
void insertionD(int a, barang data[a]){
    int sisip1;//variabel sisip untuk harga
    char sisip2[100];//variabel sementara untuk menampung nilai terkecil untuk string (nama barang)
    float sisip3;//variabel sementara untuk menampung nilai terkecil untuk nilai barang
    int i, j;//iterator
    //proses mensorting barang dengan metode insertion descending
    for(i=1;i<a;i++){
        strcpy(sisip2, data[i].nama);
        sisip1 = data[i].harga;
        sisip3 = data[i].nilai;
        j = i-1;
        if(strcmp(pilih, "nama") == 0){//proses mensorting barang berdasarkan nama dengan jumlah terkecl dari nilai ascii string dari terbesar lalu terkecil
            while(j>=0 && strcmp(sisip2, data[j].nama) > 0){
                strcpy(data[j+1].nama, data[j].nama);
                data[j+1].harga = data[j].harga;
                data[j+1].nilai = data[j].nilai;
                j--;
            }
        }else if(strcmp(pilih, "harga") == 0){//proses mensorting barang berdasarkan harga barang terbesar lalu terkecil
            while(j>=0 && sisip1 > data[j].harga){
                strcpy(data[j+1].nama, data[j].nama);
                data[j+1].harga = data[j].harga;
                data[j+1].nilai = data[j].nilai;
                j--;
            }
        }else if(strcmp(pilih, "penilaian") == 0){//proses mensorting barang berdasarkan nilai barang terbesar lalu terkecil
            while(j>=0 && sisip3 > data[j].nilai){
                strcpy(data[j+1].nama, data[j].nama);
                data[j+1].harga = data[j].harga;
                data[j+1].nilai = data[j].nilai;
                j--;
            }
        }
        strcpy(data[j+1].nama, sisip2);
        data[j+1].harga = sisip1;
        data[j+1].nilai = sisip3;
    }
}//prosedur untuk mensorting barang dengan metode insertion descending
void selectionA(int a, barang data[a]){
    int sisip1;//variabel sisip untuk harga
    char sisip2[100];//variabel sementara untuk menampung nilai terkecil untuk string (nama barang)
    float sisip3;//variabel sementara untuk menampung nilai terkecil untuk nilai barang
    int min;//variabel untuk menyimpan indeks dengan nilaii terkecil
    int i, j;//iterator
    //proses mensorting barang dengan metode selection ascending
    for(i=0;i<a-1;i++){
        min = i;
        for(j=i+1;j<a;j++){
            //proses mencari indeks dengan nilai varabel terkecil
            if(strcmp(pilih, "nama") == 0){//proses mensorting barang berdasarkan nama dengan jumlah terkecl dari nilai ascii string dari terbesar lalu terkecil
                if(strcmp(data[min].nama, data[j].nama) > 0){
                    min = j;
                }
            }else if(strcmp(pilih, "harga") == 0){//proses mensorting barang berdasarkan harga barang terbesar lalu terkecil
                if(data[min].harga > data[j].harga){
                    min = j;
                }
            }else if(strcmp(pilih, "penilaian") == 0){//proses mensorting barang berdasarkan nilai barang terbesar lalu terkecil
                if(data[min].nilai > data[j].nilai){
                    min = j;
                }
            }
        }
        //proses menukar isi indeks dengan nilai terkecil
        strcpy(sisip2, data[i].nama);
        strcpy(data[i].nama, data[min].nama);
        strcpy(data[min].nama, sisip2);
        sisip1 = data[i].harga;
        data[i].harga = data[min].harga;
        data[min].harga = sisip1;
        sisip3 = data[i].nilai;
        data[i].nilai = data[min].nilai;
        data[min].nilai = sisip3;
    }
}
void selectionD(int a, barang data[a]){
    int sisip1;//variabel sisip untuk harga
    char sisip2[100];//variabel sementara untuk menampung nilai terkecil untuk string (nama barang)
    float sisip3;//variabel sementara untuk menampung nilai terkecil untuk nilai barang
    int min;//variabel untuk menyimpan indeks dengan nilaii terkecil
    int i, j;//iterator
    for(i=0;i<a-1;i++){
        min = i;
        for(j=i+1;j<a;j++){
            //proses mencari indeks dengan nilai varabel terkecil
            if(strcmp(pilih, "nama") == 0){
                if(strcmp(data[min].nama, data[j].nama) < 0){//proses mensorting barang berdasarkan nama dengan jumlah terkecl dari nilai ascii string dari terbesar lalu terkecil
                    min = j;
                }
            }else if(strcmp(pilih, "harga") == 0){//proses mensorting barang berdasarkan harga barang terbesar lalu terkecil
                if(data[min].harga < data[j].harga){
                    min = j;
                }
            }else if(strcmp(pilih, "penilaian") == 0){//proses mensorting barang berdasarkan nilai barang terbesar lalu terkecil
                if(data[min].nilai < data[j].nilai){
                    min = j;
                }
            }
        }
        //proses menukar isi indeks dengan nilai terkecil
        strcpy(sisip2, data[i].nama);
        strcpy(data[i].nama, data[min].nama);
        strcpy(data[min].nama, sisip2);
        sisip1 = data[i].harga;
        data[i].harga = data[min].harga;
        data[min].harga = sisip1;
        sisip3 = data[i].nilai;
        data[i].nilai = data[min].nilai;
        data[min].nilai = sisip3;
    }
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 4 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/