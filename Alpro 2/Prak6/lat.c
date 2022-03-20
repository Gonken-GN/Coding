#include <stdio.h>
#include <string.h>
void bubble(char str[][100], int banyak){
    int i, j, swap;
    char temp[100];
    do{
        swap =0;
        for(i=0;i<banyak-1;i++){
            if(strcmp(str[i], str[i+1]) > 0){
                strcpy(temp, str[i]);
                strcpy(str[i], str[i+1]);
                strcpy(str[i+1], temp);
                swap = 1;
            }
        }
    }while(swap == 1);
}
void gabung(int banyak1, int banyak2, char arr1[][100], char arr2[][100], char merge[][100]){
     int i = 0, j = 0, k = 0, l = 0;
    while((i<banyak1) && (j< banyak2)){
        if(strcmp(arr1[i], arr2[j]) > 0){
            strcpy(merge[k], arr1[i]);
            i++;
            k++;
        }else if(strcmp(arr2[j], arr1[i]) > 0){
            strcpy(merge[k], arr2[j]);
            j++;
            k++;
        }else{
            strcpy(merge[k], arr1[i]);
            i++;
            k++;
            strcpy(merge[k], arr2[j]);
            j++;
            k++;
        }
    }
    if(i<banyak1){
        for(l=i;l<banyak1;l++){
            strcpy(merge[k], arr1[l]);
            k++;
        }
    }
    if(j<banyak2){
        for(l=j;l<banyak2;l++){
            strcpy(merge[k], arr2[l]);
            k++;
        }
    }
}
int main (){
    int i, j, n, m, k;
    scanf("%d", &n);
    char str1[n][100];
    for(i=0;i<n;i++){
        scanf(" %s", &str1[i]);
    }
    scanf("%d", &m);
    char str2[m][100];
    for(i=0;i<m;i++){
        scanf(" %s", &str2[i]);
    }
    scanf("%d", &k);
    char str3[k][100];
    for(i=0;i<k;i++){
        scanf(" %s", &str3[i]);
    }
    bubble(str1, n);
    bubble(str2, m);
    bubble(str3, k);
    char merged1[n+m][100];
    char merged2[n+m+k][100];
    gabung(n, m, str1, str2, merged1);
    gabung(n+m, k, merged1, str3, merged2);
    for(i=0;i<(n+m+k);i++){
        printf("%s\n", merged2[i]);
    }
    return 0;
}