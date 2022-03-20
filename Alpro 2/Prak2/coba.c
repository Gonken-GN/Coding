#include <stdio.h>
#include <string.h>
typedef struct{
    char nama[100];
    char grade;
    int nilai;
}siswa;
int main (){
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    siswa ipk[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%s", &ipk[i][j].nama);
            scanf(" %c", &ipk[i][j].grade);
            scanf("%d", &ipk[i][j].nilai);
        }
    }
    printf("===============\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Nama siswa: %s\n", ipk[i][j].nama);
            printf("Grade: %c\n", ipk[i][j].grade);
            printf("Nilai: %d\n", ipk[i][j].nilai);
        }
        printf("===============\n");
    }
    return 0;
}