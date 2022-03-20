/*											
format janji:
Saya Axel Eldrian Hadiwibowo 2000352 
mengerjakan tugas cksg21
dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. 
Aamiin
*/

#include <stdio.h>
#include <string.h>
#include <malloc.h>
 

 // Variable global
 int i, ix, i1, i2;
 int n1, n2, nswap;

// typedef struct untuk memperoses pada mesin
typedef struct{
    char nama_masakan[50];
    int harga_masakan;
}senyawa;

typedef struct elmt* alamatelemen; // pointer
typedef struct elmt{
    senyawa box;
    alamatelemen next;
}elemen;

typedef struct{
    elemen* first;// untuk list awal
}list;

void createlist (list *L); // membuat list
int countelemen(list L); // menghitung jumlah list
void addfirst(char nama_masakan[], int harga_masakan, list *L); // menambahkan data pada list awal
void addafter(elemen* prev, char nama_masakan[], int harga_masakan); // menambahkan data setelahnya
void addlast(char nama_masakan[], int harga_masakan, list *L); // menambahkan data di akhir
void delfirst(list *L); // delete list di bagian awal
void delafter(elemen* prev, list *L); // delete list dibagian tertentu
void dellast(list *L); // delete dibagian akhir
void printelemen(list L); // print keseluruhan list
void delall(list *L); // mendelete selutuh list
void conf(char swap_food_2[], list *L1, list *L2);