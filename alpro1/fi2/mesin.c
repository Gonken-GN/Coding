#include"head.h"

int main(){

    scanf("%d", &banyak);
    int i;
    for(i=0; i<banyak; i++){
        scanf("%s", &input[i].string);
        input[i].pst=strlen(input[i].string);
        input[i].cek=0;
    }
    olahdata();
    output();

    return 0;
}