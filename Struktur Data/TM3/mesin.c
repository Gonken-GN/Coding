#include "header.h"
//prosedur membuat list
void createList(list *L)
{
    (*L).first = -1;
    (*L).tail = -1;
    int i;

    for (i = 0; i < 10; i++)
    {
        //proses menginisialisasi isi array
        (*L).data[i].prev = -2;
        (*L).data[i].next = -2;
    }
}

 //fungsi menghitung elemen
int countElement(list L)
{
    int hasil = 0;

    if (L.first != -1)
    {
        //list tidak kosong 
        int bantu;
        //inisialisasi
        bantu = L.first;
        while (bantu != -1)
        {
            //proses
            hasil = hasil + 1;
            //iterasi
            bantu = L.data[bantu].next;
        }
    }
    return hasil;
}

//fungsi empty elemen
int emptyElement(list L)
{
    int hasil = -1;

    if (countElement(L) < 10)
    {
        int ketemu = 0;

        int i = 0;
        while ((ketemu == 0) && (i < 10))
        {
            if (L.data[i].next == -2)
            {
                hasil = i;
                ketemu = 1;
            }
            else
            {
                i = i + 1;
            }
        }
    }
    return hasil;
}

//prosedur add first
void addFirst(char nim[], char nama[], char nilai[], list *L)
{
    if (countElement(*L) < 10)
    {
        int baru = emptyElement(*L);
        strcpy((*L).data[baru].kontainer.nim, nim);
        strcpy((*L).data[baru].kontainer.nama, nama);
        strcpy((*L).data[baru].kontainer.nilai, nilai);

        if ((*L).first == -1)
        {
            //jika list kosong
            (*L).data[baru].prev = -1;
            (*L).data[baru].next = -1;
            (*L).tail = baru;
        }
        else
        {
            //jika list tidak kosong
            (*L).data[baru].prev = -1;
            (*L).data[baru].next = (*L).first;
            (*L).data[(*L).first].prev = baru;
        }
        (*L).first = baru;
    }
    else
    {
        //proses jika array penuh
        printf("sudah tidak dapat ditambah\n");
    }
}

//prosedur add after
void addAfter(int before, char nim[], char nama[], char nilai[], list *L)
{
    if (countElement(*L) < 10)
    {
        int baru = emptyElement(*L);
        strcpy((*L).data[baru].kontainer.nim, nim);
        strcpy((*L).data[baru].kontainer.nama, nama);
        strcpy((*L).data[baru].kontainer.nilai, nilai);

        if ((*L).data[before].next != -1)
        {
            //jika baru bukan menjadi elemen terakhir
            (*L).data[baru].prev = before;
            (*L).data[baru].next = (*L).data[before].next;
            (*L).data[before].next = baru;
            (*L).data[(*L).data[baru].next].prev = baru;
        }
        else
        {
            //jika baru menjadi elemen terakhir
            (*L).data[baru].prev = before;
            (*L).data[before].next = baru;
            (*L).data[baru].next = -1;
            (*L).tail = baru;
        }
    }
    else
    {
        //proses jika array penuh
        printf("sudah tidak dapat ditambah\n");
    }
}

//prosedur add last
void addLast(char nim[], char nama[], char nilai[], list *L)
{
    if ((*L).first == -1)
    {
        //jika list adalah list kosong
        addFirst(nim, nama, nilai, L);
    } 
    else
    {
        //jika list tidak kosong
        addAfter((*L).tail, nim, nama, nilai, L);
    }
}

//prosedur del first
void delFirst(list *L)
{
    if ((*L).first != -1)
    {
        int hapus = (*L).first;
        if (countElement(*L) == 1)
        {
            (*L).first = -1;
            (*L).tail = -1;
        }
        else
        {
            (*L).first = (*L).data[(*L).first].next;
            (*L).data[(*L).first].prev = -1;
        }
        //elemen awal sebelumnya hapus
        (*L).data[hapus].prev = -2;
        (*L).data[hapus].next = -2;
    }
    else
    {
        //proses jika list kosong
        printf("list kosong\n");
    }
}

//prosedur del after
void delAfter(int before, list *L)
{
    int hapus = (*L).data[before].next;
    if (hapus != -1)
    {
        if ((*L).data[hapus].next == -1)
        {
            (*L).tail = before;
            (*L).data[before].next = -1;
        }
        else
        {
            (*L).data[before].next = (*L).data[hapus].next;
            (*L).data[(*L).data[hapus].next].prev = before;
        }
        (*L).data[hapus].prev = -2;
        (*L).data[hapus].next = -2;
    }
}

//prosedur del last
void delLast(list *L)
{
    if ((*L).first != -1)
    {
        if (countElement(*L) == 1)
        {
            //list terdiri dari satu elemen
            delFirst(L);
        }
        else
        {
            //mencari elemen terakhir list
            delAfter((*L).data[(*L).tail].prev, L);
        }
    }
    else
    {
        //proses jika list kosong
        printf("list kosong\n");
    }
    
}

//prosedur print element
void printElement(list L)
{
    if (L.first != -1)
    {
        //inisialisasi
        int bantu= L.first;
        int i = 1;
        while (bantu != -1)
        {
            //proses
            printf("%s %s %s\n", L.data[bantu].kontainer.nim, L.data[bantu].kontainer.nama, L.data[bantu].kontainer.nilai);
            //iterasi
            bantu = L.data[bantu].next;
            i = i + 1;
        }
        printf("========\n");
    }
    else
    {
        //proses jika list kosong
        printf("List kosong\n");
        printf("========\n");
    }
}
void printreverse(list L)
{
    if (L.first != -1)
    {
        //inisialisasi
        int bantu= L.tail;
        int i = 1;
        while (bantu != -1)
        {
            //proses
            printf("%s %s %s\n", L.data[bantu].kontainer.nim, L.data[bantu].kontainer.nama, L.data[bantu].kontainer.nilai);
            //iterasi
            bantu = L.data[bantu].prev;
            i = i + 1;
        }
        printf("========\n");
    }    
    else
    {
        //proses jika list kosong
        printf("List kosong\n");
        printf("========\n");
    }
}
//prosedur del all
void delAll(list *L)
{
    int i;
    for (i = countElement(*L); i >= 1; i--)
    {
        //prosed menghapus elemen list
        delLast(L);
    }
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Test Mesin (TM3) dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/