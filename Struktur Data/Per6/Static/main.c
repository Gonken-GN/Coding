#include "header.h"
int main (){
    stack S;
    createEmpty(&S);
    printelemen(S);
    push("200430", "Lufy", 2.5, &S);
    push("2004306", "Zoro", 83.2, &S);
    printelemen(S);
    printf("+++++++++++++++\n");
    pop(&S);
    printelemen(S);
    return 0;
}
  










