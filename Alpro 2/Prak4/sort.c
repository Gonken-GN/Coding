#include <stdio.h>
#include <string.h>
int main (){
    int i, j, n, key;
    char keyc[100];
    scanf("%d", &n);
    char nama[n][100];
    int nilai[n];
    for(i=0;i<n;i++){
        scanf("%s %d", &nama[i], &nilai[i]);
    }
    char select;
    scanf(" %c", &select);
    if(select == 'A'){
        for(i=1;i<n;i++){
            strcpy(keyc, nama[i]);
            j=i-1;
            while(j>=0 && keyc < nama[j]){
                strcpy(nama[j+1], nama[j]);
                j--;
            }
            strcpy(nama[j+1], keyc);
        }
    }else if(select == 'B'){
        for(i=0;i<n-1;i++){
            key = i;
            for(j=1;j<n;j++){
                if()
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%s %d\n", nama[i], nilai[i]);
    }
    return 0;
}