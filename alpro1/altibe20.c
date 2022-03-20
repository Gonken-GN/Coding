#include <stdio.h>

/*Saya Novaldi Sandi Ago 2003941
mengerjakan Soal altibe20 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

int main(){
    int i, j, n;
    scanf("%d", &n);//penginputan banyak karakter
	char A[n];
    int B[n];
    int M = 0;
    for(i = 0; i < n; i++){
    	scanf(" %c", &A[i]);
    }//penginoutan karakter
    for(i = 0; i < n; i++){
        for(j = n - (i + 1); j > 0; j--){
            printf(" ");
        }
        for(j = 0; j < i; j++){
           printf("%c", A[j]);
        }
        for(j = 0; j < i; j++){
           printf("%c", A[j]);
        }
        for(j = (n * 2) - 1 - (i * 2); j > 0; j--){
           printf("%c", A[i]);
        }
        for(j = 0; j < i; j++){
           printf("%c", A[i - j - 1]);
        }
        for(j = 0; j < i; j++){
           printf("%c", A[i - j - 1]);
        }
        printf("\n");
    }//pembuatan bagian atas
    for(i = 0; i < (n - 1); i++){
        for(j = 0; j < (i + 1); j++){
            printf(" ");
        }
        for(j = (n - i - 2); j > 0; j--){
           printf("%c", A[n - i - 2 - j]);
        }
        for(j = (n - i - 2); j > 0; j--){
           printf("%c", A[n - i - 2 - j]);
        }
        for(j = 0; j < (i * 2) + 3; j++){
           printf("%c", A[n - i - 2]);
        }
        for(j = (n - i - 2); j > 0; j--){
           printf("%c", A[j - 1]);
        }
        for(j = (n - i - 2); j > 0; j--){
           printf("%c", A[j - 1]);
        }
        printf("\n");
    }//pembuatan bagian bawah
    for(i = 0; i < n; i++){
        B[i] = A[i] - 96;
        M = M + B[i];
    }//penjumlahan semua huruf
    if(M % 2 == 0){
        printf("halo loki.\n");
    }
    else{
        printf("good bye my friend.\n");
    }//kondisi ganjil genap
	return 0;
}