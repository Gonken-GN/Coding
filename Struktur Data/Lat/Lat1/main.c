#include "header.h"

int main()
{
    list L;
    createList(&L);
    int n, i, j = 0;
    scanf("%d", &n);
    char str[n][100];
    int max[n];
    for(i=0;i<n;i++){
        max[i] = 0;
        scanf("%s", str[i]);
        for(j=0;j<strlen(str[i]);j++){
            if(str[i][j] == 'a' || str[i][j] == 'A'){
                max[i]+= 1;
            }
        }
    }
    sort(n, max, str);
    for(i=0;i<n;i++){
        addFirst(str[i], &L);
    }
    printElement(L);
    return 0;
}