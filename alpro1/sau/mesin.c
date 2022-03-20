#include "header.h"
void cek(int n, char str[n][100]){
    int i, j, a = 0;
    int count[n];
    char tampung[n][100];
    for(i=0;i<n;i++){
        count[i] = 0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<strlen(str[i]);j++){
            if((str[i][j] == 'a') || (str[i][j] == 'i') || (str[i][j] == 'u') || (str[i][j] == 'e') || (str[i][j] == 'o')){
                count[i] ++;
                tampung[i][a] = str[i][j];
                a++;
            }
        }
    }
    for(i=0;i<n;i++){
        if(count[i] != 0){
            for(j=0;j<count[i];j++){
                printf("%c", tampung[i][j]);
            }
            for(j=0;j<count[i];j++){
                printf(" ");
            }
        }else if(count[i] == 0){
            printf("%s\n", str[i]);
        }
    }
}