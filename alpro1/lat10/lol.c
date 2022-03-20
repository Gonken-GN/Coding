#include <stdio.h>
#include <string.h>
char cek(int a, char arr[a][50]){
    int i, j;
    char fin[a][50];
    for(i=0;i<a;i++){
        for(j=0;j<strlen(arr[i]);j++){
            if((strlen(arr[i]) % 2 == 0) && (arr[i][0] == 'a' ||arr[i][0] == 'i' ||arr[i][0] ==  'u' ||arr[i][0]  =='e' ||arr[i][0] == 'o')){
                strcpy(fin[i], arr[i]);
            }
            if(arr[i])
        }
    }
}
int main(){
    int i, n;
    scanf("%d", &n);
    char str[n][50];
    for(i=0;i<n;i++){
        scanf("%s", str[i]);
    }
    return 0;
}