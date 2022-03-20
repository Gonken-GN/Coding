#include <stdio.h> //library stdio.h
#include <string.h> //library string.h

//deklarasi tipe data terstruktyur untuk data list
typedef struct{
    char kata[64];
}word;

//deklarasi next dan prev untuk list
typedef struct{
    word kontainer;
    int prev;
    int next;
}elemen;

//deklarasi first dan tail untuk list
typedef struct{
    int first;
    int tail;
    elemen data[64];
}list;

//deklarasi tipedata terstruktur data list sementara
typedef struct{
    char tempkata[64];
}temp;

int banyak;

//deklarasi prosedur dan fungsi list
void createList(list *L);
int countElement(list L);
int emptyElement(list L);
void addFirst(char kata[], list *L);
void addAfter(int before, char kata[], list *L);
void addLast(char kata[], list *L);
void delFirst(list *L);
void delAfter(int before, list *L);
void delLast(list *L);
void printElement(list L);
void printReverse(list L);
void delAll(list *L);

//prosedur pencetak pola
void pola(list L);


/*
Janji
Saya Muhammad Rafi Shidiq 2004222 mengerjakan 	
(gasta21) Ganda Statis Depan Belakang
dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak
melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin
*/