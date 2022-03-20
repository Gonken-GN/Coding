#include <stdio.h>

void gabung_tidakUrut(int n, int array1[], int m, int array2[], int *array3) {
    int i;
    int hitung = 0;

    for(i=0;i<n;i++) {
        array3[hitung] = array1[i];
        hitung++;
    }

    for(i=0;i<m;i++) {
        array3[hitung] = array2[i];
        hitung++;
    }
}

int main () {

    int n, m, i;
    scanf("%d", &n);
    int array1[n];
    for(i=0;i<n;i++) {
        scanf("%d", &array1[i]);
    }
    scanf("%d", &m);
    int array2[m];
    for(i=0;i<m;i++) {
        scanf("%d", &array2[i]);
    }

    int array3[n+m];

    gabung_tidakUrut(n, array1, m, array2, array3);

    for(i=0;i<n+m;i++) {
        printf("%d ", array3[i]);
    }

    return 0;
}


// printf("\n");

    // for(i=0;i<a1;i++) {
    //     printf("%d %d %s %s\n", arr_a[i].netto, arr_a[i].harga, arr_a[i].merk, arr_a[i].jenis);
    // }

    // printf("\n");

    // for(i=0;i<a2;i++) {
    //     printf("%d %d %s %s\n", arr_b[i].netto, arr_b[i].harga, arr_b[i].merk, arr_b[i].jenis);
    // }

    // printf("\n");

    // for(i=0;i<a3;i++) {
    //     printf("%d %d %s %s\n", arr_c[i].netto, arr_c[i].harga, arr_c[i].merk, arr_c[i].jenis);
    // }

    // printf("\n");