#include "header.h"

int a=0;
int b=0;
int c=0;
int d=0;
int e=0;

void mesin(char nama[], int nilai){
    int n, i, j;
    if(nilai>=90 && nilai<=100){
        strcpy(inputa[a].nama, nama);
        inputa[a].nilai=nilai;
        a++;
    }
    else if(nilai>=80 && nilai<=89){
        strcpy(inputb[b].nama, nama);
        inputb[b].nilai=nilai;
        b++;
    }
    else if(nilai>=70 && nilai<=79){
        strcpy(inputc[c].nama, nama);
        inputc[c].nilai=nilai;
        c++;
    }
    else if(nilai>=60 && nilai<=69){
        strcpy(inputd[d].nama, nama);
        inputd[d].nilai=nilai;
        d++;
    }
    else if(nilai<60){
        strcpy(inpute[e].nama, nama);
        inpute[e].nilai=nilai;
        e++;
    }
}

void hasil(){

    printf(">>> A\n");
    int i;
    for(i=0; i<a; i++){
        printf("%d. %s\n", i+1, inputa[i].nama);
    }
    if(a==0){
        printf("Tidak ada data.\n");
    }
    printf(">>> B\n");
    for(i=0; i<b; i++){
        printf("%d. %s\n", i+1, inputb[i].nama);
    }
    if(b==0){
        printf("Tidak ada data.\n");
    }
    printf(">>> C\n");
    for(i=0; i<c; i++){
        printf("%d. %s\n", i+1, inputc[i].nama);
    }
    if(c==0){
        printf("Tidak ada data.\n");
    }
    printf(">>> D\n");
    for(i=0; i<d; i++){
        printf("%d. %s\n", i+1, inputd[i].nama);
    }
    if(d==0){
        printf("Tidak ada data.\n");
    }
    printf(">>> E\n");
    for(i=0; i<e; i++){
        printf("%d. %s\n", i+1, inpute[i].nama);
    }
    if(e==0){
        printf("Tidak ada data.\n");
    }

}