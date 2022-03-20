#include "header.h"

void insert(var arr[], int num) {
    int i, j;
    var key;

    for(i=0;i<num;i++) {
        key = arr[i];
        j = i - 1;
        while(j>=0 && key.panjang < arr[j].panjang) {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        while(j>=0 && key.panjang == arr[j].panjang && key.ascii > 96 && arr[j].ascii < 91 && arr[j].ascii + 32 == key.ascii && key.ascii < arr[j].ascii) {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        while(j>=0 && key.panjang == arr[j].panjang && key.ascii > 96 && arr[j].ascii < 91 && key.ascii > arr[j].ascii) {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        while(j>=0 && key.panjang == arr[j].panjang && key.ascii > 96 && arr[j].ascii > 96 && key.ascii < arr[j].ascii) {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        while(j>=0 && key.panjang == arr[j].panjang && key.ascii < 91 && arr[j].ascii < 91 && key.ascii < arr[j].ascii) {
            arr[j+1] = arr[j];
            j = j + 1;
        }
        arr[j+1] = key;
    }
}

void select(var arr[], int num) {
    int n, i, j, minIndeks;
    var temp;

        for(i=0;i<num-1;i++) {
            minIndeks = i;
            for(j=i+1;j<num;j++) {
                if(arr[minIndeks].panjang > arr[j].panjang) {
                    minIndeks = j;
                } else if(arr[minIndeks].panjang == arr[j].panjang && arr[minIndeks].ascii > 96 && arr[j].ascii < 91 && arr[j].ascii + 32 == arr[minIndeks].ascii && arr[minIndeks].ascii < arr[j].ascii) {
                    minIndeks = j;
                } else if(arr[minIndeks].panjang == arr[j].panjang && arr[minIndeks].ascii > 96 && arr[j].ascii < 91 && arr[minIndeks].ascii > arr[j].ascii) {
                    minIndeks = j;
                } else if(arr[minIndeks].panjang == arr[j].panjang && arr[minIndeks].ascii > 96 && arr[j].ascii > 96 && arr[minIndeks].ascii > arr[j].ascii) {
                    minIndeks = j;
                } else if(arr[minIndeks].panjang == arr[j].panjang && arr[minIndeks].ascii < 91 && arr[j].ascii < 91 && arr[minIndeks].ascii > arr[j].ascii) {
                    minIndeks = j;
                }
            }
            temp = arr[i];
            arr[i] = arr[minIndeks];
            arr[minIndeks] = temp;
        }
}

void bubble(var arr[], int num) {
    int i, pindah;
    var temp;
        do{
            pindah = 0;
            for(i=0;i<num-1;i++) {
                if(arr[i].panjang > arr[i+1].panjang) {
                    temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                    pindah = 1;
                } else if (arr[i].panjang == arr[i+1].panjang && arr[i].ascii > 96 && arr[i+1].ascii < 91 && arr[i+1].ascii + 32 == arr[i].ascii && arr[i].ascii < arr[i+1].ascii) {
                    temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                    pindah = 1;
                } else if (arr[i].panjang == arr[i+1].panjang && arr[i].ascii > 96 && arr[i+1].ascii < 91 && arr[i].ascii > arr[i+1].ascii) {
                    temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                    pindah = 1;
                } else if (arr[i].panjang == arr[i+1].panjang && arr[i].ascii > 96 && arr[i+1].ascii > 96 && arr[i].ascii > arr[i+1].ascii) {
                    temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                    pindah = 1;
                } else if (arr[i].panjang == arr[i+1].panjang && arr[i].ascii < 91 && arr[i+1].ascii < 91 && arr[i].ascii > arr[i+1].ascii) {
                    temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                    pindah = 1;
                }
            }
        } while (pindah == 1);
}

void quick(var arr[], int kiri, int kanan) {
    int i, j;
    var temp;
    var pivot;
    i = kiri;
    j = kanan;

        do {
                pivot.panjang = arr[kiri].panjang;
                pivot.ascii = arr[kiri].ascii;

                while(arr[i].panjang < pivot.panjang) {
                    i++;
                }
                while(arr[j].panjang > pivot.panjang) {
                    j--;
                }

                while(arr[i].panjang == pivot.panjang && arr[i].ascii > 96 && pivot.ascii < 91 && pivot.ascii + 32 == arr[i].ascii && arr[i].ascii < pivot.ascii) {
                    i++;
                }
                while(arr[j].panjang == pivot.panjang && arr[j].ascii > 96 && pivot.ascii < 91 && pivot.ascii + 32 == arr[j].ascii && arr[j].ascii > pivot.ascii) {
                    j--;
                }

                while(arr[i].panjang == pivot.panjang && arr[i].ascii > 96 && pivot.ascii < 91 && arr[i].ascii > pivot.ascii) {
                    i++;
                }
                while(arr[j].panjang == pivot.panjang && arr[j].ascii > 96 && pivot.ascii < 91 && arr[j].ascii < pivot.ascii) {
                    j--;
                }

                while(arr[i].panjang == pivot.panjang && arr[i].ascii > 96 && pivot.ascii > 96 && arr[i].ascii < pivot.ascii) {
                    i++;
                }
                while(arr[j].panjang == pivot.panjang && arr[j].ascii > 96 && pivot.ascii > 96 && arr[j].ascii > pivot.ascii) {
                    j--;
                }

                while(arr[i].panjang == pivot.panjang && arr[i].ascii < 91 && pivot.ascii < 91 && arr[i].ascii < pivot.ascii) {
                    i++;
                }
                while(arr[j].panjang == pivot.panjang && arr[j].ascii < 91 && pivot.ascii < 91 && arr[j].ascii > pivot.ascii) {
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
            quick(arr, kiri, j);
        }
        if(i<kanan) {
            quick(arr, i, kanan);
        }
}

void merge(var arr_a[], var arr_b[], int n, int m, var arr_c[]) {
    int i = 0, j = 0, k = 0, l = 0;
    while((i < n) && (j < m)){
        if(arr_a[i].panjang < arr_b[j].panjang){
            arr_c[k] = arr_a[i];
            i++; k++;
        } else if(arr_a[j].panjang < arr_b[i].panjang){
            arr_c[k] = arr_b[j];
            j++; k++;
        } else {
            arr_c[k] = arr_a[i];
            i++; k++;
            arr_c[k] = arr_b[j];
            j++; k++;
        }

        if(arr_a[i].panjang == arr_b[j].panjang && arr_a[i].ascii > 96 && arr_b[j].ascii < 91 && arr_b[j].ascii + 32 == arr_a[i].ascii && arr_a[i].ascii < arr_b[j].ascii) {
            arr_c[k] = arr_a[i];
            i++; k++;
        } else if(arr_a[j].panjang == arr_b[i].panjang && arr_a[j].ascii > 96 && arr_b[i].ascii < 91 && arr_b[j].ascii + 32 == arr_a[i].ascii && arr_a[j].ascii < arr_b[i].ascii){
            arr_c[k] = arr_b[j];
            j++; k++;
        } else {
            arr_c[k] = arr_a[i];
            i++; k++;
            arr_c[k] = arr_b[j];
            j++; k++;
        }

        if(arr_a[i].panjang == arr_b[j].panjang && arr_a[i].ascii > 96 && arr_b[j].ascii < 91 && arr_a[i].ascii < arr_b[j].ascii) {
            arr_c[k] = arr_a[i];
            i++; k++;
        } else if(arr_a[j].panjang == arr_b[i].panjang && arr_a[j].ascii > 96 && arr_b[i].ascii < 91 && arr_a[j].ascii < arr_b[i].ascii){
            arr_c[k] = arr_b[j];
            j++; k++;
        } else {
            arr_c[k] = arr_a[i];
            i++; k++;
            arr_c[k] = arr_b[j];
            j++; k++;
        }

        if(arr_a[i].panjang == arr_b[j].panjang && arr_a[i].ascii > 96 && arr_b[j].ascii > 96 && arr_a[i].ascii < arr_b[j].ascii) {
            arr_c[k] = arr_a[i];
            i++; k++;
        } else if(arr_a[j].panjang == arr_b[i].panjang && arr_a[j].ascii > 96 && arr_b[i].ascii > 96 && arr_a[j].ascii < arr_b[i].ascii){
            arr_c[k] = arr_b[j];
            j++; k++;
        } else {
            arr_c[k] = arr_a[i];
            i++; k++;
            arr_c[k] = arr_b[j];
            j++; k++;
        }

        if(arr_a[i].panjang == arr_b[j].panjang && arr_a[i].ascii < 91 && arr_b[j].ascii < 91 && arr_a[i].ascii < arr_b[j].ascii) {
            arr_c[k] = arr_a[i];
            i++; k++;
        } else if(arr_a[j].panjang == arr_b[i].panjang && arr_a[j].ascii < 91 && arr_b[i].ascii < 91 && arr_a[j].ascii < arr_b[i].ascii){
            arr_c[k] = arr_b[j];
            j++; k++;
        } else {
            arr_c[k] = arr_a[i];
            i++; k++;
            arr_c[k] = arr_b[j];
            j++; k++;
        }
    }
}
