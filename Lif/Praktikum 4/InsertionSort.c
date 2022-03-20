#include <stdio.h>

void printArray(int n, int arr[]) {
    int i;
    for(i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main () {

    int i, j, key;
    int array[5] = {5, 4, 6, 1, 2};
    for(i=0;i<5;i++) {
        key = array[i];
        j = i - 1;

        while(j>=0 && key < array[j]) {
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j+1] = key;
    }
    printArray(5, array);

    return 0;
}