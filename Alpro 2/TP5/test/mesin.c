/*  (PPM21) Pengurut Pecahan Mageran (Mesin)

    Saya Hilman Fauzi Herdiana (2000879) mengerjakan Tugas Praktikum 5 dalam mata kuliah
    Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"

//prosedur untung mengitung pembagian antara pembilang dan penyebut
void hitung(int a, int x[], int y[], float jml[])
{
    int i;
    //bagi pembilang[i] dengan penyebut[i]
    for (i = 0; i < a; i++)
    {
        //karena jml itu float maka x[i] dan y[i] di cast dulu
        jml[i] = (float) x[i] / y[i];
    }
}

//prosedur untuk proses metode sorting Quick Sort Pivot Tengah
void qsPinggir(int a, int x[], int y[], char z, float jml[], int kiri, int kanan, char sort)
{
    int i, j;
    float tempX, tempY, tempJml;
    i = kiri; j = kanan;

    //ketika i kurang dari j;
    do
    {
        //jika z (urut) nya = a, berarti ascending (terkecil)
        if (z == 'a' || z == 'A')
        {
            //ketika jml[i] kurang dari jml[kanan] dan i kurang dari sama dengan j
            while ((jml[i] < jml[kanan]) && (i <= j))
            {
                i++;    //i bertambah
            }
            //ketika jml[i] lebih dari jml[kanan] dan i kurang dari sama dengan j
            while ((jml[j] > jml[kiri]) && (i <= j))
            {
                j--;    //j berkurang
            }
        }
        //jika z (urut) nya = d, berarti descending (terbesar)
        else if (z == 'd' || z == 'D')
        {
            //ketika jml[i] lebih dari jml[kanan] dan i kurang dari sama dengan j
            while ((jml[i] > jml[kanan]) && (i <= j))
            {
                i++;    //i bertambah
            }
            //ketika jml[i] kurang dari jml[kanan] dan i kurang dari sama dengan j
            while ((jml[j] < jml[kiri]) && (i <= j))
            {
                j--;    //j berkurang
            }
        }
        
        if (i < j)
        {
            swap_array(x, y, jml, tempX, tempY, tempJml, i, j, sort); //menukar isi array
            i++; j--;
        }
        
    } while (i < j);

    //jika kiri kurang dari j
    if (kiri < j)
    {
        qsPinggir(a, x, y, z, jml, kiri, j, sort);
    }
    //jika i kurang dari kanan
    if (i < kanan)
    {
        qsPinggir(a, x, y, z, jml, i, kanan, sort);
    }
}

//prosedur untuk proses metode sorting Bubble Sort
void bubbleSort(int a, int x[], int y[], char z, float jml[], char sort)
{
    int i, j, swap;
    float tempX, tempY, tempJml;

    // perulangan sampai seluruh data tidak ada yang ditukar
    do
    {
        swap = 0; // penanda pertukaran data
        // cek semua data
        for (i = 0; i < a-1; i++)
        {
            //jika z (urut) nya = a, berarti ascending (terkecil)
            if (z == 'a' || z == 'A')
            {
                // jika data ke i lebih besar daripada data ke i+1
                if (jml[i] > jml[i+1])
                {   
                    swap_array(x, y, jml, tempX, tempY, tempJml, i, j, sort); //menukar isi array
                    swap = 1;
                }
            }
            //jika z (urut) nya = d, berarti descending (terbesar)
            else if (z == 'd' || z == 'D')
            {
                 // jika data ke i lebih besar daripada data ke i+1
                if (jml[i] < jml[i+1])
                {   
                    swap_array(x, y, jml, tempX, tempY, tempJml, i, j, sort); //menukar isi array
                    swap = 1;
                }
            }
        }
    } while (swap == 1);
}

//prosedur untuk menampilkan hasil output
void printOut(int a, int x[], int y[])
{
    int i;

    //pembilang
    for (i = 0; i < a; i++)
    {
        if (i == a-1)
        {
            printf("%d\n", x[i]);
        }
        else
        {
            printf("%d   ", x[i]);
        }
    }
    //tengah
    for (i = 0; i < a; i++)
    {
        if (i == a-1)
        {
            printf("-\n");
        }
        else
        {
            printf("- , ");
        }
    }
    //penyebut
    for (i = 0; i < a; i++)
    {
        if (i == a-1)
        {
            printf("%d\n", y[i]);
        }
        else
        {
            printf("%d   ", y[i]);
        }
    }
}

void swap_array(int x[], int y[], float jml[], int x_temp, int y_temp, float jml_temp, int a, int b, char sort)
{
    if (sort == 'q' || sort == 'Q')
    {
        //menukar nilai jumlah
        jml_temp = jml[a];
        jml[a] = jml[b];
        jml[b] = jml_temp;
        //menukar nilai bilangan pembilang
        x_temp = x[a];
        x[a] = x[b];
        x[b] = x_temp;
        //menukar nilai bilangan penyebut
        y_temp = y[a];
        y[a] = y[b];
        y[b] = y_temp;
    }
    else if (sort == 'b' || sort == 'B')
    {
        //menukar nilai jumlah
        jml_temp = jml[a];
        jml[a] = jml[a+1];
        jml[a+1] = jml_temp;
        //menukar nilai bilangan pembilang
        x_temp = x[a];
        x[a] = x[a+1];
        x[a+1] = x_temp;
        //menukar nilai bilangan penyebut
        y_temp = y[a];
        y[a] = y[a+1];
        y[a+1] = y_temp;
    }
}