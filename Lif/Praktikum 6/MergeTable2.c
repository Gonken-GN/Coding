#include <stdio.h>
#include <string.h>

void penggabungan_asc(int n, int m, int arr1[], int arr2[], int arr3[], char array1[][100], char array2[][100], char tampung[][100]) {
    int i = 0, j = 0, k = 0, l = 0;

    while ((i<n) && (j<m)) {
        if(arr1[i] > arr2[j]) {
            arr3[k] = arr1[i];
            strcpy(tampung[k], array1[i]);
            i++;
            k++;
        } else if (arr2[j] > arr1[i]) {
            arr3[k] =  arr2[j];
            strcpy(tampung[k], array2[j]);
            j++;
            k++;
        } else {
            arr3[k] = arr1[i];
            strcpy(tampung[k], array1[i]);
            i++;
            k++;

            arr3[k] = arr2[j];
            strcpy(tampung[k], array2[j]);
            j++;
            k++;
        }
    }

    if(i<n) {
        for(l=i;l<n;l++) {
            arr3[k] = arr1[l];
            strcpy(tampung[k], array1[l]);
            k++;
        }
    }

    if(j<m) {
        for(l=j;l<m;l++) {
            arr3[k] = arr2[l];
            strcpy(tampung[k], array2[l]);
            k++;
        }
    }
}

void sort(int data[], int a, char arr[][100]) {
    int i, pindah, temp;
    char temp2[100];
    do{
        pindah = 0;

        for(i=0;i<(a-1);i++) {
            if(data[i]<data[i+1]) {
                temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
                strcpy(temp2, arr[i]);
                strcpy(arr[i], arr[i+1]);
                strcpy(arr[i+1], temp2);
                pindah = 1;
            }
        }
    } while (pindah == 1);
}

int main () {

    int a, b, c, i, j;
    scanf("%d", &a);
    int num_a[a];
    for(i=0;i<a;i++) {
        num_a[i] = 0;
    }
    char array1[a][100];
    for(i=0;i<a;i++) {
        scanf(" %s", &array1[i]);
    }
    for(i=0;i<a;i++) {
        for(j=0;j<strlen(array1[i]);j++) {
            if(array1[i][j] != 'a' && array1[i][j] != 'i' && array1[i][j] != 'u' && array1[i][j] != 'e' && array1[i][j] != 'o') {
                num_a[i]++;
            }
        }
    }

    sort(num_a, a, array1);

    scanf("%d", &b);
    int num_b[b];
    for(i=0;i<b;i++) {
        num_b[i] = 0;
    }
    char array2[b][100];
    for(i=0;i<b;i++) {
        scanf(" %s", &array2[i]);
    }
    for(i=0;i<b;i++) {
        for(j=0;j<strlen(array2[i]);j++) {
            if(array2[i][j] != 'a' && array2[i][j] != 'i' && array2[i][j] != 'u' && array2[i][j] != 'e' && array2[i][j] != 'o') {
                num_b[i]++;
            }
        }
    }

    sort(num_b, b, array2);

    scanf("%d", &c);
    int num_c[c];
    for(i=0;i<c;i++) {
        num_c[i] = 0;
    }
    char array3[c][100];
    for(i=0;i<c;i++) {
        scanf(" %s", &array3[i]);
    }
    for(i=0;i<c;i++) {
        for(j=0;j<strlen(array3[i]);j++) {
            if(array3[i][j] != 'a' && array3[i][j] != 'i' && array3[i][j] != 'u' && array3[i][j] != 'e' && array3[i][j] != 'o') {
                num_c[i]++;
            }
        }
    }

    sort(num_c, c, array3);

    int merge1[a+b];
    int merge2[a+b+c];

    char tampung1[a+b][100];
    char tampung2[a+b+c][100];

    penggabungan_asc(a, b, num_a, num_b, merge1, array1, array2, tampung1);
    penggabungan_asc(a+b, c, merge1, num_c, merge2, tampung1, array3, tampung2);

    for(i=0;i<a+b+c;i++) {
        printf("%s %d\n", tampung2[i], merge2[i]);
    }

    return 0;
}

