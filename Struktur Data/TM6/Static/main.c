#include "header.h"
int main (){
    stack S;
    stack W;
    createEmpty(&S);
    createEmpty(&W);
    int i;
    char input1[10][100], input2[10][100];
    for(i=0;i<6;i++){
        scanf("%s %s", input1[i], input2[i]);
    }
    printf("S1:\n");
    
    printelemen(S);
    printf("S2:\n");
    printelemen(W);
    printf("==================\n");
    int iterator = 0;
    push(input1[0], input2[0], &S);iterator++;
    push(input1[1], input2[1], &W);iterator++;
    push(input1[2], input2[2], &W);iterator++;
    printf("S1:\n");
    printelemen(S);
    printf("S2:\n");
    printelemen(W);
    printf("==================\n");
    pop(&S);
    push(input1[2], input2[2], &S);
    pop(&W);
    push(input1[3], input2[3], &S);iterator++;
    push(input1[4], input2[4], &W);iterator++;
    push(input1[5], input2[5], &S);
    pop(&W);
    push(input1[5], input2[5], &W);
    pop(&S);
    printf("S1:\n");
    printelemen(S);
    printf("S2:\n");
    printelemen(W);
    printf("==================\n");
    return 0;
}






  










