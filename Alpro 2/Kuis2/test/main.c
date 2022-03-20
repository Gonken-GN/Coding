#include "head.h"

int main(){

    int i;
    scanf("%d", &n);
    data input[n];
    char tempstat[100];
    for(i=0; i<n; i++){
        scanf("%s", &input[i].nama);
        scanf("%d", &input[i].berat);
        scanf("%d", &input[i].harga);
        scanf("%s", &tempstat);
        if(strcmp(tempstat, "premium")==1){
            input[i].status=1;
        }else{
            input[i].status=0;
        }
        input[i].hargaperberat=input[i].harga/input[i].berat;
    }
    scanf("%d", &cari);

    bubblesort(input, n);
    binarysearch(input);

    if(statusditemukan==1){
        printf("nama kurma: %s\n", input[indekssimpan].nama);
        printf("berat: %d\n", input[indekssimpan].berat);
        printf("harga: %d\n", input[indekssimpan].harga);
        printf("harga per berat: %d\n", input[indekssimpan].hargaperberat);
        if(input[indekssimpan].status==1){
            printf("status premium: ya\n");
        }else{
            printf("status premium: tidak\n");
        }
    }else{
        printf("tidak ditemukan\n");
    }

    return 0;

}