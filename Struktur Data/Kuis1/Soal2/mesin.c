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
void addFirst(char nama[], list *L)
{
    if (countElement(*L) < 10)
    {
        int baru = emptyElement(*L);
        strcpy((*L).data[baru].kontainer.nama, nama);

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
void addAfter(int before, char nama[], list *L)
{
    if (countElement(*L) < 10)
    {
        int baru = emptyElement(*L);
        strcpy((*L).data[baru].kontainer.nama, nama);

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
void addLast(char nama[], list *L)
{
    if ((*L).first == -1)
    {
        //jika list adalah list kosong
        addFirst(nama, L);
    } 
    else
    {
        //jika list tidak kosong
        addAfter((*L).tail, nama, L);
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
void coba(list L){
    //variabel untuk menghitung banyaknya elemen
    int banyak = countElement(L);
    if(banyak % 2 == 0){
        banyak = banyak/2; //jika genap
    }else{
        banyak = (banyak/2) + 1;//jika ganjil
    }
    int i, j, tampung = 0;
    if(L.first != -1){
        //variabel untuk menampung elemen pertama dan terakhir list
        int depan = L.first;

        int belakang = L.tail;
        for(i=0;i<banyak;i++){
            //menghitung jumlah spasi untuk antar kalimat
            tampung2 = tampung2 - strlen(L.data[belakang].kontainer.nama) - strlen(L.data[depan].kontainer.nama);
                for(j=0;j<tampung;j++){
                    printf(" ");
                }
                printf("%s", L.data[belakang].kontainer.nama);
                tampung += strlen(L.data[belakang].kontainer.nama);
                for(j=0;j<tampung2;j++){
                    printf(" ");
                }
                if(depan != belakang){
                    printf("%s", L.data[depan].kontainer.nama);
                }
                //iterasi untuk perpindahan elemen
                belakang = L.data[belakang].prev;
                depan = L.data[depan].next;
                printf("\n");
        }
    }
}