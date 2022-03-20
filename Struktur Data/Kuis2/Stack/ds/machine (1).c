#include "header.h"

// Prosedur membuat stack
void createEmpty(stack *S)
{
    (*S).top = -1;
}

// Fungsi cek apakah stack kosong
int isEmpty(stack S)
{
    int hasil = 0;
    if (S.top == -1)
    {
        hasil = 1;
    }
    return hasil;
}

// Fungsi cek apakah stack penuh
int isFull(stack S)
{
    int hasil = 0;
    if (S.top == 50)
    {
        hasil = 1;
    }
    return hasil;
}

// Prosedur memasukan ke dalam stack
void push(char nama_pemilik[], char jenis[], stack *S)
{
    if (isFull(*S) == 1) // Jika stack penuh
    {
        printf("stack penuh\n");
    }
    else
    {
        if (isEmpty(*S) == 1) // Jika stack kosong
        {
            (*S).top = 0;
            strcpy((*S).data[0].nama_pemilik, nama_pemilik);
            strcpy((*S).data[0].jenis, jenis);
        }
        else // Jika stack penuh
        {
            (*S).top = (*S).top + 1;
            strcpy((*S).data[S->top].nama_pemilik, nama_pemilik);
            strcpy((*S).data[S->top].jenis, jenis);
        }
    }
}

// Prosedur pop
void pop(stack *S)
{
    if ((*S).top == 0)
    {
        // JIka stack berisi satu elemennya
        (*S).top = -1;
    }
    else
    {
        if ((*S).top != -1)
        {
            // Jika stack tidak kosong
            (*S).top = (*S).top - 1;
        }
    }
}

// Prosedur print stack
void printStack(stack S[], int n)
{
    int i;
    // dimulai dari stack 1
    forI(i, n)
    {
        printf("stack %d:\n", i + 1);
        if (S[i].top != -1)
        {
            int j;
            for (j = S[i].top; j >= 0; j--)
            {
                printf("%s %s\n", S[i].data[j].nama_pemilik, S[i].data[j].jenis);
            }
        }
        else
        {
            printf("kosong\n");
        }
        printf("\n");
    }
}

// prosedur print stack batas
void printStackBatas(stack S[], int n)
{
    int i;
    // dimulai dari stack n ke stack 1
    for (i = n - 1; i >= 0; i--)
    {
        printf("batas stack %d\n", i + 1);
        if (S[i].top != -1)
        {
            int j;
            for (j = S[i].top; j >= 0; j--)
            {
                printf("%s %s\n", S[i].data[j].nama_pemilik, S[i].data[j].jenis);
            }
        }
    }
}

// prosedur ambil pakaian
void ambilPakaian(stack *S, stack *temp, char pengambil[][50], int n)
{
    int i, j, stop = 0;
    // batas atas dan bawah untuk yang dipindahkan
    int atas, bawah;
    // diakses semuanya sampai bawah
    for (i = S->top; i >= 0; i--)
    {
        // jika ada pakaian milik pengambil
        forI(j, n)
        {
            if (strcmp(S->data[i].nama_pemilik, pengambil[j]) == 0)
            {
                // tempat pakaian ini ditandai sebagai batas bawah
                bawah = i;
                // batas atas memakai top

                // memindahkan pakaian dari batas atas sampai batas bawah kecuali batsa bawah
                for (atas = S->top; atas > bawah; atas--)
                {
                    push(S->data[atas].nama_pemilik, S->data[atas].jenis, temp);
                    pop(S);
                }
                // yang batas bawah dihapus karena pakaian nya diambil pemilik
                pop(S);
            }
        }
    }
}