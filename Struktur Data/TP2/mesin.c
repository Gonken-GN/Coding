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

void addFirst(int harga, char nama[], int kode, list *L){
    elemen* new;                               //deklarasi pointer bernama new
    new = (elemen*) malloc (sizeof (elemen));    //perintah untuk mengalokasikan satu elemen dari memory lalu di acu oleh pointer new
    new->kontainer.harga = harga;
    strcpy(new->kontainer.nama, nama);
    new->kontainer.kode = kode;

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

void addAfter(elemen* before, int harga, char nama[], int kode, list *L){
    elemen* new;
    new = (elemen*) malloc (sizeof (elemen));
    new->kontainer.harga = harga;
    strcpy(new->kontainer.nama, nama);
    new->kontainer.kode = kode;

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

void addLast(int harga, char nama[], int kode, list *L){
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
void addLastt(int harga, char nama[], int kode, list *L){
   if ((*L).first == NULL)     //jika list kosong
    {
        addFirst(harga, nama, kode, L);
    }
    else
    {
        if(harga < (*L).first->kontainer.harga){
            addFirst(harga, nama, kode, L);
        }else{
            addAfter((*L).tail, harga, nama, kode , L);
        }
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
            printf("%s %d %d\n", tunjuk->kontainer.nama, tunjuk->kontainer.harga, tunjuk->kontainer.kode);

            tunjuk = tunjuk->next;
            i++;        
        }
    }
    else
    {
        printf("=================\n");
        printf(" Loh kok gaada:(\n");
        printf("=================\n");
    }

}
void printRElement(list L)
{
    if (L.first != NULL)    //jika list tidak kosong
    {
        //inisialisasi
        elemen* tunjuk = L.tail;
        int i = 1;
        while (tunjuk != NULL)      //perulangan selemen pointer tunjuk tidak berkode null
        {
            printf("%s %d %d\n", tunjuk->kontainer.nama, tunjuk->kontainer.harga, tunjuk->kontainer.kode);

            tunjuk = tunjuk->prev;
            i++;        
        }
    }
    else
    {
        printf("=================\n");
        printf(" Loh kok gaada:(\n");
        printf("=================\n");
    }

}
void hapus(list *L){
    elemen* tunjuk = (*L).first;
    while(tunjuk->next != NULL){
        if(tunjuk->next->kontainer.kode % 2 == 1){
            delLast(L);
        }
        tunjuk = tunjuk->next;
        
    }
}
void sort(int banyak, list *L){
    int j = 0;
    elemen *tempa;
    elemen *tempb;
    elemen *tempc;
    for(int i=0;i<banyak;i++){
        elemen* temprev = (*L).first;
        elemen* tunjuk = (*L).first;
        j=0;
        while((tunjuk->next != NULL) && (j < banyak-1)){
             
            if(strcmp(metode, "H") == 0){
                if((tunjuk->kontainer.harga > tunjuk->next->kontainer.harga) && (strcmp(urut, "Asc") == 0)){
                    tempa = tunjuk;
                    tempb = tunjuk->next;
                    tempc = tunjuk->prev;
                    tunjuk->prev = tempc->prev;
                    tunjuk->next = tempb->next;
                    tempb->next = tempa;
                    if(tunjuk == (*L).first){
                        (*L).first = tempb;
                        tempb->prev = NULL;
                    }else{
                        tempa->prev = tempb;
                        temprev->next = tempb;
                    }
                    tunjuk = tempb;   
                }else if((tunjuk->kontainer.harga < tunjuk->next->kontainer.harga) && (strcmp(urut, "Desc") == 0)){
                    tempa = tunjuk;
                    tempb = tunjuk->next;
                    tunjuk->next = tempb->next;
                    tempb->next = tempa;
                    if(tunjuk == (*L).first){
                        (*L).first = tempb;
                    }else{
                        temprev->next = tempb;
                    }
                    tunjuk = tempb;  
                }
                temprev = tunjuk;
                tunjuk = tunjuk->next;
                j++;   
            }else if(strcmp(metode, "K") == 0){
                if((tunjuk->kontainer.kode > tunjuk->next->kontainer.kode) && (strcmp(urut, "Asc") == 0)){
                    tempa = tunjuk;
                    tempb = tunjuk->next;
                    tunjuk->next = tempb->next;
                    tempb->next = tempa;
                    if(tunjuk == (*L).first){
                        (*L).first = tempb;
                    }else{
                        temprev->next = tempb;
                    }
                    tunjuk = tempb;   
                }else if((tunjuk->kontainer.kode < tunjuk->next->kontainer.kode) && (strcmp(urut, "Desc") == 0)){
                    tempa = tunjuk;
                    tempb = tunjuk->next;
                    tunjuk->next = tempb->next;
                    tempb->next = tempa;
                    if(tunjuk == (*L).first){
                        (*L).first = tempb;
                    }else{
                        temprev->next = tempb;
                    }
                    tunjuk = tempb;  
                }
                temprev = tunjuk;
                tunjuk = tunjuk->next;
                j++;
            }
        }
        if(tunjuk->next == NULL){
                        (*L).tail = tempb;
        }
    }
}
 /*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 2 (TP2) dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/