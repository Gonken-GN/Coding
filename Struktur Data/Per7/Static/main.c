#include "header.h"
int main (){
    queue Q;
    createEmpty(&Q);
    print(Q);
    int n;
    scanf("%d", &n);
    nilai tampung[n];
    int indeks;
    for(int i = 0;i<n;i++){
        scanf("%s %s %f %d", &tampung[i].nim, &tampung[i].nama, &tampung[i].nilai, &indeks);
        add(tampung[i].nim, tampung[i].nama, tampung[i].nilai, &Q);
    }
    print(Q);
    printf("++++++++++++++\n");
    del(&Q);
    del(&Q);
    print(Q);
    return 0;
}