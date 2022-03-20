#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct{
    char nim[100];
    char nama[100];
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
void push(char nim[], char nama[], stack *S);
void pop(stack *S);
void geser(stack *S, stack *W);
void printelemen(stack S);
