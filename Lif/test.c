#include <stdio.h>

void sort(int array[], int num) {

    int i, j, key;
    for(i=0;i<num;i++) {
        key = array[i];
        j = i - 1;

        while(j>=0 && key < array[j]) {
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j+1] = key;
    }

    for(i=0;i<num;i++) {
        printf("%d ", array[i]);
    }
}

int main () {
    int i, n;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    for(i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}