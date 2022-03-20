/*  (PKL21) Playlist Kesukaan Lord (Header)

    Saya Hilman Fauzi Herdiana (2000879) mengerjakan Tugas Praktikum 2 dalam 
    mata kuliah Stuktur Data untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"

int main()
{
    // inisialisasi
    stack all;
    stack G_rock;
    stack G_pop;
    createEmpty(&all);
    createEmpty(&G_rock);
    createEmpty(&G_pop);
    int i, n, tahun;
    char judul[100], artis[100];

    scanf("%d", &n); // input banyaknya isi stack
    for (i = 0; i < n; i++) // looping sebanyak n
    {
        scanf("%d %s %s", &tahun, judul, artis); // input tahun, judul, dan artis lagu
        push(tahun, judul, artis, &all); // masukan ke dalam stack all
    }
    // prosdur menghitung ascii, memindahkan ke stack yg dituju, dan print output
    allProcess(all, G_rock, G_pop);

    return 0;
}