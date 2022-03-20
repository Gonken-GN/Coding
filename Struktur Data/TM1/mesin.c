#include "header.h"

void createList(list *L)
{
    (*L).first = -1;
    int i;

    for (i = 0; i < 10; i++)
    {
        //proses menginisalisasikan isi array
        (*L).data[i].next = -2;
    }
}

int countElement(list L)
{
    int hasil = 0; //variabel yg menyimpan ada berapa elemen dalam list
    if (L.first != -1)
    {
        //list tidak kosong
        int hitung;
        //insialisasi
        hitung = L.first;

        while (hitung != -1)
        {
            //proses
            hasil = hasil + 1;

            //iterasi
            hitung = L.data[hitung].next;
        }
    }

    return hasil;
}

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

void addFirst(char nama[], char warna[], char ukuran[], list *L)
{
    if (countElement(*L) < 10)
    {
        int baru = emptyElement(*L);
        strcpy((*L).data[baru].kontainer.warna, warna);
        strcpy((*L).data[baru].kontainer.nama, nama);
        strcpy((*L).data[baru].kontainer.ukuran, ukuran);

        if ((*L).first == -1)
        {
            //jika list kosong
            (*L).data[baru].next = -1;
        }
        else
        {
            //jika list tidak kosong
            (*L).data[baru].next = (*L).first;
        }

        (*L).first = baru;
    }
    else
    {
        //proses jika array sudah penuh
        printf("Sudah tidak dapat ditambah\n");
        printf("========\n");
    }
}

void addAfter(int prev, char nama[], char warna[], char ukuran[], list *L)
{
    if (countElement(*L) < 10)
    {
        int baru = emptyElement(*L);
        strcpy((*L).data[baru].kontainer.warna, warna);
        strcpy((*L).data[baru].kontainer.nama, nama);
        strcpy((*L).data[baru].kontainer.ukuran, ukuran);

        if ((*L).data[prev].next == -1) //kasus prev di akhir
        {
            (*L).data[baru].next = -1;
        }
        else //kasus prev di tengah
        {
            (*L).data[baru].next = (*L).data[prev].next;
        }

        (*L).data[prev].next = baru;
    }
    else
    {
        //proses jika array sudah penuh
        printf("Sudah tidak dapat ditambah\n");
        printf("========\n");
    }
}

//addlast elemen akhir untuk list kosong == addfirst list kosong
//addlast elemen banyak == addafter elemen belakang/akhir

void addLast(char nama[], char warna[], char ukuran[], list *L)
{
    if ((*L).first == -1)
    {
        //proses jika list masih kosong
        addFirst(nama, warna, ukuran, L);
    }
    else
    {
        if (countElement(*L) < 10) //jika array blm penuh
        {
            //proses mencari elemen terakhir

            //inisialisasi
            int prev = (*L).first;

            while ((*L).data[prev].next != -1)
            {
                //iterasi
                prev = (*L).data[prev].next;
            }

            addAfter(prev, nama, warna, ukuran, L);
        }
        else
        {
            //proses jika array sudah penuh
            printf("Sudah tidak dapat ditambah\n");
            printf("========\n");
        }
    }
}

void delFirst(list *L)
{
    if ((*L).first != -1)
    {
        int hapus = (*L).first;
        if (countElement(*L) == 1) //jika list hanya 1 elemen
        {
            (*L).first = -1;
        }
        else //jika list lebih dari >1 elemen
        {
            (*L).first = (*L).data[hapus].next;
        }

        (*L).data[hapus].next = -2; //kosongkan list hapus next nya
    }
    else
    {
        //proses jika list kosong
        printf("List kosong\n");
        printf("========\n");
    }
}

void delAfter(int prev, list *L)
{
    int hapus = (*L).data[prev].next;

    if (hapus != -1)
    {
        if ((*L).data[hapus].next == -1) //dihapus paling akhir
        {
            (*L).data[prev].next = -1;
        }
        else //dihapus di tengah
        {
            (*L).data[prev].next = (*L).data[hapus].next;
        }

        (*L).data[hapus].next = -2;
    }
}

//dellast satu elemen == delfirst 1 elemen
//dellast banyak elemen == delafter akhir

void delLast(list *L)
{
    if ((*L).first != -1)
    {
        if (countElement(*L) == 1)
        {
            delFirst(L);
        }
        else
        {
            int hapus = (*L).first;
            int prev;

            while ((*L).data[hapus].next != -1)
            {
                //iterasi
                prev = hapus;
                hapus = (*L).data[hapus].next;
            }

            //elemen sebelum elemen terakhir menjadi elemen akhir
            delAfter(prev, L);
        }
    }
    else
    {
        //proses jika list kosong
        printf("List kosong\n");
        printf("========\n");
    }
}

void printElement(list L)
{
    if (L.first != -1)
    {
        //inisialisasi
        int tunjuk = L.first;
        int i = 1;

        while (tunjuk != -1)
        {
            printf("%s %s %s\n", L.data[tunjuk].kontainer.nama, L.data[tunjuk].kontainer.warna, L.data[tunjuk].kontainer.ukuran);
            tunjuk = L.data[tunjuk].next;
            i = i + 1;
        }
        printf("========\n");
        
    }
    else
    {
        printf("List kosong\n");
        printf("========\n");
    }
}

void delAll(list *L)
{
    int i;
    for (i = countElement(*L); i >= 1; i--)
    {
        delLast(L);
    }
}