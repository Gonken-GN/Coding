#include "header.h"

void search(int n, int arr[]) {
    int count, i, j;
    int pilih;
    do {
        for(i=0;i<n;i++) {
            count = 0;
            for(j=0;j<n;j++) {
                if(arr[i] == arr[j]) {
                    count++;
                }
            }
            if(count == 1) {
                pilih = arr[i];
            }
        }
    } while (count == 1);

    printf("%d\n", pilih);
}