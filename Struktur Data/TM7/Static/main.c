#include "header.h"
int main (){
    queue Q, W;
    createEmpty(&Q);
    createEmpty(&W);
    int i, iterator = 0, iterator2 = 0;
    nilai tampung[10];
    for(i= 0;i<6;i++){
        scanf("%s %s", &tampung[i].nama, &tampung[i].nim);
    }
    add(tampung[iterator].nim, tampung[iterator].nama, &Q);iterator++;
    add(tampung[iterator].nim, tampung[iterator].nama, &Q);iterator++;
    addpri(tampung[iterator].nim, tampung[iterator].nama, &Q, 2);iterator++;
    printf("******************\n");
    print1(Q);

    del(&Q);
    add(tampung[iterator2].nim, tampung[iterator2].nama, &W);iterator2++;
    print1(Q);
    print2(W);

    addpri(tampung[iterator].nim, tampung[iterator].nama, &Q, 1);iterator++;
    addpri(tampung[iterator].nim, tampung[iterator].nama, &Q, 99);iterator++;
    print1(Q);

    del(&Q);
    add(tampung[3].nim, tampung[3].nama, &W);iterator2++;
    del(&Q);
    add(tampung[2].nim, tampung[2].nama, &W);iterator2++;
    add(tampung[iterator].nim, tampung[iterator].nama, &Q);iterator++;
    print1(Q);
    print2(W);
    return 0;
}