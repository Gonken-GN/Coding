#include <stdio.h>

int main () {
    int angka[100];
    int i, j, a, n;

    printf("Masukkan jumlah data : "); scanf("%d", &n);
    printf("Masukkan data :\n");
    for (i = 0; i < n; ++i) {
        printf("Data ke-%d = ", i+1); 
        scanf("%d", &angka[i]);
    }

    for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (angka[i] > angka[j]) {
                a = angka[i];
                angka[i] = angka[j];
                angka[j] = a;
            }
        }
    }

    printf("\nSorting dalam bentuk descending\n");
    for (i = 0; i < n; ++i)
    {
        printf("%d\t", angka[i]);
    }
    return 0;
}