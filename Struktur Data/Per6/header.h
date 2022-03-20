#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct{
    char nim[10];
    char nama[50];
    float nilai;
}mhsiswa;

typedef struct elmt *alamatelmt;
typedef struct elmt{
    mhsiswa kontainer;
    alamatelmt next;
}elemen;

typedef struct{
    elemen* top;
}stack;

void createEmpty(stack *S);
int isEmpty(stack S);
int countElement(stack S);
void push(char nim[], char nama[], float nilai, stack *S);
void pop(stack *S);
void printelemen(stack S);
