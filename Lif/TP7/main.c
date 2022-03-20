#include "header.h"

int main () {

    int i, j, n;
    scanf("%d", &n);
    int array[n];
    for(i=0;i<n;i++) {
        scanf("%d", &array[i]);
    }

    search(n, array);

    return 0;
}