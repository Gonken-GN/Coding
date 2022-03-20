#include <stdio.h>

// (esc) (f1) (f2) (f3) (f4) (f5) (f6) (f7) (f8) (f9) (f10) (f11) (f12) (insert) (prt sc) (delete)
// (`) (1) (2) (3) (4) (5) (6) (7) (8) (9) (0) (-) (=) (<- backspace) (home)
// (tab) (q) (w) (e) (r) (t) (y) (u) (i) (o) (p) ([) (]) (\) (pg up)
// (caps lock) (a) (s) (d) (f) (g) (h) (j) (k) (l) (;) ('') (<- enter) (pg dn)
// (shift) (z) (x) (c) (v) (b) (n) (m) (,) (.) (/) (^shift) (end)
// (ctrl) (fn) (windows) (alt) (space) (alt) (ctrl) (left) (up) (down) (right)

void fib(int* arr, int n, int i) {
    if(i == 0) {
        arr[i] = 0;
        fib(arr, n, i+1);
    } else if (i == 1) {
        arr[i] = 1;
        fib(arr, n, i+1);
    } else {
        if(i < n) {
            arr[i] = arr[i-1] + arr[i-2];
            fib(arr, n, i+1);
        }
    }
}

int fib2(int* arr, int n) {
    if(n < 2) {
        arr[n] = n;
        return n;
    } else {
        arr[n] = fib2(arr, n-1) + fib2(arr, n-2);
        return arr[n];
    }
}

int main () {
    int n;
    printf("masukkan bilangan fibbonaci");
    scanf("%d", &n);
    int arr[n];

    fib(arr, n, 0);
    //fib2(arr, n);
    int i = 0;
    for(i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}