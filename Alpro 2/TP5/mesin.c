#include "header.h"
void buble(int a, pecahan data[a]){
    int i;//iterator
    float temp, temp2, temp3;//variabel untuk menampung nilai sementara dari pembilang, penyebut dan hasil pecahan
    int swap;//variabel untuk menampung apakah  array melakukan sorting atau tidak
    //proses untuk mensorting pecahan dengan metode bubble sort
    do{
        //inisialisasi 
        swap = 0;
        for(i=0;i<(a-1);i++){
            //sorting menanjak
            if(urut == 'a'){
                //proses sorting berdasarkan nilai desimal dari input pecahan
                if(data[i].desimal > data[i+1].desimal){
                    //proses menukar posisi isi indeks
                    temp = data[i].pembilang;
                    data[i].pembilang = data[i+1].pembilang;
                    data[i+1].pembilang = temp;
                    temp2 = data[i].penyebut;
                    data[i].penyebut = data[i+1].penyebut;
                    data[i+1].penyebut = temp2;
                    temp3 = data[i].desimal;
                    data[i].desimal = data[i+1].desimal;
                    data[i+1].desimal = temp3;
                    swap = 1;//variabel penanda jika terjadinya proses sorting 
                }
            //sortng menurun 
            }else if(urut == 'd'){
                //proses sorting berdasarkan nilai desimal dari input pecahan
                if(data[i].desimal < data[i+1].desimal){
                    //proses menukar posisi isi indeks
                    temp = data[i].pembilang;
                    data[i].pembilang = data[i+1].pembilang;
                    data[i+1].pembilang = temp;
                    temp2 = data[i].penyebut;
                    data[i].penyebut = data[i+1].penyebut;
                    data[i+1].penyebut = temp2;
                    temp3 = data[i].desimal;
                    data[i].desimal = data[i+1].desimal;
                    data[i+1].desimal = temp3;
                    swap = 1;
                }
            }
        }
        //looping akan terus berlangsung, akan berhenti jika swap == 0 
    }while(swap == 1);
}//prosedur untuk sorting dengan metode bubble sort
void qs(pecahan data[], int left, int right){
    int i = left;//pivot kiri
    int j = right;//pivot kanan
    //variabel untuk menampung nilai sementara dari bungkusan
    float temp = data[i].pembilang; 
    float temp2 = data[i].penyebut;
    float temp3 = data[i].desimal;
    //basis
    if(left < right){
        //proses mensorting nilaii bungskusan dengan metode quick sort
        while(i<j){
            //proses mensorting berdasarkan nilai desimal
            //urut menurun
            if(urut == 'd'){
                while(data[j].desimal < temp3 && i<j){
                    j--;
                }
                //urut menanjak
            }else if(urut == 'a'){
                while(data[j].desimal > temp3 && i<j){
                    j--;
                }
            }
            //proses menukar isi indeks
            data[i].pembilang = data[j].pembilang;
            data[i].penyebut = data[j].penyebut;
            data[i].desimal = data[j].desimal;
            //urut menurun
            if(urut == 'd'){
                while(data[i].desimal > temp3 && i<j){
                    i++;
                }
                //urut menanjak
            }else if(urut == 'a'){
                while(data[i].desimal < temp3 && i<j){
                    i++;
                }
            }
            data[j].pembilang = data[i].pembilang;
            data[j].penyebut = data[i].penyebut;
            data[j].desimal = data[i].desimal;
        }
        data[i].pembilang = temp;
        data[i].penyebut = temp2;
        data[i].desimal = temp3;
        //proses rekursif
        qs(data, left, i-1);
        qs(data, j+1, right);
    }
}//prosedur untuk sorting dengan metode quick sort pivot pinggir
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 5 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/