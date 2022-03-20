#include "header.h"

int main()
{
    list L;
    createList(&L);
    int n;
    scanf("%d", &n);
    char str[n][100];
    for(i=0;i<n;i++){
        scanf("%s", str[i]);
    }

    return 0;
}