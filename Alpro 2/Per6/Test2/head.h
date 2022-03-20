#include <stdio.h>
#include <string.h>

//descending konsonan

typedef struct{
    char string[100];
    int konsonan;
}data;

int n, m, p;
char metodesort[100];

void bubblesort(data array[], int banyak);

void merging(int banyaksatu, int banyakdua, data datasatu[], data datadua[], data merged[]);