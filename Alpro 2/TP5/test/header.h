/*  (PPM21) Pengurut Pecahan Mageran (Header)

    Saya Hilman Fauzi Herdiana (2000879) mengerjakan Tugas Praktikum 5 dalam mata kuliah
    Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include <stdio.h>

//prosedur untung mengitung pembagian antara pembilang dan penyebut
void hitung(int a, int x[], int y[], float jml[]);
//prosedur untuk proses metode sorting Quick Sort Pivot Pinggir
void qsPinggir(int a, int x[], int y[], char z, float jml[], int kiri, int kanan, char sort);
//prosedur untuk proses metode sorting Bubble Sort
void bubbleSort(int a, int x[], int y[], char z, float jml[], char sort);
//prosedur untuk menampilkan hasil output
void printOut(int a, int x[], int y[]);
//prosedur untuk menukar isi array keberkahanNya
void swap_array(int x[], int y[], float jml[], int x_temp, int y_temp, float jml_temp, int a, int b, char sort);