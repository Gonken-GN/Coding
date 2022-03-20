#include <stdio.h>
#include <string.h>
typedef struct{
    char plat[100];
    char nama[100];
    char jenis[100];
    char merk[100];
}parkir;
int main () {
    parkir data[3][3];
    int i, j;
    char search[100];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Masukkan Plat Nomor: ");
            scanf("%s", &data[i][j].plat);
            printf("Masukkan Nama Pemilik : ");
            scanf("%s", &data[i][j].nama);
            printf("Masukkan Jens Kendaraan : ");
            scanf("%s", &data[i][j].jenis);
            printf("Masukkan Merk Kendaraan : ");
            scanf("%s", &data[i][j].merk);
        }
    }
    printf("\nMasukkan merk atau jenis kendaraan");
    scanf("%s", &search);
    for(i=3;i<3;i++){
        for(j=0;j<3;j++){
            if(strcmp(search, data[i][j].merk) == 0){
                printf("Plat Nomor : %s\n", data[i][j].plat);       
                printf("Nama Pemilik : %s\n", data[i][j].nama);
                printf("==============================\n");
            }else if(strcmp(search, data[i][j].jenis) == 0){
                printf("Plat Nomor : %s\n", data[i][j].plat);
                printf("Nama Pemilik : %s\n", data[i][j].nama);
                printf("==============================\n");
            }
        }
    }
    return 0;
}