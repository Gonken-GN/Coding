#include <stdio.h>
#include <string.h>
typedef struct{
    char nama[100];
}siswa;
void search(int banyak, siswa arr[], char cari);
void search(int banyak, siswa arr[], char cari){
    int i, found, j;
    found = 0; i=0;
    while(i<banyak){
        if(arr[i].nama[0] == 'A' || arr[i].nama[0] == 'a'){
            found++;
        }
        i++;
    }
    if(found > 1){
        printf("ada sebanyak %d orang yang inisial nama A\n", found);
    }else{
        printf("tidak ada\n");
    }
}
int main (){
    int i,j;
    int n;
    scanf("%d", &n);
    siswa upi[n];
    for(i=0;i<n;i++){
        scanf("%s", &upi[i].nama);
    }
    char cari;
    scanf(" %c", &cari);
    search(n, upi, cari);
    return 0;
}