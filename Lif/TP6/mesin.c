#include "header.h"

void InsertionSort(char place[][100], int arr_1[], int arr_2[], int arr_3[], int arr_4[], int num, char pilihan[], char pilihan2[]) {
    int i, j, key, key2, temp1, temp2;
    char temp3[100];

    if(strcmp(pilihan, "Asc") == 0) {
        for(i=0;i<num;i++) {
            key = arr_4[i];
            key2 = arr_3[i];
            temp1 = arr_1[i];
            temp2 = arr_2[i];
            strcpy(temp3, place[i]);
            j = i - 1;
            
            while((j>=0 && key < arr_4[j] && strcmp(pilihan2, "NamaTempat") != 0) || (j>=0 && strcmp(temp3, place[j]) < 0 && strcmp(pilihan2, "NamaTempat") == 0)) {
                arr_4[j+1] = arr_4[j];
                arr_3[j+1] = arr_3[j];
                arr_1[j+1] = arr_1[j];
                arr_2[j+1] = arr_2[j];
                strcpy(place[j+1], place[j]);
                j = j - 1;
            }
            arr_4[j+1] = key;
            arr_3[j+1] = key2;
            arr_1[j+1] = temp1;
            arr_2[j+1] = temp2;
            strcpy(place[j+1], temp3);
        }
    } else if (strcmp(pilihan, "Desc") == 0) {
        for(i=0;i<num;i++) {
            key = arr_4[i];
            key2 = arr_3[i];
            temp1 = arr_1[i];
            temp2 = arr_2[i];
            strcpy(temp3, place[i]);
            j = i - 1;

            while(j>=0 && key > arr_4[j] /*&& strcmp(pilihan2, "NamaTempat") != 0) || (j>=0 && strcmp(temp3, place[j]) > 0 && strcmp(pilihan2, "NamaTempat") == 0)*/) {
                arr_4[j+1] = arr_4[j];
                arr_3[j+1] = arr_3[j];
                arr_1[j+1] = arr_1[j];
                arr_2[j+1] = arr_2[j];
                strcpy(place[j+1], place[j]);
                j = j - 1;
            }
            arr_4[j+1] = key;
            arr_3[j+1] = key2;
            arr_1[j+1] = temp1;
            arr_2[j+1] = temp2;
            strcpy(place[j+1], temp3);
        }
    }
}

void SelectionSort(char place[][100], int arr_1[], int arr_2[], int arr_3[], int arr_4[], int num, char pilihan[], char pilihan2[]) {
    int n, i, temp, temp2, temp3, temp4, minIndeks, j;
    char temp5[100];

    if(strcmp(pilihan, "Asc") == 0) {
        for(i=0;i<num-1;i++) {
            minIndeks = i;
            for(j=i+1;j<num;j++) {
                if((arr_4[minIndeks] > arr_4[j] && strcmp(pilihan2, "NamaTempat") != 0) || (strcmp(place[minIndeks], place[j]) > 0 && strcmp(pilihan2, "NamaTempat") == 0)) {
                    minIndeks = j;
                }
            }
            temp = arr_4[i];
            arr_4[i] = arr_4[minIndeks];
            arr_4[minIndeks] = temp;
            temp2 = arr_2[i];
            arr_2[i] = arr_2[minIndeks];
            arr_2[minIndeks] = temp2;
            temp3 = arr_3[i];
            arr_3[i] = arr_3[minIndeks];
            arr_3[minIndeks] = temp3;
            temp4 = arr_1[i];
            arr_1[i] = arr_1[minIndeks];
            arr_1[minIndeks] = temp4;
            strcpy(temp5, place[i]);
            strcpy(place[i], place[minIndeks]);
            strcpy(place[minIndeks], temp5);
        }
    } else if(strcmp(pilihan, "Desc") == 0) {
        for(i=0;i<num-1;i++) {
            minIndeks = i;
            for(j=i+1;j<num;j++) {
                if((arr_4[minIndeks] < arr_4[j] && strcmp(pilihan2, "NamaTempat") != 0) || (strcmp(place[minIndeks], place[j]) < 0 && strcmp(pilihan2, "NamaTempat") == 0)) {
                    minIndeks = j;
                }
            }
            temp = arr_4[i];
            arr_4[i] = arr_4[minIndeks];
            arr_4[minIndeks] = temp;
            temp2 = arr_2[i];
            arr_2[i] = arr_2[minIndeks];
            arr_2[minIndeks] = temp2;
            temp3 = arr_3[i];
            arr_3[i] = arr_3[minIndeks];
            arr_3[minIndeks] = temp3;
            temp4 = arr_1[i];
            arr_1[i] = arr_1[minIndeks];
            arr_1[minIndeks] = temp4;
            strcpy(temp5, place[i]);
            strcpy(place[i], place[minIndeks]);
            strcpy(place[minIndeks], temp5);
        }
    }
}

void BubbleSort(char place[][100], int arr_1[], int arr_2[], int arr_3[], int arr_4[], int num, char pilihan[], char pilihan2[]) {

    int i, temp1, temp2, temp3, temp4, pindah;
    char temp5[100];

    if(strcmp(pilihan, "Asc") == 0) {
        do{
            pindah = 0;
            for(i=0;i<num-1;i++) {
                if(arr_4[i]>arr_4[i+1] && strcmp(pilihan2, "NamaTempat") != 0) {
                    temp4 = arr_4[i];
                    arr_4[i] = arr_4[i+1];
                    arr_4[i+1] = temp4;
                    temp1 = arr_1[i];
                    arr_1[i] = arr_1[i+1];
                    arr_1[i+1] = temp1;
                    temp2 = arr_2[i];
                    arr_2[i] = arr_2[i+1];
                    arr_2[i+1] = temp2;
                    temp3 = arr_3[i];
                    arr_3[i] = arr_3[i+1];
                    arr_3[i+1] = temp3;
                    strcpy(temp5, place[i]);
                    strcpy(place[i], place[i+1]);
                    strcpy(place[i+1], temp5);
                    pindah = 1;
                } else if(strcmp(place[i], place[i+1]) > 0 && strcmp(pilihan2, "NamaTempat") == 0) {
                    temp4 = arr_4[i];
                    arr_4[i] = arr_4[i+1];
                    arr_4[i+1] = temp4;
                    temp1 = arr_1[i];
                    arr_1[i] = arr_1[i+1];
                    arr_1[i+1] = temp1;
                    temp2 = arr_2[i];
                    arr_2[i] = arr_2[i+1];
                    arr_2[i+1] = temp2;
                    temp3 = arr_3[i];
                    arr_3[i] = arr_3[i+1];
                    arr_3[i+1] = temp3;
                    strcpy(temp5, place[i]);
                    strcpy(place[i], place[i+1]);
                    strcpy(place[i+1], temp5);
                    pindah = 1;
                }
            }
        } while (pindah == 1);
    } else if (strcmp(pilihan, "Desc") == 0) {
        do{
            pindah = 0;
            for(i=0;i<num-1;i++) {
                if(arr_4[i]<arr_4[i+1] && strcmp(pilihan2, "NamaTempat") != 0) {
                    temp4 = arr_4[i];
                    arr_4[i] = arr_4[i+1];
                    arr_4[i+1] = temp4;
                    temp1 = arr_1[i];
                    arr_1[i] = arr_1[i+1];
                    arr_1[i+1] = temp1;
                    temp2 = arr_2[i];
                    arr_2[i] = arr_2[i+1];
                    arr_2[i+1] = temp2;
                    temp3 = arr_3[i];
                    arr_3[i] = arr_3[i+1];
                    arr_3[i+1] = temp3;
                    strcpy(temp5, place[i]);
                    strcpy(place[i], place[i+1]);
                    strcpy(place[i+1], temp5);
                    pindah = 1;
                } else if(strcmp(place[i], place[i+1]) < 0 && strcmp(pilihan2, "NamaTempat") == 0) {
                    temp4 = arr_4[i];
                    arr_4[i] = arr_4[i+1];
                    arr_4[i+1] = temp4;
                    temp1 = arr_1[i];
                    arr_1[i] = arr_1[i+1];
                    arr_1[i+1] = temp1;
                    temp2 = arr_2[i];
                    arr_2[i] = arr_2[i+1];
                    arr_2[i+1] = temp2;
                    temp3 = arr_3[i];
                    arr_3[i] = arr_3[i+1];
                    arr_3[i+1] = temp3;
                    strcpy(temp5, place[i]);
                    strcpy(place[i], place[i+1]);
                    strcpy(place[i+1], temp5);
                    pindah = 1;
                }
            }
        } while (pindah == 1);
    }
}

void QuickSort(char place[][100], int arr_1[], int arr_2[], int arr_3[], int arr_4[], char pilihan[], char pilihan2[], int kiri, int kanan) {
    int i, j, temp1, temp2, temp3, temp4, pivot = arr_4[kiri];
    char pivott[100];
    strcpy(pivott, place[kiri]);
    char temp5[100];
    i = kiri;
    j = kanan;

    if(strcmp(pilihan, "Asc") == 0) {
        do {
            if(strcmp(pilihan2, "NamaTempat") == 0) {
                while(strcmp(place[i], pivott) < 0) {
                    i++;
                }

                while(strcmp(place[j], pivott) > 0) {
                    j--;
                }
            } else {
                while(arr_4[i] < pivot) {
                    i++;
                }

                while(arr_4[j] > pivot) {
                    j--;
                }
            }

            if(i<=j) {
                temp4 = arr_4[i];
                arr_4[i] =  arr_4[j];
                arr_4[j] =  temp4;
                temp1 = arr_1[i];
                arr_1[i] = arr_1[j];
                arr_1[j] = temp1;
                temp2 = arr_2[i];
                arr_2[i] = arr_2[j];
                arr_2[j] = temp2;
                temp3 = arr_3[i];
                arr_3[i] = arr_3[j];
                arr_3[j] = temp3;
                strcpy(temp5, place[i]);
                strcpy(place[i], place[j]);
                strcpy(place[j], temp5);
                i++;
                j--;
            }
        } while (i<=j);

        if(kiri<j) {
            QuickSort(place, arr_1, arr_2, arr_3, arr_4, pilihan, pilihan2, kiri, j);
        }
        if(i<kanan) {
            QuickSort(place, arr_1, arr_2, arr_3, arr_4, pilihan, pilihan2, i, kanan);
        }
    } else if (strcmp(pilihan, "Desc") == 0) {
        do {
            if(strcmp(pilihan2, "NamaTempat") == 0) {
                while(strcmp(place[i], pivott) > 0) {
                    i++;
                }

                while(strcmp(place[j], pivott) < 0) {
                    j--;
                }
            } else {
                while(arr_4[i] > pivot) {
                    i++;
                }

                while(arr_4[j] < pivot) {
                    j--;
                }
            }

            if(i<=j) {
                temp4 = arr_4[i];
                arr_4[i] =  arr_4[j];
                arr_4[j] =  temp4;
                temp1 = arr_1[i];
                arr_1[i] = arr_1[j];
                arr_1[j] = temp1;
                temp2 = arr_2[i];
                arr_2[i] = arr_2[j];
                arr_2[j] = temp2;
                temp3 = arr_3[i];
                arr_3[i] = arr_3[j];
                arr_3[j] = temp3;
                strcpy(temp5, place[i]);
                strcpy(place[i], place[j]);
                strcpy(place[j], temp5);
                i++;
                j--;
            }
        } while (i<=j);

        if(kiri<j) {
            QuickSort(place, arr_1, arr_2, arr_3, arr_4, pilihan, pilihan2, kiri, j);
        }
        if(i<kanan) {
            QuickSort(place, arr_1, arr_2, arr_3, arr_4, pilihan, pilihan2, i, kanan);
        }
    }
}

void merge(char pilihan1[], char pilihan2[], int n, int m, char place1[][100], char place2[][100], char placeF[][100], int harga_t1[], int harga_t2[], int harga_tF[], int harga_l1[], int harga_l2[], int harga_lF[], int total1[], int total2[], int totalF[]){
    int i = 0, j = 0, k = 0, l = 0;
    while((i < n) && (j < m)){
        if(strcmp(pilihan1, "Asc") == 0){
            if(strcmp(pilihan2, "NamaTempat") == 0){
                if(strcmp(place1[i], place2[j]) < 0){
                    harga_tF[k] = harga_t1[i];
                    harga_lF[k] = harga_l1[i];
                    totalF[k] = total1[i];
                    strcpy(placeF[k], place1[i]);
                    i++; k++;
                }
                else if(strcmp(place2[j], place1[i]) < 0){
                    harga_tF[k] = harga_t2[j];
                    harga_lF[k] = harga_l2[j];
                    totalF[k] = total2[j];
                    strcpy(placeF[k], place2[j]);
                    j++; k++;
                }
                else{
                    harga_tF[k] = harga_t1[i];
                    harga_lF[k] = harga_l1[i];
                    totalF[k] = total1[i];
                    strcpy(placeF[k], place1[i]);
                    i++; k++;
                    harga_tF[k] = harga_t2[j];
                    harga_lF[k] = harga_l2[j];
                    totalF[k] = total2[j];
                    strcpy(placeF[k], place2[j]);
                    j++; k++;
                }
            }
            if(strcmp(pilihan2, "HargaTransportasi") == 0){
                if(harga_t1[i] < harga_t2[j]){
                    harga_tF[k] = harga_t1[i];
                    harga_lF[k] = harga_l1[i];
                    totalF[k] = total1[i];
                    strcpy(placeF[k], place1[i]);
                    i++; k++;
                }
                else if(harga_t2[j] < harga_t1[i]){
                    harga_tF[k] = harga_t2[j];
                    harga_lF[k] = harga_l2[j];
                    totalF[k] = total2[j];
                    strcpy(placeF[k], place2[j]);
                    j++; k++;
                }
                else{
                    harga_tF[k] = harga_t1[i];
                    harga_lF[k] = harga_l1[i];
                    totalF[k] = total1[i];
                    strcpy(placeF[k], place1[i]);
                    i++; k++;
                    harga_tF[k] = harga_t2[j];
                    harga_lF[k] = harga_l2[j];
                    totalF[k] = total2[j];
                    strcpy(placeF[k], place2[j]);
                    j++; k++;
                }
            }
            if(strcmp(pilihan2, "HargaPenginapan") == 0){
                if(harga_l1[i] < harga_l2[j]){
                    harga_tF[k] = harga_t1[i];
                    harga_lF[k] = harga_l1[i];
                    totalF[k] = total1[i];
                    strcpy(placeF[k], place1[i]);
                    i++; k++;
                }
                else if(harga_l2[j] < harga_l1[i]){
                    harga_tF[k] = harga_t2[j];
                    harga_lF[k] = harga_l2[j];
                    totalF[k] = total2[j];
                    strcpy(placeF[k], place2[j]);
                    j++; k++;
                }
                else{
                    harga_tF[k] = harga_t1[i];
                    harga_lF[k] = harga_l1[i];
                    totalF[k] = total1[i];
                    strcpy(placeF[k], place1[i]);
                    i++; k++;
                    harga_tF[k] = harga_t2[j];
                    harga_lF[k] = harga_l2[j];
                    totalF[k] = total2[j];
                    strcpy(placeF[k], place2[j]);
                    j++; k++;
                }
            }
            if(strcmp(pilihan2, "TotalBiaya") == 0){
                if(total1[i] < total2[j]){
                    harga_tF[k] = harga_t1[i];
                    harga_lF[k] = harga_l1[i];
                    totalF[k] = total1[i];
                    strcpy(placeF[k], place1[i]);
                    i++; k++;
                }
                else if(total2[j] < total1[i]){
                    harga_tF[k] = harga_t2[j];
                    harga_lF[k] = harga_l2[j];
                    totalF[k] = total2[j];
                    strcpy(placeF[k], place2[j]);
                    j++; k++;
                }
                else{
                    harga_tF[k] = harga_t1[i];
                    harga_lF[k] = harga_l1[i];
                    totalF[k] = total1[i];
                    strcpy(placeF[k], place1[i]);
                    i++; k++;
                    harga_tF[k] = harga_t2[j];
                    harga_lF[k] = harga_l2[j];
                    totalF[k] = total2[j];
                    strcpy(placeF[k], place2[j]);
                    j++; k++;
                }
            }
        }
        else if(strcmp(pilihan1, "Desc") == 0){
            if(strcmp(pilihan2, "NamaTempat") == 0){
                if(strcmp(place1[i], place2[j]) > 0){
                    harga_tF[k] = harga_t1[i];
                    harga_lF[k] = harga_l1[i];
                    totalF[k] = total1[i];
                    strcpy(placeF[k], place1[i]);
                    i++; k++;
                }
                else if(strcmp(place2[j], place1[i]) > 0){
                    harga_tF[k] = harga_t2[j];
                    harga_lF[k] = harga_l2[j];
                    totalF[k] = total2[j];
                    strcpy(placeF[k], place2[j]);
                    j++; k++;
                }
                else{
                    harga_tF[k] = harga_t1[i];
                    harga_lF[k] = harga_l1[i];
                    totalF[k] = total1[i];
                    strcpy(placeF[k], place1[i]);
                    i++; k++;
                    harga_tF[k] = harga_t2[j];
                    harga_lF[k] = harga_l2[j];
                    totalF[k] = total2[j];
                    strcpy(placeF[k], place2[j]);
                    j++; k++;
                }
            }
            if(strcmp(pilihan2, "HargaTransportasi") == 0){
                if(harga_t1[i] > harga_t2[j]){
                    harga_tF[k] = harga_t1[i];
                    harga_lF[k] = harga_l1[i];
                    totalF[k] = total1[i];
                    strcpy(placeF[k], place1[i]);
                    i++; k++;
                }
                else if(harga_t2[j] > harga_t1[i]){
                    harga_tF[k] = harga_t2[j];
                    harga_lF[k] = harga_l2[j];
                    totalF[k] = total2[j];
                    strcpy(placeF[k], place2[j]);
                    j++; k++;
                }
                else{
                    harga_tF[k] = harga_t1[i];
                    harga_lF[k] = harga_l1[i];
                    totalF[k] = total1[i];
                    strcpy(placeF[k], place1[i]);
                    i++; k++;
                    harga_tF[k] = harga_t2[j];
                    harga_lF[k] = harga_l2[j];
                    totalF[k] = total2[j];
                    strcpy(placeF[k], place2[j]);
                    j++; k++;
                }
            }
            if(strcmp(pilihan2, "HargaPenginapan") == 0){
                if(harga_l1[i] > harga_l2[j]){
                    harga_tF[k] = harga_t1[i];
                    harga_lF[k] = harga_l1[i];
                    totalF[k] = total1[i];
                    strcpy(placeF[k], place1[i]);
                    i++; k++;
                }
                else if(harga_l2[j] > harga_l1[i]){
                    harga_tF[k] = harga_t2[j];
                    harga_lF[k] = harga_l2[j];
                    totalF[k] = total2[j];
                    strcpy(placeF[k], place2[j]);
                    j++; k++;
                }
                else{
                    harga_tF[k] = harga_t1[i];
                    harga_lF[k] = harga_l1[i];
                    totalF[k] = total1[i];
                    strcpy(placeF[k], place1[i]);
                    i++; k++;
                    harga_tF[k] = harga_t2[j];
                    harga_lF[k] = harga_l2[j];
                    totalF[k] = total2[j];
                    strcpy(placeF[k], place2[j]);
                    j++; k++;
                }
            }
            if(strcmp(pilihan2, "TotalBiaya") == 0){
                if(total1[i] > total2[j]){
                    harga_tF[k] = harga_t1[i];
                    harga_lF[k] = harga_l1[i];
                    totalF[k] = total1[i];
                    strcpy(placeF[k], place1[i]);
                    i++; k++;
                }
                else if(total2[j] > total1[i]){
                    harga_tF[k] = harga_t2[j];
                    harga_lF[k] = harga_l2[j];
                    totalF[k] = total2[j];
                    strcpy(placeF[k], place2[j]);
                    j++; k++;
                }
                else{
                    harga_tF[k] = harga_t1[i];
                    harga_lF[k] = harga_l1[i];
                    totalF[k] = total1[i];
                    strcpy(placeF[k], place1[i]);
                    i++; k++;
                    harga_tF[k] = harga_t2[j];
                    harga_lF[k] = harga_l2[j];
                    totalF[k] = total2[j];
                    strcpy(placeF[k], place2[j]);
                    j++; k++;
                }
            }
        }
    }
    if(i < n){
        for(l = i; l < n; l++){
            harga_tF[k] = harga_t1[l];
            harga_lF[k] = harga_l1[l];
            totalF[k] = total1[l];
            strcpy(placeF[k], place1[l]);
            k++;
        }
    }
    if(j < m){
        for(l = j; l < m; l++){
            harga_tF[k] = harga_t2[l];
            harga_lF[k] = harga_l2[l];
            totalF[k] = total2[l];
            strcpy(placeF[k], place2[l]);
            k++;
        }
    }
}