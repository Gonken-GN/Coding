#include <stdio.h>
#include <string.h>
typedef struct{
    char input[100];
    int konso;
}test;

void insert(test arr[], int banyak);
void selec(test arr[], int banyak);
void buble(test arr[], int banyak);
void quick(test arr[], int left, int right);
void gabung(int banyak, int banyak2, test arr1[], test arr2[], test baru[]);