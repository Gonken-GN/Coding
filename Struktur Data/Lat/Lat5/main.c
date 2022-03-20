#include "header.h"

int main()
{
    list L;
    createList(&L);
    int n, i, j = 0;
    scanf("%d", &n);
    float str[n];
    int tampung2[n];
    float tampung[n];
    for(i=0;i<n;i++){
        scanf("%f", &str[i]);
        tampung2[i] = str[i];
        tampung[i] = str[i] - tampung2[i];
    }
    sort(n, str, tampung);
    for(i=0;i<n;i++){
       addFirst(str[i], &L);
    }
    printElement(L);
    return 0;
}