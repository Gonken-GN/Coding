#include "header.h"
void insert(data arr[], int banyak){//proses sorting dengan metode insertion
    float sisip;//variabel sementara untuk menampung desi
    char sisip2[100];//variabel sementara untuk menampung nama makanan
    int sisip3;//variabel sementara untuk menampung kalor1
    int sisip4;//variabel sementara untuk menampung kalor2
    int sisip5;//variabel sementara untuk menampung ribuan
    char sisip6[100];//varibel sementara untuk menampung nama negara
    int i, j;//iterator
    //proses mensorting 
    for(i=0;i<banyak;i++){
        //proses menyimpan nilai tiap indeks ke-i
        strcpy(sisip2, arr[i].nama);
        sisip = arr[i].desi;
        sisip3 = arr[i].kalor1;
        sisip4 = arr[i].kalor2;
        sisip5 = arr[i].ribuan;
        strcpy(sisip6, arr[i].country);
        j = i-1;
        //sorting menurun
        while(j >= 0 && sisip > arr[j].desi){//mensorting berdasarkan desi lagu
        //proses menukar isi indeks
            strcpy(arr[j+1].nama, arr[j].nama);
            arr[j+1].desi = arr[j].desi;
            arr[j+1].kalor1 = arr[j].kalor1;
            arr[j+1].kalor2 = arr[j].kalor2;
            arr[j+1].ribuan = arr[j].ribuan;
            strcpy(arr[j+1].country, arr[j].country);
            j--;
        }
        //proses menukar isi indeks
        strcpy(arr[j+1].nama, sisip2);
        arr[j+1].desi = sisip;
        arr[j+1].kalor1 = sisip3;
        arr[j+1].kalor2 = sisip4;
        arr[j+1].ribuan = sisip5;
        strcpy(arr[j+1].country, sisip6);
    }
}
void selec(data arr[], int banyak){//prosedur sorting dengan metode selection sort
    float sisip;//variabel sementara untuk menampung desi
    char sisip2[100];//variabel sementara untuk menampung nama makanan
    int sisip3;//variabel sementara untuk menampung kalor1
    int sisip4;//variabel sementara untuk menampung kalor2
    int sisip5;//variabel sementara untuk menampung ribuan
    char sisip6[100];//varibel sementara untuk menampung nama negara
    int min;//variabel untuk menyimpan indeks dengan nilai terkecil/terbesar
    int i, j;//iterator
    //proses mensorting
    for(i=0;i<banyak-1;i++){
        //inisialisasi indeks
        min = i;
        for(j=i+1;j<banyak;j++){
            //sortiing menurun
            if(arr[min].desi < arr[j].desi){//mensorting barang berdasrkan desi lagu
            //menyimpan indeks dimana nilai indeks tersebut adalah terbesar
                min = j;
                }
        }
        //proses menukar nilai dari indeks dimulai dari yang terkecil atau terbesar
        strcpy(sisip2, arr[i].nama);
        strcpy(arr[i].nama, arr[min].nama);
        strcpy(arr[min].nama, sisip2);
        strcpy(sisip6, arr[i].country);
        strcpy(arr[i].country, arr[min].country);
        strcpy(arr[min].country, sisip6);
        sisip = arr[i].desi;
        arr[i].desi = arr[min].desi;
        arr[min].desi = sisip;
        sisip3 = arr[i].kalor1;
        arr[i].kalor1 = arr[min].kalor1;
        arr[min].kalor1 = sisip3;
        sisip4 = arr[i].kalor2;
        arr[i].kalor2 = arr[min].kalor2;
        arr[min].kalor2 = sisip4;
        sisip5 = arr[i].ribuan;
        arr[i].ribuan = arr[min].ribuan;
        arr[min].ribuan = sisip5;
    }
}
void buble(data arr[], int banyak){//prosedur mensorting barang dengan metode bubble sort
    int i, pindah;//iterator
    float temp;//variabel sementara untuk menyimmpan desi 
    char temp2[100];//variabel sementara untuk menyimpan nama makanan
    int temp3;//variabel sementara untuk menyimpan kalor1
    int temp4;//variabel sementara untuk menyimpan kalor2
    int temp5;//variabel sementara untuk menyimipan ribuan
    char temp6[100];//varabel sementara untuk menyimpan nama negara
    //proses mensorting
    do{
        //inisialisasi penanda
        pindah = 0;
        for(i=0;i<banyak-1;i++){
            //sorting menurun
            if(arr[i].desi < arr[i+1].desi){//proses mencari indeks dengan nilai terbesar
            //proses menukar nilai dari indeks
                strcpy(temp2, arr[i].nama);
                strcpy(arr[i].nama, arr[i+1].nama);
                strcpy(arr[i+1].nama, temp2);
                strcpy(temp6, arr[i].country);
                strcpy(arr[i].country, arr[i+1].country);
                strcpy(arr[i+1].country, temp6);
                temp = arr[i].desi;
                arr[i].desi = arr[i+1].desi;
                arr[i+1].desi = temp;
                temp3 = arr[i].kalor1;
                arr[i].kalor1 = arr[i+1].kalor1;
                arr[i+1].kalor1 = temp3;
                temp4 = arr[i].kalor2;
                arr[i].kalor2 = arr[i+1].kalor2;
                arr[i+1].kalor2 = temp4;
                temp5 = arr[i].ribuan;
                arr[i].ribuan = arr[i+1].ribuan;
                arr[i+1].ribuan = temp5;
                pindah = 1;
            }
        }
    }while(pindah == 1);//looping akan terus terjadi sampai tidak terjadinya proses pengurutan lagi
}
void quick(data arr[], int left, int right){//prosedur sorting dengan metode quicksort pivot pinggir
    int i, j;//iterator
    float temp;//variabel sementara untuk menyimmpan desi 
    char temp2[100];//variabel sementara untuk menyimpan nama makanan
    int temp3;//variabel sementara untuk menyimpan kalor1
    int temp4;//variabel sementara untuk menyimpan kalor2
    int temp5;//variabel sementara untuk menyimipan ribuan
    char temp6[100];
    i = left;//pivot pinggir (kirii)
    j = right;//pivot pinggir (kanan)
    //proses mensorting barang
    do {
        //sorting menurun
         //proses mencari indeks
        while((arr[i].desi > arr[right].desi) && (i <= j)) {
                i++;
        }
        while((arr[j].desi < arr[left].desi) && (i <= j)) {
                j--;
        }
        if(i<j) {
            //proses menukar nilai dari indeks
            temp = arr[i].desi;
            arr[i].desi =  arr[j].desi;
            arr[j].desi =  temp;
             temp3 = arr[i].kalor1;
            arr[i].kalor1 = arr[j].kalor1;
            arr[j].kalor1 = temp3;
            temp4 = arr[i].kalor2;
            arr[i].kalor2 = arr[j].kalor2;
            arr[j].kalor2 = temp4;
            temp5 = arr[i].ribuan;
            arr[i].ribuan = arr[j].ribuan;
            arr[j].ribuan = temp5;
            strcpy(temp2, arr[i].nama);
            strcpy(arr[i].nama, arr[j].nama);
            strcpy(arr[j].nama, temp2);
            strcpy(temp6, arr[i].country);
            strcpy(arr[i].country, arr[j].country);
            strcpy(arr[j].country, temp6);
            i++;
            j--;
        }
    } while (i<j);//untuk mencegah agar iterator tidak melebihi batas
    //rekursif
    if(left<j) {
        quick(arr, left,j);
    }
    if(i<right) {
        quick(arr, i, right);
    }
}
void gabung(int banyak, int banyak2, data arr1[], data arr2[], data baru[]){//prosedur untuk menggabungkan 2 atau 3 array
    int i = 0, j = 0, k = 0, l = 0;//itertor
    //proses menggabungkan dan mensort array
    while((i<banyak) && (j<banyak2)){//syarat agar tidak melebihi batas
    //proses pengggabungan menurun
        if(arr1[i].desi > arr2[j].desi){
            //proses memasukkan nilai dari array gabungan dari array pertama
            baru[k].desi = arr1[i].desi;
            baru[k].kalor1 = arr1[i].kalor1;
            baru[k].kalor2 = arr1[i].kalor2;
            baru[k].ribuan = arr1[i].ribuan;
            strcpy(baru[k].nama, arr1[i].nama);
            strcpy(baru[k].country, arr1[i].country);
            i++;
            k++;
        }else if(arr2[j].desi > arr1[i].desi){
            //proses memasukkan nilai dari array gabungan dari array kedua
            baru[k].desi = arr2[j].desi;
            baru[k].kalor1 = arr2[j].kalor1;
            baru[k].kalor2 = arr2[j].kalor2;
            baru[k].ribuan = arr2[j].ribuan;
            strcpy(baru[k].nama, arr2[j].nama);
            strcpy(baru[k].country, arr2[j].country);
            j++;
            k++;
        }else{
            //proses memasukkan nilai dari array gabungan dari array pertama
            baru[k].desi = arr1[i].desi;
            baru[k].kalor1 = arr1[i].kalor1;
            baru[k].kalor2 = arr1[i].kalor2;
            baru[k].ribuan = arr1[i].ribuan;
            strcpy(baru[k].nama, arr1[i].nama);
            strcpy(baru[k].country, arr1[i].country);
            i++;
            k++;
            //proses memasukkan nilai dari array gabungan dari array kedua
            baru[k].desi = arr2[j].desi;
            baru[k].kalor1 = arr2[j].kalor1;
            baru[k].kalor2 = arr2[j].kalor2;
            baru[k].ribuan = arr2[j].ribuan;
            strcpy(baru[k].nama, arr2[j].nama);
            strcpy(baru[k].country, arr2[j].country);
            j++;
            k++;
        }
    }
    //proses menggabungkan barang jika nilai dari iterator masih kurang dari yang jumlah maksimum array1 dan array kedua
    if(i< banyak){
        //proses memasukkan nilai untuk array gabungan dari sisa array pertama
        for(l=i;l<banyak;l++){
            baru[k].desi = arr1[l].desi;
            baru[k].kalor1 = arr1[l].kalor1;
            baru[k].kalor2 = arr1[l].kalor2;
            baru[k].ribuan = arr1[l].ribuan;
            strcpy(baru[k].nama, arr1[l].nama);
            strcpy(baru[k].country, arr1[l].country);
            k++;
        }
    }
    if(j<banyak2){
        //proses memasukkan nilai untuk array gabungan dari sisa array kedua
        for(l=j;l<banyak2;l++){
            baru[k].desi = arr2[l].desi;
            baru[k].kalor1 = arr2[l].kalor1;
            baru[k].kalor2 = arr2[l].kalor2;
            baru[k].ribuan = arr2[l].ribuan;
            strcpy(baru[k].nama, arr2[l].nama);
            strcpy(baru[k].country, arr2[l].country);
            k++;
        }
    }
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Ujian Tengah Semester (UTS) dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/