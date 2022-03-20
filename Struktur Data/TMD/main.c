#include "header.h"
int main(){
    tree tmd;
    int i, n, m;
    char input[100];
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%s", &input);
        OlahInput(n, input);
    }
    scanf("%d", &m);
    for(i=0;i<m;i++){
        scanf("%s", &input);
    }
}