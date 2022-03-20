#include "header.h"
int main (){
    int i, j;
    int n, m, k;
    char metode[100];
    scanf("%s", &metode);
    scanf("%d", &n);
    test first[n];
    for(i=0;i<n;i++){
        first[i].konso = 0;
    }
    for(i=0;i<n;i++){
        scanf("%s", &first[i].input);
        for(j=0;j<strlen(first[i].input);j++){
            if(first[i].input[j] == 'a' || first[i].input[j] == 'e' || first[i].input[j] == 'i'
                || first[i].input[j] == 'u' || first[i].input[j] == 'o'){
                    first[i].konso++;
            }
        }
    }
    if(strcmp(metode, "insertionsort") == 0){
        insert(first, n);
    }else if(strcmp(metode, "selectionsort") == 0){
        selec(first, n);
    }else if(strcmp(metode, "bubblesort") == 0){
        buble(first, n);
    }else if(strcmp(metode, "quicksort") == 0){
        quick(first, 0, n-1);
    }
    scanf("%d", &m);
    test second[m];
    for(i=0;i<m;i++){
        second[i].konso = 0;
    }
    for(i=0;i<m;i++){
        scanf("%s", &second[i].input);
        for(j=0;j<strlen(second[i].input);j++){
        if(second[i].input[j] == 'a' || second[i].input[j] == 'e' || second[i].input[j] == 'i'
                || second[i].input[j] == 'u' || second[i].input[j] == 'o'){
                    second[i].konso++;
            }
        }
    }
    if(strcmp(metode, "insertionsort") == 0){
        insert(second, m);
    }else if(strcmp(metode, "selectionsort") == 0){
        selec(second, m);
    }else if(strcmp(metode, "bubblesort") == 0){
        buble(second, m);
    }else if(strcmp(metode, "quicksort") == 0){
        quick(second, 0, m-1);
    }
    scanf("%d", &k);
    test third[k];
    for(i=0;i<k;i++){
        third[i].konso = 0;
    }
    for(i=0;i<k;i++){
        scanf("%s", &third[i].input);
        for(j=0;j<strlen(third[i].input);j++){
            if(third[i].input[j] == 'a' || third[i].input[j] == 'e' || third[i].input[j] == 'i'
                || third[i].input[j] == 'u' || third[i].input[j] == 'o'){
                    third[i].konso++;
            }
        }
    }
    if(strcmp(metode, "insertionsort") == 0){
        insert(third, k);
    }else if(strcmp(metode, "selectionsort") == 0){
        selec(third, k);
    }else if(strcmp(metode, "bubblesort") == 0){
        buble(third, k);
    }else if(strcmp(metode, "quicksort") == 0){
        quick(third, 0, k-1);
    }
    test merge[n+m];
    test merge2[n+m+k];
    gabung(n, m, first, second, merge);
    gabung(n+m, k, merge, third, merge2);
    for(i=0;i<n+m+k;i++){
        printf("%s %d\n", merge2[i].input, merge2[i].konso);
    }
    return 0;
}