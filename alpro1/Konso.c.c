#include <stdio.h>

int main () {
    //deklarasi variabel untul penampung karakter
    char a, b, c, d, e, f;
    int counter = 0;
    //meminta user untuk masukan karakter
    scanf(" %c %c %c %c %c %c", &a, &b, &c, &d, &e, &f);

    //syarat pertama
    if(a == 'a' || a == 'i' || a == 'u' || a == 'e' || a == 'o') {
        if(b != 'a' || b != 'i' || b != 'u' || b != 'e' || b != 'o') {
            if(c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
                if(d != 'a' || d != 'i' || d != 'u' || d != 'e' || d != 'o') {
                    if(e == 'a' || e == 'i' || e == 'u' || e == 'e' || e == 'o') {
                        if(f != 'a' || f != 'i' || f != 'u' || f != 'e' || f != 'o') {
                            counter = 1;
                        }
                    }
                }
            }
        }
    }
    //syarat kedua
    if(a != 'a' || a != 'i' || a != 'u' || a != 'e' || a != 'o') {
        if(b == 'a' || b == 'i' || b == 'u' || b == 'e' || b == 'o') {
            if(c != 'a' || c != 'i' || c != 'u' || c != 'e' || c != 'o') {
              if(d == 'a' || d == 'i' || d == 'u' || d == 'e' || d == 'o') {
                if(e != 'a' || e != 'i' || e != 'u' || e != 'e' || e != 'o') {
                    if(f == 'a' || f == 'i' || f == 'u' || f == 'e' || f == 'o') {
                        counter = 1;
                    }
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
/*Saya Raden Fadhil A.A (2004305) mengerjakan  Latihan Online Judge Kombinasi Konsonan Vokal (Konvo1) dalam mata kuliah Alpro 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
}

