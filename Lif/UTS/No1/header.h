//Saya Alif Rizza mengerjakan evaluasi UTS dalam mata kuliah Algoritma dan Pemograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
//Aamiin.

#include <stdio.h>
#include <string.h>

typedef struct {
    int netto, harga;
    char merk[100], jenis[100];
}churros;

typedef struct {
    int netto, harga;
    char merk[100], jenis[100];
}out;

void InsertionSort(out arr[], int num, char jenis[]);
void SelectionSort(int num, out arr[]);
void BubbleSort(out arr[], int num);
void QuickSort(out arr[], int kiri, int kanan);
void Merge(int n, out arrx[], int m, out arry[], out hasil[]);

