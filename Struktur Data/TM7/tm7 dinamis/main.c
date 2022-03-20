#include"header.h"

int main(){
    queue Q,Q1,Q2;
    createEmpty(&Q);
    createEmpty(&Q1);
    createEmpty(&Q2);
    int i;

    game input[6];
    for(i=0; i<6; i++){
        scanf("%s %d", input[i].name, &input[i].rating);
    }

    printf("******************\n");
    add(input[0], &Q1);
    add(input[1], &Q1);
    priorityQueue(input[2], 2, &Q1);
    printQueue(Q1, 1);

    out(&Q1);
    add(input[0], &Q2);

    printQueue(Q1, 1);
    printQueue(Q2, 2);

    priorityQueue(input[3], 1, &Q1);
    priorityQueue(input[4], 99, &Q1);
    printQueue(Q1, 1);

    out(&Q1);
    add(input[3], &Q2);
    out(&Q1);
    add(input[2], &Q2);

    add(input[5], &Q1);
    printQueue(Q1, 1);
    printQueue(Q2, 2);
    return 0;
}