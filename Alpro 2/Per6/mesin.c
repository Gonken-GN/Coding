#include "header.h"
void insert(test arr[], int banyak){
    int sisip;
    char sisip2[100];
    int i, j;
    for(i=0;i<banyak;i++){
        strcpy(sisip2, arr[i].input);
        sisip = arr[i].konso;
        j = i-1;
        while(j >= 0 && sisip > arr[j].konso){
            strcpy(arr[j+1].input, arr[j].input);
            arr[j+1].konso = arr[j].konso;
            j--;
        }
        strcpy(arr[j+1].input, sisip2);
        arr[j+1].konso = sisip;
    }
}
void selec(test arr[], int banyak){
    char sisip2[100];
    int sisip;
    int min;
    int i, j;
    for(i=0;i<banyak-1;i++){
        min = i;
        for(j=i+1;j<banyak;j++){
            if(arr[min].konso < arr[j].konso){
                min = j;
            }
        }
        strcpy(sisip2, arr[i].input);
        strcpy(arr[i].input, arr[min].input);
        strcpy(arr[min].input, sisip2);
        sisip = arr[i].konso;
        arr[i].konso = arr[min].konso;
        arr[min].konso = sisip;
    }
}
void buble(test arr[], int banyak){
    int i, pindah, temp;
    char temp2[100];
    do{
        pindah = 0;
        for(i=0;i<banyak-1;i++){
            if(arr[i].konso < arr[i+1].konso){
                strcpy(temp2, arr[i].input);
                strcpy(arr[i].input, arr[i+1].input);
                strcpy(arr[i+1].input, temp2);
                temp = arr[i].konso;
                arr[i].konso = arr[i+1].konso;
                arr[i+1].konso = temp;
                pindah = 1;
            }
        }
    }while(pindah == 1);
}
void quick(test arr[], int left, int right){
    int i, j, temp;
    char temp2[100];
    i = left;
    j = right;

    do {
        while((arr[i].konso < arr[right].konso) && (i <= j)) {
            i++;
        }

        while((arr[j].konso > arr[left].konso) && (i <= j)) {
            j--;
        }

        if(i<j) {
            temp = arr[i].konso;
            arr[i].konso =  arr[j].konso;
            arr[j].konso =  temp;
            strcpy(temp2, arr[i].input);
            strcpy(arr[i].input, arr[j].input);
            strcpy(arr[j].input, temp2);
            i++;
            j--;
        }
    } while (i<j);

    if(left<j) {
        quick(arr, left,j);
    }
    if(i<right) {
        quick(arr, i, right);
    }
}
void gabung(int banyak, int banyak2, test arr1[], test arr2[], test baru[]){
    int i = 0, j = 0, k = 0, l = 0;
    while((i<banyak) && (j<banyak2)){
        if(arr1[i].konso > arr2[j].konso){
            baru[k].konso = arr1[i].konso;
            strcpy(baru[k].input, arr1[i].input);
            i++;
            k++;
        }else if(arr2[j].konso > arr1[i].konso){
            baru[k].konso = arr2[j].konso;
            strcpy(baru[k].input, arr2[j].input);
            j++;
            k++;
        }else{
            baru[k].konso = arr1[i].konso;
            strcpy(baru[k].input, arr1[i].input);
            i++;
            k++;
            baru[k].konso = arr2[j].konso;
            strcpy(baru[k].input, arr2[j].input);
            j++;
            k++;
        }
    }
    if(i< banyak){
        for(l=i;l<banyak;l++){
            baru[k].konso = arr1[l].konso;
            strcpy(baru[k].input, arr1[l].input);
            k++;
        }
    }
    if(j<banyak2){
        for(l=j;l<banyak2;l++){
             baru[k].konso = arr2[l].konso;
            strcpy(baru[k].input, arr2[l].input);
            k++;
        }
    }
}