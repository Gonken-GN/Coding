#include <stdio.h>

int power(int x, int y) {
    int hasil;
    if(y==0) {
        return 1;
    } else {
        hasil = x*(power(x, y-1));
        return hasil;
    }
}

int main () {
    int a, b;
    scanf("%d %d", &a, &b);
    int hasil = power(a, b);
    printf("hasil pangkat: %d\n", hasil);
    return 0;
}