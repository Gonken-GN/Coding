#include <stdio.h>

int main () {

    int i, j, n;

    scanf("%d", &n);

    int a = 1;

    for(i=1;i<=n;i++) {
        a = a * i;
    }

    printf("%d", a);

    return 0;
}