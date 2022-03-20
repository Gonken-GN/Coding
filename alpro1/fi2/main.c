#include"head.h"

void olahdata(){

    int i, j, k;
    for(i=0; i<banyak; i++){
        for(j=0; j<input[i].pst; j++){
            if(input[i].string[j]==input[i].string[0]){
                input[i].cek++;
            }
        }
    }

}

void output(){

    int i, j, k;
    int terbesar=input[0].cek;
    for(i=1; i<banyak; i++){
        if(input[i].cek>terbesar){
            terbesar=input[i].cek;
        }
    }
    printf("%d", terbesar);

}