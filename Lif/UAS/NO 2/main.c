#include "header.h"

int main () {
    char pita[701];
    char temp[50]; //variabel untuk menampung kata sementara untuk dicek
    int i;
    int j_kon = 0; //variabel untuk menghitung jumlah konsonan
    int j_vok = 0; //variabel untuk menghitung jumlah vokal
    int kata1 = 0; //varaibel aljabar boolean untuk cek jika kata pertama sesuai syarat
    int kata2 = 0; //var aljabar boolean untuk cek jika kata kedua sesuai syarat
    scanf("%700[^\n]s", &pita);

    STARTKATA(pita);
    strcpy(temp, GETCKATA());
    for(i=0;i<GETPANJANGKATA();i++) {
        if(temp[i] == 'a' || temp[i] == 'i' || temp[i] == 'u' || temp[i] == 'e' || temp[i] == 'o') {
            j_vok++;
        } else if(temp[i] != 'a' && temp[i] != 'i' && temp[i] != 'u' && temp[i] != 'e' && temp[i] != 'o') {
            j_kon++;
        }
    }
    if(j_kon >= j_vok) {
        kata1 = 1;
    }
    INCKATA(pita);
    j_kon = 0;
    j_vok = 0;
    strcpy(temp, GETCKATA());
    for(i=0;i<GETPANJANGKATA();i++) {
        if(temp[i] == 'a' || temp[i] == 'i' || temp[i] == 'u' || temp[i] == 'e' || temp[i] == 'o') {
            j_vok++;
        } else if(temp[i] != 'a' && temp[i] != 'i' && temp[i] != 'u' && temp[i] != 'e' && temp[i] != 'o') {
            j_kon++;
        }
    }
    if(j_vok >= j_kon) {
        kata2 = 1;
    }

    if(kata1 == 1 && kata2 == 1) {
        printf("Perjuangan dengan Senyuman.\n");
    } else {
        printf("Pembelajaran untuk Jiwa.\n");
    }

    return 0;

}