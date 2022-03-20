#include "head.h"
void start(char pita[]){
    indeks=0;
    cc=pita[indeks];
}
void inc(char pita[]){
    indeks++;
    cc=pita[indeks];
}
int eop(){
    if(cc=='.'){
        return 1;
    }else{
        return 0;
    }
}
void adv(char pita[]){
    indeks++;
    cc=pita[indeks];
    while((cc==' ')&&(eop()==0)){
        indeks++;
        cc=pita[indeks];
    }
}
char getcc(){
    return cc;
}