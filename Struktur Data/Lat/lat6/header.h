#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct{
    int nama;
    int nim;
    int nilai;
} nilaimatkul;
typedef struct elmt* alamatelmt;
typedef struct elmt{
    nilaimatkul kontainer;
    alamatelmt next;
}elemen;
typedef struct{
    elemen* first;
}list;
typedef struct{
    int jam;
    int menit;
    int detik;
    int tampungj;
    int tampungm;
    int total;
}waktu;
void createList(list *L);
int countElement(list L);
int emptyElement(list L);
void addFirst(int nim, int nama, int nilai, list *L);
void addAfter(elemen* prev, int nim[], int nama[], int nilai[], list *L);
void addLast(int nim[], int nama[], int nilai[], list *L);
void delFirst(list *L);
void delAfter(elemen* prev, list *L);
void delLast(list *L);
void printElement(list L);
void delAll(list *L);
void sort(int banyak, waktu data[]);