#include <stdio.h>
#include <string.h>

void InsertionSort(char place[][100], int arr_1[], int arr_2[], int arr_3[], int arr_4[], int num, char pilihan[], char pilihan2[]);
void SelectionSort(char place[][100], int arr_1[], int arr_2[], int arr_3[], int arr_4[], int num, char pilihan[], char pilihan2[]);
void BubbleSort(char place[][100], int arr_1[], int arr_2[], int arr_3[], int arr_4[], int num, char pilihan[], char pilihan2[]);
void QuickSort(char place[][100], int arr_1[], int arr_2[], int arr_3[], int arr_4[], char pilihan[], char pilihan2[], int kiri, int kanan);
void Merge(char pilihan[], char pilihan2[], int n, int m, int arr1[], int arr2[], int arr3[], int arr_a1[], int arr_a2[], int gabung_a[], int arr_b1[], int arr_b2[], int gabung_b[], int arr_c1[], int arr_c2[], int gabung_c[], char array1[][100], char array2[][100], char tampung[][100]);
void merge(char pilihan1[], char pilihan2[], int n, int m, char place1[][100], char place2[][100], char placeF[][100], int harga_t1[], int harga_t2[], int harga_tF[], int harga_l1[], int harga_l2[], int harga_lF[], int total1[], int total2[], int totalF[]);

//Saya Alif Rizza mengerjakan evaluasi TP6 dalam mata kuliah Alpro 2 
//untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.