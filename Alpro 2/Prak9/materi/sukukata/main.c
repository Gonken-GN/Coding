#include <stdio.h>
#include "head.h"

int main(){

    char pita[50];
    printf("masukkan pada kalimat pada pita\n");
    scanf("%49[^\n]s", &pita);

    //hitung kak
    char temp1, temp2;
    int n=0;
    start(pita);
    while (eop()==0){
        temp1=getcc();
        printf("%c", temp1);
        inc(pita);
        if(eop()==0){
            temp2=getcc();
            printf("%c, ", temp2);
            if(eop()==0){
                if((temp1=='k')&&(temp2=='a')){
                    n++;
                }
            }
        }
    }
    printf("%d", n);
    return 0;

}