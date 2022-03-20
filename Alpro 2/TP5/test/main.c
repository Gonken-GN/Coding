/*  (PPM21) Pengurut Pecahan Mageran (Mesin)

    Saya Hilman Fauzi Herdiana (2000879) mengerjakan Tugas Praktikum 5 dalam mata kuliah
    Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"

int main()
{
    int i, j, n;
    int pembilang[100], penyebut[100];
    float hasil[100];
    char mode, order;

    scanf("%d", &n); //jumlah banyaknya pecahan
    //isi array
    for (i = 0; i < n; i++)
    {
        scanf("%d", &pembilang[i]);
        scanf("%d", &penyebut[i]);
    }
    scanf(" %c", &mode);    //metode sorting
    scanf(" %c", &order);   //urutan ascending / descending    

    hitung(n, pembilang, penyebut, hasil); //pembagian bil. pembilang dengn penyebut

    //metode sorting nya jika q / Q pilih metode sorting Quick Sort Pivot Pinggir
    if (mode == 'q' || mode == 'Q')
    {
        qsPinggir(n, pembilang, penyebut, order, hasil, 0, n-1, mode);
    }
    //metode sorting nya jika b / B pilih metode sorting Bubble Sort
    else if (mode == 'b' || mode == 'B')
    {
        bubbleSort(n, pembilang, penyebut, order, hasil, mode);
    }

    //hasil output
    printOut(n, pembilang, penyebut);

    return 0;
}