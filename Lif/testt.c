#include <stdio.h>
#include <string.h>

int main () {
    char nama[100];

    while(strcmp(nama, "stop") != 0) {
        scanf(" %s", nama);
    }
}