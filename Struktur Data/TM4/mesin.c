#include "header.h"
void createList(list *L){
    (*L).first = NULL;      //NULL artinya pointer first mengaskses elemen kosong di sebuah memori
    (*L).tail = NULL;
}

int countElement(list L){
    int total = 0;

    if (L.first != NULL)
    {
        /* List tidak kosong */
        elemen* tunjuk;

        //inisialiasi
        tunjuk = L.first;

        while (tunjuk != NULL)
        {
            total = total + 1;

            tunjuk = tunjuk->next;
        }   
    }
    return total;
}

void addFirst(char harga[], char nama[], char kode[], list *L){
    elemen* new;                               //deklarasi pointer bernama new
    new = (elemen*) malloc (sizeof (elemen));    //perintah untuk mengalokasikan satu elemen dari memory lalu di acu oleh pointer new
    strcpy(new->kontainer.harga, harga);
    strcpy(new->kontainer.nama, nama);
    strcpy(new->kontainer.kode, kode);

    if ((*L).first == NULL)
    {
        new->next = NULL;
        new->prev = NULL;
        (*L).tail = new;
        
        ;
    }
    else
    {
        new->next = (*L).first;
        new->prev = NULL;
        (*L).first->prev = new;
    }
    (*L).first = new;
    new = NULL;
}

void addAfter(elemen* before, char harga[], char nama[], char kode[], list *L){
    elemen* new;
    new = (elemen*) malloc (sizeof (elemen));
    strcpy(new->kontainer.harga, harga);
    strcpy(new->kontainer.nama, nama);
    strcpy(new->kontainer.kode, kode);

    //jika add after di paling akhir
    if (before->next == NULL)
    {
        new->next = NULL;
        (*L).tail = new;
    }
    // jika addafter di tengah"
    else
    {
        new->next = before->next;
        new->next->prev = new; 
    }
    new->prev = before;
    before->next = new;
    new = NULL;
}
void addBefore(elemen* before, char harga[], char nama[], char kode[], list *L){
    elemen* new;
    new = (elemen*) malloc (sizeof (elemen));
    strcpy(new->kontainer.harga, harga);
    strcpy(new->kontainer.nama, nama);
    strcpy(new->kontainer.kode, kode);

    //jika add after di paling akhir
    if (before->prev == NULL)
    {
        new->prev = NULL;
        (*L).first = new;
    }
    // jika addafter di tengah"
    else
    {
        new->prev= before->prev;
        new->prev->next= new; 
    }
    new->next = before;
    before->prev = new;
    new = NULL;
}

void addLast(int harga[], char nama[], int kode[], list *L){
    if ((*L).first == NULL)     //jika list kosong
    {
        addFirst(harga, nama, kode, L);
    }
    else
    {
        /* jika list tidak kosong */
        addAfter((*L).tail, harga, nama, kode, L);
    }
}

void delFirst(list *L)
{
    
    if ((*L).first != NULL)     //jika list tidak kosong
    {
        elemen* erase = (*L).first;     //pointer hapus menunjuk elemen pertama dari list
        if (countElement(*L) == 1)      //jika cuma 1 elemen saja
        {
            (*L).first = NULL;
            (*L).tail = NULL;
        }
        else{
            (*L).first = (*L).first->next;
            (*L).first->prev = NULL;
            erase->next = NULL;
        }

        free(erase);        //prosedur melepaskan elemen dari memori yang ditunjuk pointer hapus
    }
    else
    {
        printf("list kosong\n");
    }
}

void delAfter(elemen* before, list *L)
{
    if (before != NULL)
    {
        elemen* erase = before->next;
    
        //jika elemen yang ditunjuk setelah prev != NULL / ada elemen yang akan dihapus
        if (erase != NULL)
        {
            if (erase->next == NULL)    //jika elemennya di akhir
            {
                before->next = NULL;
                (*L).tail = before;
            }
            else                        //jika ditengah
            {       
                before->next = erase->next;         //pointer next dari before menjadi menunjuk ke next dari erase
                erase->next->prev = before;         //pointer prev dari data setelah prev menunjuk before
                erase->next = NULL;                 //pointer next dari elemen yang akan dihapus di null kan
            }
            erase->prev = NULL;
            free(erase);
        }
    }
}


void delLast(list *L)
{
    if ((*L).first != NULL)     //jika elemen tidak kosong
    {
        if (countElement(*L) == 1)  //jika elemen tinggal 1
        {
            delFirst(L);
        }
        else
        {
            delAfter((*L).tail->prev, L);
        }
    }
    else
    {
        printf("LIST KOSONG\n");
    }
    
}

void delAll(list *L)
{
    if (countElement(*L) != 0)      //jika list tidak kosong
    {
        int i;

        for ( i = countElement(*L); i >= 1; i--)
        {
            delLast(L);
        }
    }
    else
    {
        printf("LIST KOSONG\n");
    }
}

void printElement(list L)
{
    if (L.first != NULL)    //jika list tidak kosong
    {
        //inisialisasi
        elemen* tunjuk = L.first;
        
        int i = 1;
        while (tunjuk != NULL)      //perulangan selemen pointer tunjuk tidak berkode null
        {
            printf("%s %s %s\n", tunjuk->kontainer.nama, tunjuk->kontainer.harga, tunjuk->kontainer.kode);

            tunjuk = tunjuk->next;
            i++;        
        }
        printf("========\n");
    }
    else
    {
        printf("List Kosong\n");
        printf("========\n");
    }

}
void printreverse(list L)
{
    if (L.first != NULL)    //jika list tidak kosong
    {
        //inisialisasi
        elemen* tunjuk = L.tail;
        
        int i = 1;
        while (tunjuk != NULL)      //perulangan selemen pointer tunjuk tidak berkode null
        {
            printf("%s %s %s\n", tunjuk->kontainer.nama, tunjuk->kontainer.harga, tunjuk->kontainer.kode);

            tunjuk = tunjuk->prev;
            i++;        
        }
        printf("========\n");
    }
    else
    {
        printf("List Kosong\n");
        printf("========\n");
    }

}