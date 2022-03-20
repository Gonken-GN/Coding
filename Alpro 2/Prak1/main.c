#include <stdio.h>
#include <string.h>
typedef struct{
    char nama[100];
    char nim[100];
    char nilai;
}siswa;
int main (){
    siswa kelas[2][2];
    int i, j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Masukkan NIM siswa: ");
            scanf("%s", &kelas[i][j].nim);
            printf("Masukkan nama siswa: ");
            scanf("%s", &kelas[i][j].nama);
            printf("Masukkan nilai siswa: ");
            scanf(" %c", &kelas[i][j].nilai);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("NIM siswa : %s\n", kelas[i][j].nim);
            printf("Nama siswa : %s\n", kelas[i][j].nama);
            printf("Nilai siswa : %c\n", kelas[i][j].nilai);
        }
    }
    return 0;
}