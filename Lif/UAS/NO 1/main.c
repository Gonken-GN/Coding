#include "header.h"

int main () {

    char pita[501];
    char temp; //cek huruf pertama
    char temp2; //untuk cek apakah ada huruf ditengah sama seperti huruf pertama
    char temp3; //untuk cek huruf terakhir apakah sama dengan huruf pertama
    int syarat1 = 0; //aljabar boolean untuk syarat pertama
    int syarat2 = 0; //aljabar boolean untuk syarat kedua
    int cek = 0; //untuk menghitung jumlah huruf yang sama dengan huruf pertama
    scanf("%500[^\n]s", &pita);

    START(pita);
    temp = GETCC(); 
    while(temp == ' ') {
        temp = GETCC(); //return karakter sampai ditemukan huruf pertama
        INC(pita);
    }

    START(pita);
    INC(pita);
    while(EOP() == 0) {
        if(GETCC() != '.' && GETCC() != ' ') {
            temp3 = GETCC(); //return karakter sampai karakter sebelum spasi atau titik untuk mendapat karakter terakhir
        }
        INC(pita);
    }

    START(pita);
    while(EOP() == 0) {
        temp2 = GETCC();
        if(temp2 == temp) {
            cek++; //menghitung jumlah karakter yang sama dengan karakter pertama
        }
        INC(pita);
    }

    if(cek >= 3) {
        syarat1 = 1; //cek syarat pertama
    }

    if(temp3 == temp) {
        syarat2 = 1; //cek syarat kedua
    }

    if(syarat1 == 1 && syarat2 == 1) {
        printf("Hore.\n");
    } else {
        printf("Sabar Menanti.\n");
    }

    return 0;
}