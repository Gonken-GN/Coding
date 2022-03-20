#include <stdio.h>
int main (){
	//dekalrasi variabel untuk penampung bilangan dan karakter
    int makanan1, makanan2, minuman;
    int j_makanan1, j_makanan2, j_minuman;
    int h_makanan1 = 0, h_makanan2 = 0, h_minuman = 0;
    int j_total_makanan;
    int harga_total;
    int harga_diskon;
    char c = '%';
    //Meminta user memasukan bilangan
    scanf("%d %d", &makanan1, &j_makanan1);
    scanf("%d %d", &makanan2, &j_makanan2);
    scanf("%d %d", &minuman, &j_minuman);

    //syarat pertama
    if(makanan1 == 1) {
        h_makanan1 = h_makanan1 + 3000;
        //jika syarat pertama tidak terpenuhi
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
    //menghitung harga makanan baris ke 1 dengan cara harga makanan dikali jumlah makanan
    h_makanan1 = h_makanan1 * j_makanan1;
    // Syarat kedua
    if(makanan2 == 1) {
        h_makanan2 = h_makanan2 + 3000;
        // Jika syarat kedua tidak terpenuhi
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
    //menghitung harga makanan baris ke 2 dengan cara harga makanan dikali jumlah makanan
    h_makanan2 = h_makanan2 * j_makanan2;
    // Syarat ketiga
    if(minuman == 1){
    	//Jika syarat ketiga tidak terpenuhi
        h_minuman = h_minuman + 4000;
    } else if (minuman == 2) {
        h_minuman = h_minuman + 7000;
    } else if (minuman == 3) {
        h_minuman = h_minuman + 5000;
    }
    //menghitung harga minuman dengan cara harga minuman dikali jumlah minuman
    h_minuman = h_minuman * j_minuman;

    //menghitung jumlah total makanan
    j_total_makanan = j_makanan1 + j_makanan2;

    //menghitung harga total
    harga_total = h_makanan1 + h_makanan2 + h_minuman;

    //Syarat pertama bagian kedua
    if(j_total_makanan % 2 == 1 && j_minuman % 2 == 0) {
    	//Jika syarat pertama bagian kedua terpenuhi
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
        //jika syarat pertama bagian ke 2 tidak terpenuhi maka syarat kedua bagian kedua berlaku
    }else if(j_total_makanan % 2 == 0 && j_minuman % 2 == 1) {
    	//Jika syarat kedua bagian kedua terpenuhi
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
        //jika syarat kedua bagian kedua tidak terpenuhi maka berlaku syarat ketiga bagian kedua
    } else if((j_total_makanan % 2 == 1 && j_minuman % 2 == 1) || (j_total_makanan % 2 == 0 && j_minuman % 2 == 0)) {
    	//Jika syarat ketiga bagian kedua terpenuhi
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
    printf("jumlah makanan %d\n", j_total_makanan);
    printf("Jumlah minuman %d\n", j_minuman);

    return 0;
 /*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi TP2 warteg diskon genap ganjil (WDGG20) dalam mata kuliah Alpro 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
}