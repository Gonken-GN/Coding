#include <stdio.h>

typedef struct {
    char code;
    char nama[100];
} var;

int main () {
    int n;
    scanf("%d", &n);
    int i;
    var array[n];
    i = 0;
    while(i < n) {
        scanf(" %c", &array[i].code);
        int j = 0;
        while(array[i].nama[j-1] != ';') {
            scanf(" %c", &array[i].nama[j]);
            j++;
        }
        i++;
    }
    return 0;
}