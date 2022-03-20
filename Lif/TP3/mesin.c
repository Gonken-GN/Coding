#include "header.h"

void fib(int n, int m, int* arr, int awal, int beda, int a) {
    if(a == 0) { 
        arr[a] = awal; //jika index = 0, masukkan awal ke matriks index 0
        fib(n, m, arr, awal, beda, a+1); //balikkan nilai fungsi
    } else if(a == 1) {
        arr[a] = awal + beda; //jika index = 1, nilai = awal + beda
        beda = beda + awal; //nilai beda ditambah awal
        fib(n, m, arr, awal, beda, a+1); //balikkan nilai fungsi
    } else {
        if(a < n*m) {
            arr[a] = arr[a-1] + beda; //untuk index lebih kecil dari luas matriks, nilai matriks = nilai matriks index sebelumnya ditambah beda
            beda = beda + arr[a-1]; //nilai beda ditambah nilai matriks index sebelumnya
            fib(n, m, arr, awal, beda, a+1); //balikkan nilai fungsi
        }
    }
}

void cek(int n, int m, int banding[n][100], int arr[n*m]) {
    int i, j;
    int x = 0;

    printf("Matriks Pembanding:\n");

    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(banding[i][j] <= arr[x]) {   //--------|
                printf(":D");               //        |  
                if(j < m-1) {               //        |
                    printf(" ");            //        |
                }                           //        |
                x++;                        //        |       prosedur cek apakah nilai matriks
            } else {                        //        |------>pembanding lebih besar atau lebih 
                printf("D:");               //        |       kecil dari matriks fibonacci
                if(j < m-1) {               //        |
                    printf(" ");            //        |
                }                           //        |
                x++;                        //        |
            }                               //--------|
        }
        printf("\n");
    }
}