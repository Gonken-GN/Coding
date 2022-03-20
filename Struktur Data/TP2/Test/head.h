//library
#include <stdio.h>
#include <malloc.h>
#include <string.h>

//deklrasi typedef struct, pointer, dan properti list
typedef struct {
    char nama[64];
    int harga;
    int kode;
}komponen;
typedef struct elmt* alamat;
typedef struct elmt{
    komponen kontainer;
    alamat prev;
    alamat next;
}elemen;
typedef struct {
    elemen *first;
    elemen *tail;
}list;

//deklarasi prosedur dan fungsi untuk list
void create_list(list *L);
int count_elemen(list L);
void add_first(char nama[], int harga, int kode, list *L);
void add_after(elemen* before, char nama[], int harga, int kode, list *L);
void add_before(elemen* before, char nama[], int harga, int kode, list *L);
void add_last(char nama[], int harga, int kode, list *L);
void del_first(list *L);
void del_after(elemen* before, list *L);
void del_last(list *L);
void del_all(list *L);
void print_elemen(list L);
void print_elemen_rev(list L);
void hapus(list *L);

//typedef sementara
typedef struct{
    char tempnama[64];
    int tempharga;
    int tempkode;
}temp;

void bubblesort(list *L);

int banyak;
char sortby;
char method[64];