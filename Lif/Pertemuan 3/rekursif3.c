#include <stdio.h>

int CariFPB(int a, int b) {
    if(b == 0) {
        return a;
    } else {
        int temp = a % b;
        return CariFPB(b, temp);
    }
}

int main () {
    int a, b;
    scanf("%d %d", &a, &b);
    int hasil = CariFPB(a, b);
    printf("hasil fpb: %d\n", hasil);

    return main();
}