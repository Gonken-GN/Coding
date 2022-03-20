#include <stdio.h>
#include <string.h>
typedef struct{
    int duduk;
    char nama[100];
    char paket[100];
}data;
void qcPinggir(int kiri, int kanan, data pengunjung[]) {
    int i, j, temp;
    char temp2[100];
    char temp3[100];
    i = kiri;
    j = kanan;

    do {
        while((pengunjung[i].duduk < pengunjung[kanan].duduk) && (i <= j)) {
            i++;
        }

        while((pengunjung[j].duduk > pengunjung[kiri].duduk) && (i <= j)) {
            j--;
        }

        if(i<j) {
            temp = pengunjung[i].duduk;
            pengunjung[i].duduk =  pengunjung[j].duduk;
            pengunjung[j].duduk =  temp;
            strcpy(temp2, pengunjung[i].nama);
            strcpy(pengunjung[i].nama, pengunjung[j].nama);
            strcpy(pengunjung[j].nama, temp2);
            strcpy(temp3, pengunjung[i].paket);
            strcpy(pengunjung[i].paket, pengunjung[j].paket);
            strcpy(pengunjung[j].paket, temp3);
            i++;
            j--;
        }
    } while (i<j);

    if(kiri<j) {
        qcPinggir(kiri,j, pengunjung);
    }
    if(i<kanan) {
        qcPinggir(i,kanan, pengunjung);
    }
} 
int main (){
    int n, i, j;
    char pilih;
    scanf(" %c", &pilih);
    scanf("%d", &n);
    data pengunjung[n];
    for(i=0;i<n;i++){
        scanf("%d %s %s", &pengunjung[i].duduk, &pengunjung[i].nama, &pengunjung[i].paket);
    }
    if(pilih == 'Q' || pilih == 'q'){
        qcPinggir(0, n-1, pengunjung);
        for(i=0;i<n;i++){
            printf("No tempat duduk: %d\n", pengunjung[i].duduk);
            printf("Nama : %s\n", pengunjung[i].nama);
            printf("Tipe: %s\n", pengunjung[i].paket);
            printf("\n");
        }
    }
    return 0;
}