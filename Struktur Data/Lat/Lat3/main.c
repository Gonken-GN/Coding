#include "header.h"

int main()
{
    list L;
    createList(&L);
    int i, n;
    scanf("%d", &n);
    float str[n];
    for(i=0;i<n;i++){
        scanf("%f", &str[i]);
        addFirst(str[i], &L);
    }
    printElement(L);
    return 0;
}