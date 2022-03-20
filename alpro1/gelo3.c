#include <stdio.h>

typedef struct
{
    char kode;
    int nilai;
    int r_biner[50];
}Arr;

int main()
{
    int i, j, n, temp, satu, cek = 0;
    scanf("%d", &n);
    Arr arr[n];

    for(i=0;i<n;i++){
        scanf(" %c %d", &arr[i].kode, &arr[i].nilai);
    }

    printf("Konversi\n");
    for(i=0;i<n;i++){
        printf("%c ", arr[i].kode);

        temp = arr[i].nilai; 
        j = 0;
        satu = 0;
        while(temp!=0){
            arr[i].r_biner[j] = temp%2;

            if(arr[i].r_biner[j] == 1){
                satu++;
            }
            if(satu>=4){
                cek = 1;
            }

            temp /= 2;
            j++;
        }

        for(j=j-1;j>=0;j--){
            printf("%d", arr[i].r_biner[j]);
        }
        printf("\n");
    }

    if(cek!=0){
        printf("cocok\n");
    }else{
        printf("tidak cocok\n");
    }

    return 0;
}
