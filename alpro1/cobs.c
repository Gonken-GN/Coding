#include <stdio.h>

int main () {
    //deklarasi variabel untul penampung karakter
    char a, b, c, d, e, f;
    int counter = 0;
    //meminta user untuk masukan karakter
    scanf(" %c %c %c %c %c %c", &a, &b, &c, &d, &e, &f);

    //syarat pertama
    if(a == '1' || a == '2' || a == '3' || a == '4' || a == '5' || a == '6' || a == '7' || a == '8' || a == '9' || a == '0') {
        if(b != '1' || b != '2' || b != '3' || b != '4' || b != '5' || b != '6' || b != '7' || b != '8' || b != '9' || b != '0') {
            if(c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' || c == '0') {
                if(d != '1' || d != '2' || d != '3' || d != '4' || d != '5' || d != '6' || d != '7' || d != '8' || d != '9' || d != '0') {
                    if(e == '1' || e == '2' || e == '3' || e == '4' || e == '5' || e == '6' || e == '7' || e == '8' || e == '9' || e == '0') {
                        if(f != '1' || f != '2' || f != '3' || f != '4' || f != '5' || f != '6' || f != '7' || f != '8' || f != '9' || f != '0') {
                            counter = 1;
                        }
                    }
                }
            }
        }
    }
    //syarat kedua
    if(a != '1' || a != '2' || a != '3' || a != '4' || a != '5' || a != '6' || a != '7' || a != '8' || a != '9' || a != '0') {
        if(b == '1' || b == '2' || b == '3' || b == '4' || b == '5' || b == '6' || b == '7' || b == '8' || b == '9' || b == '0') {
            if(c != '1' || c != '2' || c != '3' || c != '4' || c != '5' || c != '6' || c != '7' || c != '8' || c != '9' || c != '0') {
              if(d == '1' || d == '2' || d == '3' || d == '4' || d == '5' || d == '6' || d == '7' || d == '8' || d == '9' || d == '0') {
                if(e != '1' || e != '2' || e != '3' || e != '4' || e != '5' || e != '6' || e != '7' || e != '8' || e != '9' || e != '0') {
                    if(f == '1' || f == '2' || f == '3' || f == '4' || f == '5' || f == '6' || f == '7' || f == '8' || f == '9' || f == '0')
                        counter = 1;
                }
              }  
            }
        }
    }
    //Syarat jika salah satu persyaratan mengandung "counter" = 1 
    if(counter == 1) {
        //Menampilkan keluaran "valid"
        printf("kombinasi valid\n");
        //Syarat jika salah satu persyaratan mengandung "counter" = 0
    } else {
        //menampilkan keluaran "Tidak Valid"
        printf("kombinasi tidak valid\n");
    }

    return 0;
/*Saya Raden Fadhil A.A (2004305) mengerjakan  Latihan Online Judge Kombinasi Huruf Angka (Konka1) dalam mata kuliah Alpro 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
}

