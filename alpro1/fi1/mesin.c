#include"head.h"

void olahdata(){

    int i, j, k;
    for(i=0; i<banyak; i++){
        k=0;
        for(j=0; j<input[i].panjang; j++){
            if(input[i].string[j]=='a' || input[i].string[j]=='i' ||
             input[i].string[j]=='u' || input[i].string[j]=='e' || 
             input[i].string[j]=='o' || input[i].string[j]=='A' ||
              input[i].string[j]=='I' || input[i].string[j]=='U' ||
               input[i].string[j]=='E' || input[i].string[j]=='O'){
                   input[i].cek++;
                   input[i].vokal[k]=input[i].string[j];
                   k++;
               }
        }
        input[i].vokal[k]='\0';
        input[i].pvokal=strlen(input[i].vokal);
    }

}

void output(){

    int i, j, k;
    for(i=0; i<banyak; i++){
        if(input[i].cek>0){
            printf("%s", input[i].vokal);
            for(j=0; j<input[i].pvokal; j++){
                printf(" ");
            }
            printf("%s", input[i].string);
        }else if(input[i].cek==0){
            printf("%s", input[i].string);
        }
        printf("\n");
    }
    //printf("%d", input[0].vokal[1]);

}