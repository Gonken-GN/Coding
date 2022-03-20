/*  (PKL21) Playlist Kesukaan Lord (Header)

    Saya Hilman Fauzi Herdiana (2000879) mengerjakan Tugas Praktikum 2 dalam 
    mata kuliah Stuktur Data untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"

// Prosedur membuat stack
void createEmpty(stack *S)
{
    (*S).top = NULL;
}

// Fungsi cek apakah stack kosong
int isEmpty(stack S)
{
    int hasil = 0;
    if (S.top == NULL)
    {
        hasil = 1;
    }
    return hasil;
}

// Fungsi cek apakah stack penuh
int countElement(stack S)
{
    int hasil = 0;
    if (S.top != NULL) // stack tidak kosong
    {
        // inisialisasi
        elemen *bantu;
        bantu = S.top;

        while (bantu != NULL) // looping selama bantu tidak null
        {
            hasil = hasil + 1;
            bantu = bantu->next; // iterasi
        }
    }
    return hasil;
}

// Prosedur memasukan ke dalam stack
void push(int tahun, char judul[], char artis[], stack *S)
{
    elemen* baru;
    baru = (elemen *) malloc (sizeof (elemen));

    // memindahkan elemen
    baru->kontainer.tahun = tahun;
    strcpy(baru->kontainer.judul, judul);
    strcpy(baru->kontainer.artis, artis);

    if ((*S).top == NULL) // jika stack kosong
    {
        baru->next = NULL;
    }
    else // jika stack tidak kosong
    {
        baru->next = S->top;
    }
    (*S).top = baru;
    baru = NULL;
}

// Prosedur pop
void pop(stack *S)
{
    if ((*S).top != NULL) // Jika stack bukan list kosong
    {
        elemen *hapus = (*S).top;
        if (countElement(*S) == 1)
        {
            (*S).top = NULL;
        }
        else
        {
            (*S).top = (*S).top->next;
        }
        hapus->next = NULL;
        free(hapus);
    }
}

// Prosedur print stack G_rock
void printRock(stack S)
{
    if (S.top != NULL) // JIka stack tidak kosong
    {
        // inisialisasi
        elemen* bantu = S.top;
        int i = 1; 
        printf("Playlist Musik Rock:\n");
        printf("===================\n");
        while (bantu != NULL) // looping selama bantu tidak null
        {
            printf("%d. %s\n", i, bantu->kontainer.judul);
            // iterasi
            bantu = bantu->next;
            i++;
        }
    }
    else // jika stack nya kosong
    {
        printf("Playlist Musik Rock:\n");
        printf("===================\n");
        printf("BUKAN ANAK ROCK!\n");
    }
}

// Prosedur print stack G_pop
void printPop(stack S)
{
    if (S.top != NULL) // JIka stack tidak kosong
    {
        // inisialisasi
        elemen* bantu = S.top;
        int i = 1; 
        printf("Playlist Musik Pop:\n");
        printf("===================\n");
        while (bantu != NULL) // looping selama bantu tidak null
        {
            printf("%d. %s\n", i, bantu->kontainer.judul);
            // iterasi
            bantu = bantu->next;
            i++;
        }
    }
    else // jika stack nya kosong
    {
        printf("Playlist Musik Pop:\n");
        printf("===================\n");
        printf("BUKAN ANAK POP!\n");
    }
}

// prosdur menghitung ascii, memindahkan ke stack yg dituju, dan print output
void allProcess(stack S1, stack S2, stack S3)
{
    int i, total, temp;
    if (S1.top != NULL) // stack tidak kosong
    {
        // inisialisasi
        elemen *bantu;
        bantu = S1.top;

        while (bantu != NULL) // looping selama bantu tidak null
        {
            total = 0, temp = 0;
            // menghitung nilai ascii setiap string karakter nya
            for (i = 0; i < strlen(bantu->kontainer.judul); i++)
            {
                temp = bantu->kontainer.judul[i]; // masukan ascii string nya ke temp
                total += temp; // tambahkan total dengan temp
            }

            // memindahkan isi stack ke stack yg dituju berdasarkan ganjil atau genap nilai ascii string nya
            if (total % 2 == 0) // jika genap masukan ke stack G_rock
            {
                push(bantu->kontainer.tahun, bantu->kontainer.judul, bantu->kontainer.artis, &S2);
            }
            else if (total % 2 != 0)// jika ganjil masukan ke stack G_pop
            {
                push(bantu->kontainer.tahun, bantu->kontainer.judul, bantu->kontainer.artis, &S3);

            }
            bantu = bantu->next; // iterasi
        }
    }

    printRock(S2);  // print output stack genre rock
    printf("\n");
    printPop(S3);    // print output stack genre pop
}