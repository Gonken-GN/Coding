#include "header.h"
int main (){
    int n, m, i;
    //variabel untuk menampung input
    char input1[100], input2[100], start[100];
    scanf("%d", &n);
    stack S[n];//stack untuk menampung pakaian
    stack all;//stack untuk menampung semua pakain (sementara)
    int iteratorS[n];
    int coba[n];
    createEmpty(&all);
    //proses input dan memasukkan input kedalam elemen berdasarkan bahan pakaian
    for(i=0;i<n;i++){
        createEmpty(&S[i]);
        scanf("%s", &start);
        do{
            scanf("%s", &input1);
            if(strcmp(input1, "0") != 0){
                scanf(" %s", &input2);
                push(input1, input2, &S[i]);
            }
        }while(strcmp(input1, "0") != 0);
    }
    //proses memasukkan nama orang yg akan dikeluarkan dalam stack
    scanf("%d", &m);
    for(i=0;i<m;i++){
        scanf("%s", &clear[i]);
    }
    //proses mengubah data pada stack berdasarkan bahan pakaian dan stack semetnara, sekaligus menampilkan isi dari stack berdasarkan jenis pakaian
    for(i=0;i<n;i++){
        ambil(&S[i], &all, m, iteratorS[i]);
        printf("stack %d:\n", i+1);
        printelemen(S[i]);
        //sementara(S[i], &all, m);
        printf("\n");
    }
    printf("Batas stack\n");
    printelemen(all);
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Kuis2 dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/






  










