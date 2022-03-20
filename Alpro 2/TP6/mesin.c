#include "header.h"
void insert(data arr[], int banyak){//proses sorting dengan metode insertion
    float sisip;//variabel sementara untuk menampung durasi
    char sisip2[100];//variabel sementara untuk menampung nama lagu
    int i, j;//iterator
    //proses mensorting 
    for(i=0;i<banyak;i++){
        //proses menyimpan nilai tiap indeks ke-i
        strcpy(sisip2, arr[i].nama);
        sisip = arr[i].durasi;
        j = i-1;
        //sorting menanjak
        if(urut == 'a'){
            while(j >= 0 && sisip < arr[j].durasi){//mensortin berdasarkan durasi lagu
                strcpy(arr[j+1].nama, arr[j].nama);
                arr[j+1].durasi = arr[j].durasi;
                j--;
            }
            //sorting menurun
        }else if(urut == 'd'){
            while(j >= 0 && sisip > arr[j].durasi){//mensorting berdasarkan durasi lagu
                strcpy(arr[j+1].nama, arr[j].nama);
                arr[j+1].durasi = arr[j].durasi;
                j--;
            }
        }
        strcpy(arr[j+1].nama, sisip2);
        arr[j+1].durasi = sisip;
    }
}
void selec(data arr[], int banyak){//prosedur sorting dengan metode selection sort
    char sisip2[100];//variabel sementara untuk menampung nama lagu
    float sisip;//variabel sementara untuk menampung durasi lagu
    int min;//variabel untuk menyimpan indeks dengan nilai terkecil/terbesar
    int i, j;//iterator
    //proses mensorting
    for(i=0;i<banyak-1;i++){
        //inisialisasi indeks
        min = i;
        for(j=i+1;j<banyak;j++){
            //sorting menanjak
            if(urut == 'a'){
                if(arr[min].durasi > arr[j].durasi){//mensotring barang berdasarkan durasi lagu
                //menyimpan indeks dimana nilai indeks tersebut adlaah terkecil
                    min = j;
                }
                //sorting menurun
            }else if(urut == 'd'){
                if(arr[min].durasi < arr[j].durasi){//mensorting barang berdasrkan durasi lagu
                //menyimpan indeks dimana nilai indeks tersebut adalah terbesar
                    min = j;
                }
            }
        }
        //proses menukar nilai dari indeks dimulai dari yang terkecil atau terbesar
        strcpy(sisip2, arr[i].nama);
        strcpy(arr[i].nama, arr[min].nama);
        strcpy(arr[min].nama, sisip2);
        sisip = arr[i].durasi;
        arr[i].durasi = arr[min].durasi;
        arr[min].durasi = sisip;
    }
}
void buble(data arr[], int banyak){//prosedur mensorting barang dengan metode bubble sort
    int i, pindah;//iterator
    float temp;//variabel sementara untuk menyimmpan durasi lagu
    char temp2[100];//variabel sementara untuk menyimpan nama
    //proses mensorting
    do{
        //inisialisasi penanda
        pindah = 0;
        for(i=0;i<banyak-1;i++){
            //sorting menajak
            if(urut == 'a'){
                //proses mencari indeks dengan nilai terkecil
                if(arr[i].durasi > arr[i+1].durasi){
                    //proses menukar nilai dari indeks
                    strcpy(temp2, arr[i].nama);
                    strcpy(arr[i].nama, arr[i+1].nama);
                    strcpy(arr[i+1].nama, temp2);
                    temp = arr[i].durasi;
                    arr[i].durasi = arr[i+1].durasi;
                    arr[i+1].durasi = temp;
                    pindah = 1;//penanda terjadi pengurutan
                }
                //sorting menurun
            }else if(urut == 'd'){
                if(arr[i].durasi < arr[i+1].durasi){//proses mencari indeks dengan nilai terbesar
                //proses menukar nilai dari indeks
                    strcpy(temp2, arr[i].nama);
                    strcpy(arr[i].nama, arr[i+1].nama);
                    strcpy(arr[i+1].nama, temp2);
                    temp = arr[i].durasi;
                    arr[i].durasi = arr[i+1].durasi;
                    arr[i+1].durasi = temp;
                    pindah = 1;
                }
            }
        }
    }while(pindah == 1);//looping akan terus terjadi sampai tidak terjadinya proses pengurutan lagi
}
void quick(data arr[], int left, int right){//prosedur sorting dengan metode quicksort pivot pinggir
    int i, j;//iterator
    float temp;//variabel sementara untuk menyimpan durasi lagu
    char temp2[100];//variabel sementara untuk menyimpan nama lagu
    i = left;//pivot pinggir (kirii)
    j = right;//pivot pinggir (kanan)
    //proses mensorting barang
    do {
        //urut menanjak
        if(urut == 'a'){
            //proses menyimpan indeks
            while((arr[i].durasi < arr[right].durasi) && (i <= j)) {
                i++;
            }

            while((arr[j].durasi > arr[left].durasi) && (i <= j)) {
                j--;
            }
            //sorting menurun
        }else if(urut == 'd'){
            //proses mencari indeks
            while((arr[i].durasi > arr[right].durasi) && (i <= j)) {
                i++;
            }

            while((arr[j].durasi < arr[left].durasi) && (i <= j)) {
                j--;
            }
        }

        if(i<j) {
            //proses menukar nilai dari indeks
            temp = arr[i].durasi;
            arr[i].durasi =  arr[j].durasi;
            arr[j].durasi =  temp;
            strcpy(temp2, arr[i].nama);
            strcpy(arr[i].nama, arr[j].nama);
            strcpy(arr[j].nama, temp2);
            i++;
            j--;
        }
    } while (i<j);
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
    //proses mensorting menanjak
        if(urut == 'a'){
            if(arr1[i].durasi < arr2[j].durasi){
                //proses memasukkan nilai dari indeeks
                baru[k].durasi = arr1[i].durasi;
                strcpy(baru[k].nama, arr1[i].nama);
                i++;
                k++;
            }else if(arr2[j].durasi < arr1[i].durasi){
                //proses memasukkan nilai untuk array gabungan dari array kedua
                baru[k].durasi = arr2[j].durasi;
                strcpy(baru[k].nama, arr2[j].nama);
                j++;
                k++;
            }else{//jika nilai dari indeks sama
            //proses memasukkan nilai untuk array gabungan dari array pertama
                baru[k].durasi = arr1[i].durasi;
                strcpy(baru[k].nama, arr1[i].nama);
                i++;
                k++;
                //proses memasukkan nilai untuk array gabungan dari array kedua
                baru[k].durasi = arr2[j].durasi;
                strcpy(baru[k].nama, arr2[j].nama);
                j++;
                k++;
            }
            //proses untuk mensorting barang menurun
        }else if(urut == 'd'){
             if(arr1[i].durasi > arr2[j].durasi){
                 //proses memasukkan nilai dari array gabungan dari array pertama
                baru[k].durasi = arr1[i].durasi;
                strcpy(baru[k].nama, arr1[i].nama);
                i++;
                k++;
            }else if(arr2[j].durasi > arr1[i].durasi){
                //proses memasukkan nilai dari array gabungan dari array kedua
                baru[k].durasi = arr2[j].durasi;
                strcpy(baru[k].nama, arr2[j].nama);
                j++;
                k++;
            }else{
                //proses memasukkan nilai dari array gabungan dari array pertama
                baru[k].durasi = arr1[i].durasi;
                strcpy(baru[k].nama, arr1[i].nama);
                i++;
                k++;
                //proses memasukkan nilai dari array gabungan dari array kedua
                baru[k].durasi = arr2[j].durasi;
                strcpy(baru[k].nama, arr2[j].nama);
                j++;
                k++;
            }
        }
    }
    //proses menggabungkan barang jika nilai dari iterator masih kurang dari yang jumlah maksimum array1 dan array kedua
    if(i< banyak){
        //proses memasukkan nilai untuk array gabungan dari sisa array pertama
        for(l=i;l<banyak;l++){
            baru[k].durasi = arr1[l].durasi;
            strcpy(baru[k].nama, arr1[l].nama);
            k++;
        }
    }
    if(j<banyak2){
        //proses memasukkan nilai untuk array gabungan dari sisa array kedua
        for(l=j;l<banyak2;l++){
             baru[k].durasi = arr2[l].durasi;
            strcpy(baru[k].nama, arr2[l].nama);
            k++;
        }
    }
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 6 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/