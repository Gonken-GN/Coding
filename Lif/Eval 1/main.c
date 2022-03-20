#include "header.h"

int main () {

    int a, b, i;
    char sort[100];

    scanf("%d", &a);
    var arr1[a];
    for(i=0;i<a;i++) {
        scanf("%s", arr1[i].string);
        arr1[i].panjang = strlen(arr1[i].string);
        arr1[i].ascii = arr1[i].string[0];
    }

    scanf("%d", &b);
    var arr2[b];
    for(i=0;i<b;i++) {
        scanf("%s", arr2[i].string);
        arr2[i].panjang = strlen(arr2[i].string);
        arr2[i].ascii = arr2[i].string[0];
    }

    scanf("%s", sort);
    if(strcmp(sort, "Insert") == 0) {
        insert(arr1, a);
        insert(arr2, b);
    } else if(strcmp(sort, "Select") == 0) {
        select(arr1, a);
        select(arr2, b);
    } else if(strcmp(sort, "Bubble") == 0) {
        bubble(arr1, a);
        bubble(arr2, b);
    } else if(strcmp(sort, "Quick") == 0) {
        quick(arr1, 0, a-1);
        quick(arr2, 0, b-1);
    }
    

    // printf("\n");

    // for(i=0;i<a;i++) {
    //     printf("%s\n", arr1[i].string);
    // }
    //  printf("\n");

    // for(i=0;i<b;i++) {
    //     printf("%s\n", arr2[i].string);
    // }

    // printf("\n");

    var arr3[a+b];

    merge(arr1, arr2, a, b, arr3);

    for(i=0;i<a+b;i++) {
        printf("%s\n", arr3[i].string);
    }

    return 0;
}