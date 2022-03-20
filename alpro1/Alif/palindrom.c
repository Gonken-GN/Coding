#include <stdio.h>
#include <string.h>

int main () {

    int i, x = 0, a = 0;
    char arr[100];
    
    scanf(" %s", &arr);

    char tampung1[(strlen(arr)-1)/2];
    char tampung2[(strlen(arr)-1)/2];

    for(i=0;i<(strlen(arr)-1)/2;i++) {
        tampung1[x] = arr[i];
        x++;
    }

    tampung1[x] == '\0';

    for(i=strlen(arr)-1;i>(strlen(arr)-1)/2;i--) {
        tampung2[a] = arr[i];
        a++;
    }

    tampung2[a] == '\0';

    //printf("%s\n%s", tampung1, tampung2);

    if(strcmp(tampung1, tampung2) == 0) {
        printf("Palindrom\n");
    } else {
        printf("Bukan Palindrom\n");
    }

    return 0;
}