#include <stdio.h>

int main () {

    int baris, kolom, n;

    scanf("%d", &n);

    if(n % 2 == 1) {
        for(baris=0;baris<n;baris++) {
            if(baris == 0) {
                for(kolom=0;kolom<n;kolom++) {
                    if(kolom > (n-1)/2 && kolom < n-1) {
                        printf(" ");
                    } else{
                        printf("*");
                    }
                }
            } else if(baris > 0 && baris < (n-1)/2) {
                for(kolom=0;kolom<n;kolom++) {
                    if(kolom == (n-1)/2 || kolom == n-1) {
                        printf("*");
                    } else{
                        printf(" ");
                    }
                }
            } else if(baris == (n-1)/2) {
                for(kolom=0;kolom<n;kolom++) {
                    printf("*");
                }
            } else if(baris > (n-1)/2 && baris < n-1) {
                for(kolom=0;kolom<n;kolom++) {
                    if(kolom == 0 || kolom == (n-1)/2) {
                        printf("*");
                    } else{
                        printf(" ");
                    }
                }
            } else if(baris == n-1) {
                for(kolom=0;kolom<n;kolom++) {
                    if(kolom > 0 && kolom < (n-1)/2) {
                        printf(" ");
                    } else{
                        printf("*");
                    }
                }
            }
            printf("\n");
        }
    }
    return main();
}