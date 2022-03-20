#include <stdio.h>

void fib(int* arr, int n, int awal, int beda, int i) {
    if(i == 0) {
        arr[i] = awal;
        fib(arr, n, awal, beda, i+1);
    } else if(i == 1) {
        arr[i] = awal + beda;
        beda = beda + arr[i-1];
        fib(arr, n, awal, beda, i+1);
    } else {
        if(i < n) {
            arr[i] = arr[i-1] + beda;
            beda = beda + arr[i-1];
            fib(arr, n, awal, beda, i+1);
        }
    }
}

int main () {
    int n, awal, beda;
    scanf("%d", &awal);
    scanf("%d", &beda);
    scanf("%d", &n);
    int arr[n];

    fib(arr, n, awal, beda, 0);
    int i = 0;
    for(i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}