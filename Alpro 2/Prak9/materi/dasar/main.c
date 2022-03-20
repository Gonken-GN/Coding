#include <stdio.h>
#include "head.h"

int main(){

    char pita[50];
    printf("masukkan pada kalimat pada pita\n");
    scanf("%49[^\n]s", &pita);

    start(pita);
    printf("%c\n", getcc());
    while (eop()==0){
        inc(pita);
        printf("%c\n", getcc());
    }
    
    return 0;

}