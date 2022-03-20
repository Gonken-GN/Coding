#include <stdio.h>
#include <string.h>

#define forI(i, n) for (i = 0; i < n; i++)

typedef struct
{
    char nama_pemilik[50];
    char jenis[50];
} pakaian;

typedef struct
{
    int top;
    pakaian data[50];
} stack;

void createEmpty(stack *S);
int isEmpty(stack S);
int isFull(stack S);
void push(char nama_pemilik[], char jenis[], stack *S);
void pop(stack *S);
void printStack(stack S[], int n);
void printStackBatas(stack S[], int n);
void ambilPakaian(stack *S, stack *temp, char pengambil[][50], int n);
