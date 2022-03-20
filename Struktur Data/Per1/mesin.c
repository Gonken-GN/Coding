#include "header.h"
void createlist(list *L){
    (*L).first = -1;
    int i;
    for(i=0;i<10;i++){
        (*L).data[i].next = -2;
    }
}
int countelement(list L){
    
}