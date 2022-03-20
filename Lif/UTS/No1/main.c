#include "header.h"

int main () {

    char method;
    int i, a, b, c;
    char jenis[100];

    scanf(" %c", &method);
    scanf("%s", jenis);

    scanf("%d", &a);
    churros arr1[a];
    int a1 = 0;
    for(i=0;i<a;i++) {
        scanf("%d %d %s %s", &arr1[i].netto, &arr1[i].harga, arr1[i].merk, arr1[i].jenis);
        if(strcmp(arr1[i].jenis, jenis) == 0) {
            a1++;
        }
    }

    out arr_a[a1];
    int x = 0;

    for(i=0;i<a;i++) {
        if(strcmp(arr1[i].jenis, jenis) == 0) {
            arr_a[x].netto = arr1[i].netto;
            arr_a[x].harga = arr1[i].harga;
            strcpy(arr_a[x].merk, arr1[i].merk);
            strcpy(arr_a[x].jenis, arr1[i].jenis);
            x++;  
        }
    } 

    if(method == 'i') {
        InsertionSort(arr_a, a1, jenis);
    } else if(method == 's') {
        SelectionSort(a1, arr_a);
    } else if(method == 'b') {
        BubbleSort(arr_a, a1);
    } else if(method == 'q') {
        QuickSort(arr_a, 0, a1-1);
    }

    scanf("%d", &b);
    churros arr2[b];
    int a2 = 0;
    for(i=0;i<b;i++) {
        scanf("%d %d %s %s", &arr2[i].netto, &arr2[i].harga, arr2[i].merk, arr2[i].jenis);
        if(strcmp(arr2[i].jenis, jenis) == 0) {
            a2++;
        }
    }

    out arr_b[a2];
    x = 0;

    for(i=0;i<b;i++) {
        if(strcmp(arr2[i].jenis, jenis) == 0) {
            arr_b[x].netto = arr2[i].netto;
            arr_b[x].harga = arr2[i].harga;
            strcpy(arr_b[x].merk, arr2[i].merk);
            strcpy(arr_b[x].jenis, arr2[i].jenis);
            x++;  
        }
    } 

    if(method == 'i') {
        InsertionSort(arr_b, a2, jenis);
    } else if(method == 's') {
        SelectionSort(a2, arr_b);
    } else if(method == 'b') {
        BubbleSort(arr_b, a2);
    } else if(method == 'q') {
        QuickSort(arr_b, 0, a2-1);
    }

    scanf("%d", &c);
    churros arr3[c];
    int a3 = 0;
    for(i=0;i<c;i++) {
        scanf("%d %d %s %s", &arr3[i].netto, &arr3[i].harga, arr3[i].merk, arr3[i].jenis);
        if(strcmp(arr3[i].jenis, jenis) == 0) {
            a3++;
        }
    }

    out arr_c[a3];
    x = 0;

    for(i=0;i<c;i++) {
        if(strcmp(arr3[i].jenis, jenis) == 0) {
            arr_c[x].netto = arr3[i].netto;
            arr_c[x].harga = arr3[i].harga;
            strcpy(arr_c[x].merk, arr3[i].merk);
            strcpy(arr_c[x].jenis, arr3[i].jenis);
            x++;  
        }
    } 

    if(method == 'i') {
        InsertionSort(arr_c, a3, jenis);
    } else if(method == 's') {
        SelectionSort(a3, arr_c);
    } else if(method == 'b') {
        BubbleSort(arr_c, a3);
    } else if(method == 'q') {
        QuickSort(arr_c, 0, a3-1);
    }

    out merge[a1+a2];
    out merge_f[a1+a2+a3];

    Merge(a1, arr_a, a2, arr_b, merge);
    Merge(a1+a2, merge, a3, arr_c, merge_f);

    for(i=0;i<a1+a2+a3;i++) {
        printf("%d %d %s %s\n", merge_f[i].netto, merge_f[i].harga, merge_f[i].merk, merge_f[i].jenis);
    }
    return 0;
}