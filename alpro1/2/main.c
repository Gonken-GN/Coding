#include "header.h"

int main(){

    int n, i;
    scanf("%d", &n); //banyak siswa
    char namasiswa[25];
    int nilai;
    for(i=0; i<n; i++){
        scanf("%s %d", &namasiswa, &nilai);
        mesin(namasiswa, nilai);
    }

    hasil();


    return 0;
}