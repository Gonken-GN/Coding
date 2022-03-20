#include "header.h"

void InsertionSort(int arr[], int num) {
    int i, j, key;
    char temp3[100];

    for(i=0;i<num;i++) {
        key = arr[i];
        j = i - 1;
        
        while(j>=0 && key < arr[j]) {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}

void SelectionSort(int num, int arr[]) {
    int n, i, temp, temp2, temp3, temp4, minIndeks, j;
    char temp5[100];

    for(i=0;i<num-1;i++) {
        minIndeks = i;
        for(j=i+1;j<num;j++) {
            if(arr[minIndeks] > arr[j]) {
                minIndeks = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndeks];
        arr[minIndeks] = temp;
    }
}

void BubbleSort(int arr[], int num) {
    int i, temp, pindah;
  

        do{
            pindah = 0;
            for(i=0;i<num-1;i++) {
                if(arr[i]>arr[i+1]) {
                    temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                    pindah = 1;
                }
            }
        } while (pindah == 1);
}

void QuickSort(int arr[], int kiri, int kanan) {
    int i, j, temp, pivot = arr[kiri];
    i = kiri;
    j = kanan;

        do {
            while(arr[i] < pivot) {
                i++;
            }

            while(arr[j] > pivot) {
                j--;
            }

            if(i<=j) {
                temp = arr[i];
                arr[i] =  arr[j];
                arr[j] =  temp;
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

void Merge(int n, int m, int arr1[], int arr2[], int arr3[]) {
    int i = 0, j = 0, k = 0, l = 0;

    while ((i<n) && (j<m)) {
        if(arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
            k++;
        } else if (arr2[j] < arr1[i]) {
            arr3[k] =  arr2[j];
            j++;
            k++;
        } else {
            arr3[k] = arr1[i];
            i++;
            k++;

            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    if(i<n) {
        for(l=i;l<n;l++) {
            arr3[k] = arr1[l];
            k++;
        }
    }

    if(j<m) {
        for(l=j;l<m;l++) {
            arr3[k] = arr2[l];
            k++;
        }
    }
}