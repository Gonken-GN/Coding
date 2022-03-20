#include "head.h" //library head.h

//prosedur membuat list
void createList(list *L)
{
    (*L).first = -1;
    (*L).tail = -1;
    int i;

    for (i = 0; i < 64; i++)
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

    if (countElement(L) < 64)
    {
        int ketemu = 0;

        int i = 0;
        while ((ketemu == 0) && (i < 64))
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
void addFirst(char kata[], list *L)
{
    if (countElement(*L) < 64)
    {
        int baru = emptyElement(*L);
        strcpy((*L).data[baru].kontainer.kata, kata);

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
void addAfter(int before, char kata[], list *L)
{
    if (countElement(*L) < 64)
    {
        int baru = emptyElement(*L);
        strcpy((*L).data[baru].kontainer.kata, kata);

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
void addLast(char kata[], list *L)
{
    if ((*L).first == -1)
    {
        //jika list adalah list kosong
        addFirst(kata, L);
    } 
    else
    {
        //jika list tidak kosong
        addAfter((*L).tail, kata, L);
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
            printf("%s ", L.data[bantu].kontainer.kata);
            //iterasi
            bantu = L.data[bantu].next;
            i = i + 1;
        }
    }
    else
    {
        //proses jika list kosong
        printf("List kosong\n");
    }
}

//prosedur print elemen secara reverse/terbalik
void printReverse(list L)
{
    if (L.first != -1)
    {
        //inisialisasi
        int bantu= L.tail;
        int i = 1;
        while (bantu != -1)
        {
            //proses
            printf("%s ", L.data[bantu].kontainer.kata);
            //iterasi
            bantu = L.data[bantu].prev;
            i = i + 1;
        }
    }
    else
    {
        //proses jika list kosong
        printf("List kosong\n");
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

//prosedur mencetak pola
void pola(list L){

    //deklarasi variabel lokal
    int i, j, k;

    //deklarasi iterator untuk depan belakang
    int bantu1= L.tail;
    int bantu2= L.first;
    //deklarasi variabel spasi
    int spasiawal[64];
    int spasitengah[64];

    //variabel pembantu
    int Sbanyak=banyak;
    int SbanyakI=1;
    //apabila inputan genap cetak pola
    if(banyak%2==0){
        //penghitung spasi ditengah
        for(i=0; i<banyak/2; i++){
            spasitengah[i]=0;
            for(j=SbanyakI; j<Sbanyak-1; j++){
                spasitengah[i]=spasitengah[i]+strlen(L.data[j].kontainer.kata);
            }
            Sbanyak=Sbanyak-1;
            SbanyakI=SbanyakI+1;
        }

        //penghitung spasi di awal
        int SbanyakI2=1;
        spasiawal[0]=0;
        for(i=1; i<banyak/2; i++){
            int Sbanyak2=banyak-1;
            spasiawal[i]=0;
            for(j=0; j<SbanyakI2; j++){
                spasiawal[i]=spasiawal[i]+strlen(L.data[Sbanyak2].kontainer.kata);
                Sbanyak2--;
            }
            SbanyakI2++;
        }

        //cetak pola
        for(i=0; i<banyak/2; i++){
            for(j=0; j<spasiawal[i]; j++){
                printf(" ");
            }
            printf("%s", L.data[bantu1].kontainer.kata);
            for(j=0; j<spasitengah[i]; j++){
                printf(" ");
            }
            printf("%s\n", L.data[bantu2].kontainer.kata);
            bantu1 = L.data[bantu1].prev;
            bantu2 = L.data[bantu2].next;

        }
    }else if(banyak%2==1){ //apabila inputan ganjil cetak pola
        //penghitung spasi ditengah
        for(i=0; i<banyak/2+1; i++){
            spasitengah[i]=0;
            for(j=SbanyakI; j<Sbanyak-1; j++){
                spasitengah[i]=spasitengah[i]+strlen(L.data[j].kontainer.kata);
            }
            Sbanyak=Sbanyak-1;
            SbanyakI=SbanyakI+1;
        }

        //penghitung spasi diawal
        int SbanyakI2=1;
        spasiawal[0]=0;
        for(i=1; i<banyak/2+1; i++){
            int Sbanyak2=banyak-1;
            spasiawal[i]=0;
            for(j=0; j<SbanyakI2; j++){
                spasiawal[i]=spasiawal[i]+strlen(L.data[Sbanyak2].kontainer.kata);
                Sbanyak2--;
            }
            SbanyakI2++;
        }

        //cetak
        for(i=0; i<banyak/2+1; i++){
            if(i==banyak/2){
                for(j=0; j<spasiawal[i]; j++){
                    printf(" ");
                }
                printf("%s\n", L.data[bantu1].kontainer.kata);
            }else{
                for(j=0; j<spasiawal[i]; j++){
                    printf(" ");
                }
                printf("%s", L.data[bantu1].kontainer.kata);
                for(j=0; j<spasitengah[i]; j++){
                    printf(" ");
                }
                printf("%s\n", L.data[bantu2].kontainer.kata);
                bantu1 = L.data[bantu1].prev;
                bantu2 = L.data[bantu2].next;
            }
            

        }
    }
    
    
}