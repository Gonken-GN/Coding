#include "io.h"
int main () {
    int i, n;
    scanf("%d", &n);
    char str[n][100];
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%s", &str[i]);
        scanf("%d", &arr[i]);
    }
    cek(n, str, arr);
    return 0;
}