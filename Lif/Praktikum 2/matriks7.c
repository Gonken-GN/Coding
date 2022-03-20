#include <stdio.h>
#include <string.h>

typedef struct
{
    char plat[100], nama[100], jenis[100], merk[100];
}kendaraan;


int main () {

    int i;
    int j;

    kendaraan parkiran[3][3];

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("Plat: ");
            scanf(" %s", parkiran[i][j].plat);
            printf("Nama Pemilik: ");
            scanf(" %s", parkiran[i][j].nama);
            printf("Jenis: ");
            scanf(" %s", parkiran[i][j].jenis);
            printf("Merk: ");
            scanf(" %s", parkiran[i][j].merk);
        }
    }

    char cari[100];

    scanf(" %s", cari);

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            if(strcmp(cari, parkiran[i][j].jenis) == 0) {
                printf("%s\n", parkiran[i][j].plat);
                printf("%s\n", parkiran[i][j].nama);
            } else if (strcmp(cari, parkiran[i][j].merk) == 0) {
                printf("%s\n", parkiran[i][j].plat);
                printf("%s\n", parkiran[i][j].nama);                
            }
        }
    }

    return 0;
}