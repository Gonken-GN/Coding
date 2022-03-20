#include <stdio.h>
void print(int n, int array[]){
    int i;
    for(i=0;i<n;i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
int main (){
    int i,j, key;
    int arr[6] = {8, 5, 7, 1, 9, 3};
    for(i=1;i<6;i++){
        key = arr[i];
        j=i-1;
        while(j>=0 && key < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    print(6, arr);
    return 0;
}