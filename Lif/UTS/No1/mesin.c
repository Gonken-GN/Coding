#include "header.h"

void InsertionSort(out arr[], int num, char jenis[]) {
    int i, j, key, temp1;
    char temp2[100], temp3[100];

    for(i=0;i<num;i++) {
            key = arr[i].harga;
            temp1 = arr[i].netto;
            strcpy(temp2, arr[i].merk);
            strcpy(temp3, arr[i].jenis);
            j = i - 1;
            
            while(j>=0 && key*arr[j].netto < temp1*arr[j].harga) {
                arr[j+1].harga = arr[j].harga;
                arr[j+1].netto = arr[j].netto;
                strcpy(arr[j+1].merk, arr[j].merk);
                strcpy(arr[j+1].jenis, arr[j].jenis);
                j = j - 1;
            }
            arr[j+1].harga = key;
            arr[j+1].netto = temp1;
            strcpy(arr[j+1].merk, temp2);
            strcpy(arr[j+1].jenis, temp3);
    }
}

void SelectionSort(int num, out arr[]) {
    int i, temp, temp2, minIndeks, j;
    char temp3[100], temp4[100];

    for(i=0;i<num-1;i++) {
        minIndeks = i;
        for(j=i+1;j<num;j++) {
            if(arr[minIndeks].harga*arr[j].netto > arr[j].harga*arr[minIndeks].netto) {
                minIndeks = j;
            }
        }
        temp = arr[i].harga;
        arr[i].harga = arr[minIndeks].harga;
        arr[minIndeks].harga = temp;
        temp2 = arr[i].netto;
        arr[i].netto = arr[minIndeks].netto;
        arr[minIndeks].netto = temp2;
        strcpy(temp3, arr[i].merk);
        strcpy(arr[i].merk, arr[minIndeks].merk);
        strcpy(arr[minIndeks].merk, temp3);
        strcpy(temp4, arr[i].jenis);
        strcpy(arr[i].jenis, arr[minIndeks].jenis);
        strcpy(arr[minIndeks].jenis, temp4);
    }
}

void BubbleSort(out arr[], int num) {
    int i, pindah;
    do{
        pindah = 0;
        for(i=0;i<num-1;i++) {
            if(arr[i].harga*arr[i+1].netto>arr[i+1].harga*arr[i].netto) {
                out temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                pindah = 1;
            }
        }
    } while (pindah == 1);
}

void QuickSort(out arr[], int kiri, int kanan) {
    int i, j, temp ,temp1, pivot = arr[kiri].harga*arr[kanan].netto;
    char temp2[100];
    char temp3[100];
    i = kiri;
    j = kanan;

        do {
            while(arr[i].harga*arr[j].netto < pivot) {
                i++;
            }

            while(arr[j].harga*arr[i].netto > pivot) {
                j--;
            }

            if(i<=j) {
                temp = arr[i].harga;
                arr[i].harga = arr[j].harga;
                arr[j].harga = temp;
                temp1 = arr[i].netto;
                arr[i].netto = arr[j].netto;
                arr[j].netto = temp1;
                strcpy(temp2, arr[i].merk);
                strcpy(arr[i].merk, arr[j].merk);
                strcpy(arr[j].merk, temp2);
                strcpy(temp3, arr[i].jenis);
                strcpy(arr[i].jenis, arr[j].jenis);
                strcpy(arr[j].jenis, temp3);
                i++;
                j--;
            }
        } while (i<=j);

        if(kiri<j) {
            QuickSort(arr, kiri, j);
        }
        if(i<kanan) {
            QuickSort(arr, i, kanan);
        }
}

void Merge(int n, out arrx[], int m, out arry[], out hasil[]) {
    int i = 0, j = 0, k = 0, l = 0;

    while ((i<n) && (j<m)) {
        if(arrx[i].harga*arry[j].netto < arry[j].harga*arrx[i].netto) {
            hasil[k] = arrx[i];
            i++;
            k++;
        } else {
            hasil[k] = arry[j];
            j++;
            k++;
        }
    }

    if(i<n) {
        for(l=i;l<n;l++) {
            hasil[k] = arrx[l];
            k++;
        }
    }

    if(j<m) {
        for(l=j;l<m;l++) {
            hasil[k] = arry[l];
            k++;
        }
    }
}