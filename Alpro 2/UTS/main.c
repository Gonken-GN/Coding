#include "header.h"
int main (){
    int i, j;//iterator
    int n, m, k;//variabel untuk menyimpan berapa banyak isi array
    char urut[100];//variiabel untuk menampung input user
    scanf("%s", urut);//meminta user untuk memilih metode sorting
    char negara1[100];
    scanf("%s", &negara1);
    scanf("%d", &n);
    data pertama[n];//deklarasi data terstruktur untuk negara pertama sebanyak n
    //proses memasukkan data input untuk negara pertama
    for(i=0;i<n;i++){
        scanf("%s %d %d %d", &pertama[i].nama, &pertama[i].kalor1, &pertama[i].kalor2, &pertama[i].ribuan);
        pertama[i].desi = (((pertama[i].kalor1)*100) / pertama[i].kalor2);//mencari nilai desimal
        strcpy(pertama[i].country, negara1);
    }
    char negara2[100];
    scanf("%s", &negara2);
    scanf("%d", &m);
    data dua[m];//deklarasi data terstruktur untuk negara kedua sebanyak m
    //proses memasukkan data input untuk negara kedua
    for(i=0;i<m;i++){
        scanf("%s %d %d %d", &dua[i].nama, &dua[i].kalor1, &dua[i].kalor2, &dua[i].ribuan);
        dua[i].desi = ((dua[i].kalor1*100) / dua[i].kalor2); 
        strcpy(dua[i].country, negara2);
    }
    char negara3[100];
    scanf("%s", &negara3);
    scanf("%d", &k);
    data tiga[k];//deklarasi data terstruktur untuk negara ketiga sebanyak k
    //proses memasukkan data input negara ketiga
    for(i=0;i<k;i++){
        scanf("%s %d %d %d", &tiga[i].nama, &tiga[i].kalor1, &tiga[i].kalor2, &tiga[i].ribuan);
        tiga[i].desi = (tiga[i].kalor1*100) / tiga[i].kalor2;
        strcpy(tiga[i].country, negara3);
    }
    //proses mensorting
    if(strcmp(urut, "is") == 0){
        //sorting dengan metode insertion sort
        insert(pertama, n);
        insert(dua, m);
        insert(tiga, k);
    }else if(strcmp(urut, "ss") == 0){
        //sorting dengan metode selecton sort
        selec(pertama, n);
        selec(dua, m);
        selec(tiga, k);
    }else if(strcmp(urut, "bs") == 0){
        //sorting dengan metode bubble sort
        buble(pertama, n);
        buble(dua, m);
        buble(tiga, k);
    }else if(strcmp(urut, "qs") == 0){
        //sortiing dengan metode quick sort
        quick(pertama, 0, n-1);
        quick(dua, 0, m-1);
        quick(tiga, 0, k-1);
    }
    printf("Per Negara:\n");
    printf("%s:\n", negara1);
    //variabel untuk mengececk apakah nilai tersebut desimal atau tidak untuk negara pertama
    int depan;
    int cek;
    //proses menampilkan data untuk negara pertama yang telah disorting
    for(i=0;i<n;i++){
        pertama[i].desi = pertama[i].desi / 100;
        depan = pertama[i].desi;
        cek= (pertama[i].desi * 100) - (depan*100);
        //proses untuk mengetahui apakah variabel desi memliiki nilai desimal atau tidak
        if(cek % 100 == 0){
            printf("- %s %d %d %d - %0.0f\n", pertama[i].nama, pertama[i].kalor1, pertama[i].kalor2, pertama[i].ribuan, pertama[i].desi);
        }else{
            printf("- %s %d %d %d - %0.2f\n", pertama[i].nama, pertama[i].kalor1, pertama[i].kalor2, pertama[i].ribuan, pertama[i].desi);
        }
    }
    printf("\n%s:\n", negara2);
    //variabel untuk mengececk apakah nilai tersebut desimal atau tidak untuk negara kedua
    int depan2;
    int cek2;
     //proses menampilkan data untuk negara kedua yang telah disorting
    for(i=0;i<m;i++){
        dua[i].desi = dua[i].desi / 100;
        depan2 = dua[i].desi;
        cek2 = (dua[i].desi * 100) - (depan2*100);
        //proses untuk mengetahui apakah variabel desi memliiki nilai desimal atau tidak
        if(cek2 % 100 == 0){
            printf("- %s %d %d %d - %0.0f\n", dua[i].nama, dua[i].kalor1, dua[i].kalor2, dua[i].ribuan, dua[i].desi);
        }else{
            printf("- %s %d %d %d - %0.2f\n", dua[i].nama, dua[i].kalor1, dua[i].kalor2, dua[i].ribuan, dua[i].desi);
        }
    }
    printf("\n%s:\n", negara3);
    int depan3;
    int cek3;
    //proses menampilkan data untuk negara pertama yang telah disorting untuk negara ketiga
    for(i=0;i<k;i++){
        tiga[i].desi = tiga[i].desi/ 100;
        depan3 = tiga[i].desi;
        cek3 = (tiga[i].desi * 100) - (depan3*100);
        //proses untuk mengetahui apakah variabel desi memliiki nilai desimal atau tidak
        if(cek3 % 100 == 0){
            printf("- %s %d %d %d - %0.0f\n", tiga[i].nama, tiga[i].kalor1, tiga[i].kalor2, tiga[i].ribuan, tiga[i].desi);
        }else{
            printf("- %s %d %d %d - %0.2f\n", tiga[i].nama, tiga[i].kalor1, tiga[i].kalor2, tiga[i].ribuan, tiga[i].desi);
        }
    }
    data merge1[n+m];//deklarasi data terstruktur untuk menyimpan array gabungan dari negara pertama dan kkedua
    data merge2[n+m+k];//deklarasi data terstruktur untuk menyimpan array gabungan dari negara (pertam+kedua) dan ketiga
    gabung(n, m, pertama, dua, merge1);//proses menggabungkan array negara pertama dan kedua
    gabung(n+m, k, merge1, tiga, merge2);//proses menggabungkan array negara (pertama+kedua) dan ketiga
    //varibel untuk menyimpan nilai cek desimal atau tidak untuk array gabungan ke tiga
    int depan4;
    int cek4;
    printf("\nSemua:\n");
    //proses menampilkan data untuk array yang telah digabung
    for(i=0;i<(n+m+k);i++){
        depan4 = merge2[i].desi;
        cek4 = (merge2[i].desi * 100) - (depan4*100);
        if(cek4 % 100 == 0){
            printf("- %s %s %d %d %d - %0.0f\n", merge2[i].country, merge2[i].nama, merge2[i].kalor1, merge2[i].kalor2, merge2[i].ribuan, merge2[i].desi);
        }else{
            printf("- %s %s %d %d %d - %0.2f\n", merge2[i].country, merge2[i].nama, merge2[i].kalor1, merge2[i].kalor2, merge2[i].ribuan, merge2[i].desi);
        }
    }
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Ujian Tengah Semester (UTS) dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/