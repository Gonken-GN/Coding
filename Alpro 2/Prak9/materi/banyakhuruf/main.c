#include <stdio.h>
#include "head.h"

int main(){

    char pita[50];
    printf("masukkan pada kalimat pada pita\n");
    scanf("%49[^\n]s", &pita);

    int n=0;
    start(pita);
    while (eop()==0){
        n++;
        adv(pita);
    }
    printf("nanyak huruf adalah %d\n", n);
    
    return 0;

}