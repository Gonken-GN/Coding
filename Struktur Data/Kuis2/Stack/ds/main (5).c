#include "header.h"

/*
    Saya Cahya Gumilang 2003128 mengerjakan
    Kuis2 Strukdat 2021 C1 - (stldbc21) Stack Laundry Bercahaya
    dalam mata kuliah Struktur Data
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin

*/

int main()
{
    int i, j, n;
    stack S[10], temp[10];
    scanf("%d", &n);
    // buat stack kosong sebanyak n
    forI(i, n)
    {
        // buat stack kosong
        createEmpty(&S[i]);
        createEmpty(&temp[i]);
        char nama_pemilik[50], jenis[50];
        // input awal untuk pengecekan 1 (mulai)
        scanf("%s", nama_pemilik);
        if (strcmp(nama_pemilik, "1") == 0)
        {
            // input lagi untuk pengecekan apakah langsung 0 (selesai)
            scanf("%s", nama_pemilik);
            while (strcmp(nama_pemilik, "0") != 0)
            {
                // jika bukan, input jenis dan masukkan ke stack
                scanf("%s", jenis);
                push(nama_pemilik, jenis, &S[i]);
                // input nama_pemilik untuk dicek di looping selanjutnya
                scanf("%s", nama_pemilik);
            }
        }
    }
    int n_pengambil;
    scanf("%d", &n_pengambil);
    char pengambil[50][50];
    // mencatat nama pengambil
    forI(i, n_pengambil)
    {
        scanf("%s", pengambil[i]);
    }

    // melakukan pengambilan
    forI(i, n)
    {
        ambilPakaian(&S[i], &temp[i], pengambil, n_pengambil);
    }
    // print stack asal
    printStack(S, n);
    // print stack batas/temp/stack yang diisi pakaian yang dipindah
    printStackBatas(temp, n);

    return 0;
}
