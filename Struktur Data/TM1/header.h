#include <stdio.h>
#include <string.h>
/* Code untuk list tunggal statis dan untuk menyimpan input*/
typedef struct
{
    char warna[50];
    char nama[50];
    char ukuran[3];
} sepatu;

typedef struct
{
    sepatu kontainer;
    int next;
} elemen;

typedef struct
{
    int first;
    elemen data[10];
} list;
typedef struct
{
    char warna[50];
    char nama[50];
    char ukuran[3];
} temp;
//Prosedur-prosedur untuk membuat list dan mengisi atau menghapus isi dari list
void createList(list *L);
int countElement(list L);
int emptyElement(list L);
void addFirst(char nim[], char nama[], char nilai[], list *L);
void addAfter(int prev, char nim[], char nama[], char nilai[], list *L);
void addLast(char nim[], char nama[], char nilai[], list *L);
void delFirst(list *L);
void delAfter(int prev, list *L);
void delLast(list *L);
void printElement(list L);
void delAll(list *L);