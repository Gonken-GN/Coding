#include <stdio.h>
#include <string.h>

typedef struct{
    char nilai[100];
}nilaiMatkul;

typedef struct{
    nilaiMatkul kontainer;
    int next;
}elemen;

typedef struct{
    int first;
    elemen data[100];
}list;

//CREATE LIST
void createList(list *L)
{
    (*L).first = -1;
    int i;

    for (i = 0; i < 100; i++)
    {
        //proses menginisialisasi isi array
        (*L).data[i].next = -2;
    }
}

//COUNT ELEMENT
int countElement(list L)
{
    int hasil = 0;
    if (L.first != -1)
    {
        // list tidak kosong
        int hitung;
        //inisialisasi
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

//EMPTY ELEMENT
int emptyElement(list L)
{
    int hasil = -1;

    if (countElement(L) < 100)
    {
        int ketemu = 0;
        int i =
         0;
        while ((ketemu == 0) && (i < 100))
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

//ADD FIRST
void addFirst(char nilai[], list *L)
{
    int i = 0;
    if (countElement(*L) < 100)
    {
        int baru = emptyElement(*L);
        strcpy((*L).data[baru].kontainer.nilai, nilai);

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
        //proses jika array penuh
        printf("sudah tidak dapat ditambah\n");
    }
}

//PRINT ELEMENT
void printElement(list L)
{
    if (L.first != -1)
    {
        //inisialisasi
        int tunjuk = L.first;
        
        int i = 1;

        while (tunjuk != -1)
        {
            //proses
            // printf("elemen ke : %d\n", i);
            printf("%d", tunjuk);
            printf("%s\n", L.data[tunjuk].kontainer.nilai);
            // printf("------------\n");
            //iterasi
            tunjuk = L.data[tunjuk].next;
            i = i + 1;
        }
    }
    else
    {
        //proses jika list kosong
        printf("list kosong\n");
    }
}

// int main()
// {
//     list L;
//     createList(&L);
//     printElement(L);

//     printf("=================\n");

//     addFirst("1", "Orang_1", "A", &L);
//     addAfter(L.first, "2", "Orang_2", "A", &L);
//     addLast("3", "Orang_3", "A", &L);
//     printElement(L);

//     printf("=================\n");

//     delLast(&L);
//     delAfter(L.first, &L);
//     delFirst(&L);
//     printElement(L);

//     printf("=================\n");
    
//     return 0;
// }

int main(){
    list L;
    createList(&L);
    int n, i;
    scanf("%d", &n);
    char inputnilai[n][100];
    for(i=0; i<n; i++){
        scanf("%s", &inputnilai[i]);
        addFirst(inputnilai[i], &L);
    }
    // addFirst(3.00, &L);
    printElement(L);
    return 0;
}