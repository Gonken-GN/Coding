#include "head.h"

//membuat list
void create_list(list *L){
    (*L).first = NULL;
    (*L).tail = NULL;
}

//menghitung elemen list
int count_elemen(list L){
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

//add first
void add_first(char nama[], int harga, int kode, list *L){
    elemen* new;
    new = (elemen*) malloc (sizeof (elemen));
    strcpy(new->kontainer.nama, nama);
    new->kontainer.harga=harga;
    new->kontainer.kode=kode;

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

//add after
void add_after(elemen* before, char nama[], int harga, int kode, list *L){
    elemen* new;
    new = (elemen*) malloc (sizeof (elemen));
    strcpy(new->kontainer.nama, nama);
    new->kontainer.harga=harga;
    new->kontainer.kode=kode;

    if (before->next == NULL)
    {
        new->next = NULL;
        (*L).tail = new;
    }
    else
    {
        new->next = before->next;
        new->next->prev = new; 
    }
    new->prev = before;
    before->next = new;
    new = NULL;
}

//add before
void add_before(elemen* after, char nama[], int harga, int kode, list *L){
    elemen* new;
    new = (elemen*) malloc (sizeof (elemen));
    strcpy(new->kontainer.nama, nama);
    new->kontainer.harga=harga;
    new->kontainer.kode=kode;

    if (after->prev == NULL)
    {
        new->prev = NULL;
        (*L).tail = new;
    }
    else
    {
        new->prev = after->prev;
        new->prev->next = new; 
    }
    new->next = after;
    after->prev = new;

    new = NULL;
}

//add last
void add_last(char nama[], int harga, int kode, list *L){
    if ((*L).first == NULL)
    {
        add_first(nama, harga, kode, L);
    }
    else
    {
        add_after((*L).tail, nama, harga, kode, L);
    }
}

//delfirst
void del_first(list *L)
{
    
    if ((*L).first != NULL)
    {
        elemen* erase = (*L).first;
        if (count_elemen(*L) == 1)
        {
            (*L).first = NULL;
            (*L).tail = NULL;
        }
        else{
            (*L).first = (*L).first->next;
            (*L).first->prev = NULL;
            erase->next = NULL;
        }

        free(erase);
    }
    else
    {
        printf(" Loh kok gaada:(\n");
    }
}

//delafter
void del_after(elemen* before, list *L)
{
    if (before != NULL)
    {
        elemen* erase = before->next;
    
        if (erase != NULL)
        {
            if (erase->next == NULL)
            {
                before->next = NULL;
                (*L).tail=before;
            }
            else
            {       
                before->next = erase->next;
                erase->next->prev = before;
                erase->next = NULL;
            }
            erase->prev = NULL;
            free(erase);
        }
    }
}

//dellast
void del_last(list *L)
{
    if ((*L).first != NULL)
    {
        if (count_elemen(*L) == 1)
        {
            del_first(L);
        }
        else
        {
            del_after((*L).tail->prev, L);
        }
    }
    else
    {
        printf(" Loh kok gaada:(\n");
    }
    
}

//delall
void del_all(list *L)
{
    if (count_elemen(*L) != 0)
    {
        int i;

        for ( i = count_elemen(*L); i >= 1; i--)
        {
            del_last(L);
        }
    }
    else
    {
        printf(" Loh kok gaada:(\n");
    }
}

void bubblesort(list *L){

    int i, j, tukar;
    elemen *tunjuk;
    elemen *sebelum;
    
    for(i=0; i<banyak; i++){
        tunjuk = (*L).first;
        sebelum = (*L).first;
        j=0;
        elemen *tempA;
        elemen *tempB;
        if(strcmp(method, "Asc")==0){
            if(sortby=='K'){
                while((tunjuk->next != NULL)&&(j < banyak-1)){
                    if(tunjuk->kontainer.kode > tunjuk->next->kontainer.kode){
                        tempA=tunjuk;
                        tempB=tunjuk->next;

                        tunjuk->next=tempB->next;
                        tunjuk->prev=tempB;
                        tempB->next=tempA;
                        tempA->prev=tempB;
                        
                        if(tunjuk==(*L).first){
                            (*L).first=tempB;
                            tempB->prev=NULL;
                            tempA->next=tempB->next;
                        }else if(tunjuk==(*L).tail){
                            (*L).tail=tempA;
                            tempA->next=NULL;
                            tempB->prev=sebelum;
                        }else{
                            sebelum->next=tempB;
                            tempB->prev=sebelum;
                        }
                        tunjuk=tempB;
                    }
                    sebelum=tunjuk;
                    tunjuk=tunjuk->next;
                    j++;
                }
            }else if(sortby=='H'){
                while((tunjuk->next != NULL)&&(j < banyak-1)){
                    if(tunjuk->kontainer.harga > tunjuk->next->kontainer.harga){
                        tempA=tunjuk;
                        tempB=tunjuk->next;

                        tunjuk->next=tempB->next;
                        tunjuk->prev=tempB;
                        tempB->next=tempA;
                        tempA->prev=tempB;
                        
                        if(tunjuk==(*L).first){
                            (*L).first=tempB;
                            tempB->prev=NULL;
                            tempA->next=tempB->next;
                        }else if(tunjuk->next == NULL){
                            (*L).tail=tempA;
                            tempA->next=NULL;
                            tempB->prev=sebelum;
                        }else{
                            sebelum->next=tempB;
                            tempB->prev=sebelum;
                        }
                        tunjuk=tempB;
                    }
                    sebelum=tunjuk;
                    tunjuk=tunjuk->next;
                    j++;
                }
            }
        }else if(strcmp(method, "Desc")==0){
            if(sortby=='K'){
                while((tunjuk->next != NULL)&&(j < banyak-1)){
                    if(tunjuk->kontainer.kode < tunjuk->next->kontainer.kode){
                        tempA=tunjuk;
                        tempB=tunjuk->next;

                        tunjuk->next=tempB->next;
                        tunjuk->prev=tempB;
                        tempB->next=tempA;
                        tempA->prev=tempB;
                        
                        if(tunjuk==(*L).first){
                            (*L).first=tempB;
                            tempB->prev=NULL;
                            tempA->next=tempB->next;
                        }else if(tunjuk==(*L).tail){
                            (*L).tail=tempA;
                            tempA->next=NULL;
                            tempB->prev=sebelum;
                        }else{
                            sebelum->next=tempB;
                            tempB->prev=sebelum;
                        }
                        tunjuk=tempB;
                    }
                    sebelum=tunjuk;
                    tunjuk=tunjuk->next;
                    j++;
                }
            }else if(sortby=='H'){
                while((tunjuk->next != NULL)&&(j < banyak-1)){
                    if(tunjuk->kontainer.harga < tunjuk->next->kontainer.harga){
                        tempA=tunjuk;
                        tempB=tunjuk->next;

                        tunjuk->next=tempB->next;
                        tunjuk->prev=tempB;
                        tempB->next=tempA;
                        tempA->prev=tempB;
                        
                        if(tunjuk==(*L).first){
                            (*L).first=tempB;
                            tempB->prev=NULL;
                            tempA->next=tempB->next;
                        }else if(tunjuk==(*L).tail){
                            (*L).tail=tempA;
                            tempA->next=NULL;
                            tempB->prev=sebelum;
                        }else{
                            sebelum->next=tempB;
                            tempB->prev=sebelum;
                        }
                        tunjuk=tempB;
                    }
                    sebelum=tunjuk;
                    tunjuk=tunjuk->next;
                    j++;
                }
            }
            // while((tunjuk->next != NULL)&&(j<banyak-1)){
            //     if(sortby=='K'){
            //         if(tunjuk->kontainer.kode < tunjuk->next->kontainer.kode){
            //             tempA=tunjuk;
            //             tempB=tunjuk->next;
            //             tunjuk->next=tempB->next;
            //             tempB->next=tempA;
            //             if(tunjuk==(*L).first){
            //                 (*L).first=tempB;
            //             }else{
            //                 sebelum->next=tempB;
            //             }
            //             tunjuk=tempB;
            //         }
            //         sebelum=tunjuk;
            //         tunjuk=tunjuk->next;
            //         j++;
            //     }else if(sortby=='H'){
            //         if(tunjuk->kontainer.harga < tunjuk->next->kontainer.harga){
            //             tempA=tunjuk;
            //             tempB=tunjuk->next;
            //             tunjuk->next=tempB->next;
            //             tempB->next=tempA;
            //             if(tunjuk==(*L).first){
            //                 (*L).first=tempB;
            //             }else{
            //                 sebelum->next=tempB;
            //             }
            //             tunjuk=tempB;
            //         }
            //         sebelum=tunjuk;
            //         tunjuk=tunjuk->next;
            //         j++;
            //     }
            // }
        }   
    }
}

//hapus ganjil
void hapus(list *L)
{
    if ((*L).first != NULL)
    {
        elemen* tunjuk = (*L).first->next;
        
        while (tunjuk != NULL){
            if(tunjuk->kontainer.kode %2==1){
                tunjuk=tunjuk->prev;
                del_after(tunjuk, L);
            }
            tunjuk = tunjuk->next; 
        }
        if((*L).first->kontainer.kode%2==1){
            del_first(L);
        }
    }

}


//print elemen list
void print_elemen(list L)
{
    if (L.first != NULL)
    {
        //inisialisasi
        elemen* tunjuk = L.first;
        
        while (tunjuk != NULL)
        {
            printf("%s ",tunjuk->kontainer.nama);
            printf("%d ",tunjuk->kontainer.harga);
            printf("%d\n",tunjuk->kontainer.kode);

            tunjuk = tunjuk->next;      
        }
    }
    else
    {
        printf("=================\n");
        printf(" Loh kok gaada:(\n");
        printf("=================\n");
    }

}

//print elemen list terbalik
void print_elemen_rev(list L)
{
    if (L.first != NULL)
    {
        //inisialisasi
        elemen* tunjuk = L.tail;
        
        while (tunjuk != NULL)
        {
            printf("%s ",tunjuk->kontainer.nama);
            printf("%d ",tunjuk->kontainer.harga);
            printf("%d\n",tunjuk->kontainer.kode);

            tunjuk = tunjuk->prev; 
        }
    }
    else
    {
        printf("=================\n");
        printf(" Loh kok gaada:(\n");
        printf("=================\n");
    }

}