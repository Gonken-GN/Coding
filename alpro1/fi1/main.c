#include"head.h"

int main(){

    int i, j;
    scanf("%d", &banyak);
    for(i=0; i<banyak; i++){
        scanf("%s", input[i].string);
        input[i].panjang=strlen(input[i].string);
        input[i].cek=0;
    }

    olahdata();
    output();

    return 0;
}