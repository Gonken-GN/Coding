#include <stdio.h>
int main (){
    int makanan1, makanan2, minuman;
    int j_makanan1, j_makanan2, j_minuman;
    int h_makanan1 = 0, h_makanan2 = 0, h_minuman = 0;
    int j_total_makanan;
    int harga_total;
    int harga_diskon;
    char c = '%';

    scanf("%d %d", &makanan1, &j_makanan1);
    scanf("%d %d", &makanan2, &j_makanan2);
    scanf("%d %d", &minuman, &j_minuman);


    if(makanan1 == 1) {
        h_makanan1 = h_makanan1 + 3000;
    } else if(makanan1 == 2) {
        h_makanan1 = h_makanan1 + 2000;
    } else if(makanan1 == 3) {
        h_makanan1 = h_makanan1 + 15000;
    } else if(makanan1 == 4) {
        h_makanan1 = h_makanan1 + 12000;
    } else if (makanan1 == 5) {
        h_makanan1 = h_makanan1 + 10000;
    } else if (makanan1 == 6) {
        h_makanan1 = h_makanan1 + 8000;
    }

    h_makanan1 = h_makanan1 * j_makanan1;

    if(makanan2 == 1) {
        h_makanan2 = h_makanan2 + 3000;
    } else if(makanan2 == 2) {
        h_makanan2 = h_makanan2 + 2000;
    } else if(makanan2 == 3) {
        h_makanan2 = h_makanan2 + 15000;
    } else if(makanan2 == 4) {
        h_makanan2 = h_makanan2 + 12000;
    } else if (makanan2 == 5) {
        h_makanan2 = h_makanan2 + 10000;
    } else if (makanan2 == 6) {
        h_makanan2 = h_makanan2 + 8000;
    }

    h_makanan2 = h_makanan2 * j_makanan2;

    if(minuman == 1){
        h_minuman = h_minuman + 4000;
    } else if (minuman == 2) {
        h_minuman = h_minuman + 7000;
    } else if (minuman == 3) {
        h_minuman = h_minuman + 5000;
    }

    h_minuman = h_minuman * j_minuman;

    j_total_makanan = j_makanan1 + j_makanan2;

    harga_total = h_makanan1 + h_makanan2 + h_minuman;

    printf("%d %d %d\n", h_makanan1, h_makanan2, h_minuman);

    if(j_total_makanan % 2 == 1 && j_minuman % 2 == 0) {
        if(harga_total <= 40000) {
            harga_diskon = (harga_total * 25)/100;
            printf("Harga       : %d\n", harga_total);
            printf("Anda Mendapat Potongan 25%c\n", c);
            printf("Total Harga : %d\n", harga_total - harga_diskon);
        } else if(harga_total > 40000){
            harga_diskon = (harga_total * 50)/100;
            printf("Harga       : %d\n", harga_total);
            printf("Anda Mendapat Potongan 50%c\n", c);
            printf("Total Harga : %d\n",  harga_total - harga_diskon);
        }
    }else if(j_total_makanan % 2 == 0 && j_minuman % 2 == 1) {
        if(harga_total <= 40000) {
            harga_diskon = (harga_total * 20)/100;
            printf("Harga       : %d\n", harga_total);
            printf("Anda Mendapat Potongan 20%c\n", c);
            printf("Total Harga : %d\n", harga_total - harga_diskon);
        } else if(harga_total > 40000){
            harga_diskon = (harga_total * 40)/100;
            printf("Harga       : %d\n", harga_total);
            printf("Anda Mendapat Potongan 40%c\n", c);
            printf("Total Harga : %d\n", harga_total - harga_diskon);
        }
    } else if((j_total_makanan % 2 == 1 && j_minuman % 2 == 1) || (j_total_makanan % 2 == 0 && j_minuman % 2 == 0)) {
        if(harga_total <= 25000) {
            harga_diskon = (harga_total * 10)/100;
            printf("Harga       : %d\n", harga_total);
            printf("Anda Mendapat Potongan 10%c\n", c);
            printf("Total Harga : %d\n", harga_total - harga_diskon);
        } else if(harga_total > 25000){
            harga_diskon = (harga_total * 20)/100;
            printf("Harga       : %d\n", harga_total);
            printf("Anda Mendapat Potongan 20%c\n", c);
            printf("Total Harga : %d\n", harga_total - harga_diskon);
        }
    }

    return 0;
}