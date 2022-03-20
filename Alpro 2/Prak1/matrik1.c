#include <stdio.h>
int main (){
    int i, j;
    int angka = 0;
    int matriks[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            matriks[i][j] = angka++;
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(matriks[i][j] < 10){
                printf("%d  ", matriks[i][j]);
            }else if(matriks[i][j] < 100){
                printf("%d ", matriks[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n Masukkan angka untuk dicari baris dan kolom nya : ");
    int cari;
    scanf("%d", &cari);
    int baris, kolom, count  = 0;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(cari == matriks[i][j]){
            baris = i;
            kolom = j;
            count++;
            }
        }
    }
    if(count != 0){
        printf("\nNilai tersebut berada di baris %d, dan kolom %d", baris, kolom);
    }else{
        printf("\nNilai tersebut tidak ada di dalam matriks");
    }
    return 0;
}