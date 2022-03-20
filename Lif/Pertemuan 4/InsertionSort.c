#include <stdio.h>

typedef struct {
    int pembilang;
    int penyebut;
}pecahan;

int main () {
    int n, i, data_sisip, j, temp;
    scanf("%d", &n);
    
    //pecahan des[n];

    int tabInt[n];

    for(i=0;i<n;i++) {
        scanf("%d", &tabInt[i] /*&des[i].penyebut*/);
    }

    //Untuk Pembilang

    for(i=1;i<n;i++) {
        data_sisip = tabInt[i];
        //temp = des[i].penyebut;
        j = i-1;
        while((data_sisip > tabInt[j]) && (j >= 0)) {
            tabInt[j+1] = tabInt[j];
           // des[j+1].penyebut = des[j].penyebut;
            j=j-1;
        }
        tabInt[j+1] = data_sisip;
       // des[j+1].penyebut = temp;
    }

    for(i=0;i<n;i++) {
        printf("%d ", tabInt[i] /*des[i].penyebut*/);
    }

    return 0;
}