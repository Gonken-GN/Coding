/*  (PKL21) Playlist Kesukaan Lord (Header)

    Saya Hilman Fauzi Herdiana (2000879) mengerjakan Tugas Praktikum 2 dalam 
    mata kuliah Stuktur Data untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct {
    int tahun;
    char judul[100];
    char artis[100];
}lagu;

typedef struct elmt *alamatelmt;
typedef struct elmt {
    lagu kontainer;
    alamatelmt next;
}elemen;

typedef struct {
    elemen* top;
}stack;

void createEmpty(stack *S);
int isEmpty(stack S);
int countElement(stack S);
void push(int tahun, char judul[], char artis[], stack *S);
void pop(stack *S);
void printRock(stack S);
void printPop(stack S);
void allProcess(stack S1, stack S2, stack S3);