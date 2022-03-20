#include <stdio.h>
#include <string.h>

typedef struct{
    char nim[10];
    char nama[50];
    float nilai;
}mhsiswa;

typedef struct{
    int top;
    mhsiswa data[10];
}stack;

void createEmpty(stack *S);
int isEmpty(stack S);
int isfull(stack S);
void push(char nim[], char nama[], float nilai, stack *S);
void pop(stack *S);
void printelemen(stack S);
