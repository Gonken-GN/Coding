#include <stdio.h>
int pangkat(int* a, int b){
    int i;
    b = -1;
    int temp = *a;
    for(i=0;i<b;i++){
        *a *= temp;
    }
    return *a;
}
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("Angkax akhir : %d \n", pangkat(&x, y));
    return 0;
}