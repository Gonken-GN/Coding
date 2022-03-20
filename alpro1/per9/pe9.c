#include "pem.h"
int main (){
    char masukan[50];
    int n;
    scanf("%s", &masukan);
    scanf("%d", &n);
    int arr[n];
    hasil = 0;
    int  i = 0;
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    tambah(n, arr);
    tampil(masukan);
    return 0;
}