#include <stdio.h>

int main () {

    int n;
    int i;
    int j;

    printf("Jumlah Data: ");
    scanf("%d", &n);

    int data[n];

    printf("Masukkan Data: \n");

    for(i=0;i<n;i++) {
        scanf("%d", &data[i]);
    }

    int temp;

    for(i=0;i<(n-1);i++) {
        for(j=i;j<n;j++) {
            if (data[i] > data[j]) {
                temp =  data[i];
                data[i] = data[j];
                data[j] =  temp;    
            }
        }
    }

    printf("Data setelah diurutkan: ");
    
    for(i=0;i<n;i++) {
        printf("%d ", data[i]);
    }

    printf("\n");

    int kuartil = (n + 1) / 4;

    printf("Kuartil = %d", data[kuartil]);

    return 0;
}