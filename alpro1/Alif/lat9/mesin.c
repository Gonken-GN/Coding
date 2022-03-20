#include "io.h"
void cek(int n, char str[n][100], int arr[n]){
    int i, a = 0, b = 0, c = 0, d = 0, e = 0;
    char tampung[10][100];
    char tampung2[10][100];
    char tampung3[10][100];
    char tampung4[10][100];
    char tampung5[10][100];
    for(i=0;i<n;i++){
        if(arr[i] <= 100 && arr[i] >= 90){
            strcpy(tampung[a], str[i]);
            a++;
        } else if(arr[i] <= 89 && arr[i] >= 80){
            strcpy(tampung2[b], str[i]);
            b++;
        } else if(arr[i] <= 79 && arr[i] >= 70){
            strcpy(tampung3[c], str[i]);
            c++;
        }else if(arr[i] <= 69 && arr[i] >= 60){
            strcpy(tampung4[d], str[i]);
            d++;
        }else{
            strcpy(tampung5[e], str[i]);
            e++;
        }
    }
    printf(">>> A\n");
    for(i=0;i<a;i++){
        printf("%d. %s\n", i+1, tampung[i]);
    }
    if(a == 0){
        printf("Tidak ada data.\n");
    }
    printf(">>> B\n");
    for(i=0;i<b;i++){
        printf("%d. %s\n", i+1, tampung2[i]);
    }
    if(b == 0){
        printf("Tidak ada data.\n");
    }
    printf(">>> C\n");
    for(i=0;i<c;i++){
        printf("%d. %s\n", i+1, tampung3[i]);
    }
    if(c == 0){
        printf("Tidak ada data.\n");
    }
    printf(">>> D\n");
    for(i=0;i<d;i++){
        printf("%d. %s\n", i+1, tampung4[i]);
    }
    if(d == 0){
        printf("Tidak ada data.\n");
    }
    printf(">>> E\n");
    for(i=0;i<e;i++){
        printf("%d. %s\n", i+1, tampung5[i]);
    }
    if(e == 0){
        printf("Tidak ada data.\n");
    }
}