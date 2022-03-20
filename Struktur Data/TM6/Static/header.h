#include <stdio.h>
#include <string.h>

typedef struct{
    char nim[100];
    char nama[100];
}mhsiswa;

typedef struct{
    int top;
    mhsiswa data[10];
}stack;

void createEmpty(stack *S);
int isEmpty(stack S);
int isfull(stack S);
void push(char nim[], char nama[], stack *S);
void pop(stack *S);
void printelemen(stack S);
void geser(stack *S, stack *W);
