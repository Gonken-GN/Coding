#include <stdio.h>

void fib(int* arr, int n, int i) {
    int a;
    int b;
    if(i == 0) {
        arr[i] = 0;
        fib(arr, n, i+1);
    } else if (i == 1) {
        arr[i] = 1;
        fib(arr, n, i+1);
    } else {
        for(a=0;a<n-1;a++) {
            if(i < n && (arr[i-1] % 2 == 0 && arr[i-a] % 2 == 0)) {
                arr[i] = arr[i-1] + arr[i-a];
                fib(arr, n, i+1);
            } 
        }
            
            if(i < n && (arr[i-1] % 2 == 1 && arr[i-2] % 2 == 0) || (arr[i-1] % 2 == 0 && arr[i-2] % 2 == 1) || (arr[i-1] % 2 == 1 && arr[i-2] % 2 == 1)) {
                arr[i] = arr[i-1] + arr[i-2];
                fib(arr, n, i+1);
            }
    }
}

int main () {

    int n;
    printf("masukkan bilangan fibbonaci");
    scanf("%d", &n);
    int arr[n];

    fib(arr, n, 0);
    int i = 0;
    for(i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}