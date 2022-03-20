#include "header.h"
int main (){
    int i, n;
    scanf("%d", &n);
    char str[n][100];
    for(i=0;i<n;i++){
        scanf("%s", &str[i]);
    }
    cek(n, str);
    return 0;
}