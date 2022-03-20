#include<stdio.h>
#include<malloc.h>
#include<string.h>

typedef struct
{
    /* data */
    char nama[50];
    char rumus[50];
    float konsentrasi;
}nilaiMatkul;

typedef struct elmt* alamatelmt;
typedef struct elmt
{
    /* data */
    nilaiMatkul kontainer;
    alamatelmt next;
}elemen;

typedef struct 
{
    /* data */
    elemen* first;
}list;


void createList(list *L);
int countElement(list L);
void addFirst(char nama[], char rumus[], float konsentrasi, list *L);
void addAfter(elemen* prev, char nama[], char rumus[], float konsentrasi, list *L);
void addLast(char nama[], char rumus[], float konsentrasi, list *L);
void delFirst(list *L);
void delAfter(elemen* prev, list *L);
void delLast(list *L);
void printElement(list L);
void delAll(list *L);
