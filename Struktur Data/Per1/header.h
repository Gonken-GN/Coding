#include <stdio.h>
#include <string.h>
typedef struct {
    char nim[10];
    char nama[50];
    char nilai[2];
}nilai;

typedef struct {
    nilai kontainer;
    int next;
}elemen;

typedef struct{
    int first;
    elemen data[10];
}list;
void createlist(list *L);
int countelement(list L);
