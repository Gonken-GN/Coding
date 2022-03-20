#include <stdio.h>
#include <malloc.h>
#include <string.h>
	/* Saya Hanifah Al Humaira mengerjakan kuis2 dalam 
	mata kuliah struktur data untuk keberkahanNya maka 
	saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. 
	Aamiin*/
typedef struct
{
    char nama[50];
    char jenis_member[50];
    int waktu;
    int prioritas;
} klien;

typedef struct elm *alamatelmt;
typedef struct elm
{
    klien kontainer;
    alamatelmt next;
} elemen;

typedef struct
{
    elemen *first;
    elemen *last;
} queue;

void createEmpty(queue *Q);
int isEmpty(queue Q);
int countElement(queue Q);
void addP(char nama[], char jenis_member[], int waktu, queue *Q);
void del(queue *Q);
void printQueue(queue Q);
void konsultasi(queue *Q);