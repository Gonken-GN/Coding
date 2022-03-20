#include <stdio.h>
void buble(int data[], int n){
    int i, temp, swap;
    do{
        swap = 0;
        for(i=0;i<n-1;i++){
            if(data[i] > data[i+1]){
                temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
                swap = 1;
            }
        }
    }while(swap == 1);
}
void print(int data[], int n){
    int i;
    for(i=0;i<n;i++){
        if(i < n-1){
            printf("%d ", data[i]);
        }else{
            printf("%d", data[i]);
        }
    }
}
int main (){
    int i;
    int data[] = {64, 34, 25, 12, 22, 98, 11};
    int n = 7;
    print(data, n);
    buble(data, n);
    print(data, n);
}