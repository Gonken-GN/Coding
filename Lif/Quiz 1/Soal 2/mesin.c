#include "header.h"

int deret(int awal, int batas) {
    int a = awal;
    int j;

    if(a == 0) {
        a = 0;
        printf("%d", a);
    } else {
        printf("%d ", a);
        a = a / 2;
        return deret(a, batas);
    }
        
}

