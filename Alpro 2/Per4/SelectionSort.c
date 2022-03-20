#include <stdio.h>
typedef struct{
    int penyebut;
    int pembilang;
}pecahan;
int main () {

    int n, i, temp, minIndeks, j;
    scanf("%d", &n);
    int tabInt[n];
    pecahan des[n];
    for(i=0;i<n;i++) {
        scanf("%d %d", &des[i].pembilang, &des[i].penyebut);
    }

    for(i=0;i<n-1;i++) {
        minIndeks = i;
        for(j=i+1;j<n;j++) {
            if(des[minIndeks].penyebut > des[j].penyebut) {
                minIndeks = j;
            }
        }
        temp = des[i].penyebut;
        des[i].penyebut = des[minIndeks].penyebut;
        des[minIndeks].penyebut = temp;
    }

    for(i=0;i<n;i++) {
        printf("%d ", des[i].penyebut);
    }

    return 0;
}