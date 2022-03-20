#include <stdio.h>
int data[100];
void QuickSort(int a[], int left, int right)
       {
              int i = left;
              int j = right;
              int temp = a[i];

       if( left < right)
              {
                     while(i < j)
                     {
                            while(a[j] <= temp && i < j)
                            {
                                   j--;
                            }
                            a[i] = a[j];

                            while(a[i] >= temp && i < j)
                            {
                                   i++;
                            }
                            a[j] = a[i];
                     }
                     a[i] = temp;

              QuickSort(a, left, i - 1);
                     QuickSort(a, j + 1, right);
              }
       } 

int main () {

    int i;
    int n;
    scanf("%d", &n);
    data[n];
    for(i=0;i<n;i++){
        scanf("%d", &data[i]);
    }
    printf("Data: ");
    for(i=0;i<n;i++) {
        printf("%d", data[i]);
        if(i < n-1){
            printf(" ");
        }
    }
    printf("\n");
    QuickSort(data, 0, n-1);

    printf("Hasil Sorting: ");
    for(i=0;i<n;i++) {
     printf("%d", data[i]);
     if(i < n-1){
         printf(" ");
     }
    }
    return 0;
}
