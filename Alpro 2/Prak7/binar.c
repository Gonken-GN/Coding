#include <stdio.h>
int data[100];
int binsearch(int cari, int a){
    int found=0;
    int i, k;
    i=0;
    k=0;
    while((i<=a) && (found == 0)){
        k=(int)(i+a) / 2;
        if(data[k] == cari){
            found = 1;
            printf("%d\n", data[k]);
        }else{
            if(data[k] > cari){
                a = k-1;
            }else{
                i = k+1;
            }
        }
    }
    return found;
}
int main(){
    int n, cari, i;
    scanf("%d", &n);
    data[n];
    int max = 0;
    int max2 = 0;
    int index = 0;
    for(i=0;i<n;i++){
        scanf("%d", &data[i]);
        if(max < data[i]){
            max2 = max;
            max = data[i];
            index = i;
        }
    }
    printf("%d", max2);

    return 0;
}