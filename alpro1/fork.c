#include <stdio.h>

typedef struct {
    char code;
    char nama[100];
    int nama_b[100];
    int gabung[100];
} var;

int main () {
    int n;
    scanf("%d", &n);
    int i;
    int kunci;
    var array[n];
    int j_nama[n];
    int desimal[n];
    i = 0;
    while(i < n) {
        scanf(" %c", &array[i].code);
        int j = 0;
        while(array[i].nama[j-1] != ';') {
            scanf(" %c", &array[i].nama[j]);
            if(array[i].nama[j] == '1') {
                array[i].nama_b[j] = 1;
            } else if (array[i].nama[j] == '0') {
                array[i].nama_b[j] = 0;
            } else {
                break;
            }
            j++;
        }
        j_nama[i] = j;
        i++;
    }
    scanf(" %d", &kunci);

    i = 0;
    int k; 
    i=1;
    int h;
    int biner[10];
    while(kunci>0){
        biner[i]=kunci%2;
         kunci=kunci/2;
         i=i+1;
         k=i;
    }
    h = k - 1;
    int x = k - 1;
    int biner1[x];
    int j = 0;
    while(h > 0) {
        biner1[j] = biner[h];
        j++;
        h--;
    }

    i = 0;
    while(i<n) {
        int c = x + j_nama[i];
   
        int count = 0;
        int q = 0;
        int w = 0;
        while(count < c) {
            if(q < x) {
                array[i].gabung[count] = biner1[q];
                q++;
                count++;
            }

            if(w < j_nama[i]) {
                array[i].gabung[count] = array[i].nama_b[w];
                w++;
                count++;
             }
          }
         i++;
        }
    i=0;
     while(i<n){
        desimal[i] = 0;
        i++;
        }
    i=0;
        while(i<n){
         j = (x+j_nama[i]) - 1;
         k=0;
         while(j>=0){
             int temp = 2;
             if(array[i].gabung[j]== 1){
                 //proses perhitungan 2 pangkat k
                 if(k==0){
                    temp = 1;
                 }else{
                    int l=1;
                     while(l<k){
                          temp = temp * 2;
                          l++;
                    } 
                }
            }else{
                 temp = 0;
            }
             //semua hasil pemangkatan ditambahkan ke desimal
            desimal[i] += temp;
            k++;
            j--;
        }
        i++;
     }
    printf("Hasil Gabung:\n");
    i = 0;
    while(i < n) {
        int a=0;
        while(a < x+j_nama[i]) {
            printf("%d", array[i].gabung[a]);
            a++;
        }
        printf("\n");
        i++;
    }
    printf("\nPassword:\n");
    i=n-1;
    while(i>=0){
        printf("%c", array[i].code);
        i--;
    }
    printf("-");
    i=0;
    while(i<n){
        printf("%d", desimal[i]);
        if(i < n-1){
            printf("-");
        }
        i++;
    }

    return 0;
}
