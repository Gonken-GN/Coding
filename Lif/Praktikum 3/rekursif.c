#include <stdio.h>

void alfabet(int i) {
    printf("%c ", i);

    if(i > 'a') {
        alfabet(i-1);
    }
}

int main () {

    char a;
    scanf(" %c", &a);
    alfabet(a);

    return 0;
}