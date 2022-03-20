#include "header.h"

int main()
{
    list L;
    createList(&L);
    int i, n;
    scanf("%d", &n);
    int str[n];
    for(i=0;i<n;i++){
        scanf("%d", &str[i]);
        addFirst(str[i], &L);
    }
    printElement(L);
    return 0;
}