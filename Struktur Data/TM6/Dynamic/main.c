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
    push(input1[iterator], input2[iterator], &S);iterator++;
    push(input1[iterator], input2[iterator], &W);iterator++;
    push(input1[iterator], input2[iterator], &W);iterator++;
    printf("S1:\n");
    printelemen(S);
    printf("S2:\n");
    printelemen(W);
    printf("==================\n");
    pop(&S);
    geser(&W, &S);
    push(input1[iterator], input2[iterator], &S);iterator++;
    push(input1[iterator], input2[iterator], &W);iterator++;
    push(input1[iterator], input2[iterator], &S);iterator++;
    pop(&W);
    geser(&S, &W);
    printf("S1:\n");
    printelemen(S);
    printf("S2:\n");
    printelemen(W);
    printf("==================\n");
    return 0;
}
  










