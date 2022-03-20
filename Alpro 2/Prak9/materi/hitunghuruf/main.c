#include <stdio.h>
#include "head.h"

int main(){

    char pita[50];
    printf("masukkan pada kalimat pada pita\n");
    scanf("%49[^\n]s", &pita);

    start(pita);
    printf("%c\n", getcc());
    while (eop()==0){
        if(getcc()=='a'){
            penghitung++;
            printf("%c - %d\n", getcc(), indeks);
        }
        inc(pita);
        
    }
    printf("total huruf a = %d\n", penghitung);
    
    return 0;

}