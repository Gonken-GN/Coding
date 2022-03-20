#include "header.h"

void changer(int n, int m, food var[][100], char change[100]) {
    int i;
    int j;
    int k;
    int a;
    
    tukar ganti;

    if(strcmp(change, "stop.") != 0) {
        i = 0;

        while(change[i] != '-') {
            ganti.nama1[i] = change[i]; //memasukkan nama orang pertama ke dalam array
            i++;
        }
        ganti.nama1[i] = '\0';

        a = i+1; //index untuk memasukkan nama orang kedua dimulai dari index 1 ditambah 1
        k = 0;

        while(change[a] != '-') {
            ganti.nama2[k] = change[a]; //memasukkan nama orang kedua ke dalam array
            a++;
            k++;
        }

        ganti.nama2[k] = '\0';

        if(change[a+1] == '1') {
            ganti.num = 1;                      //cek angka makanan yang akan ditukar
        } else if(change[a+1] == '2') {
            ganti.num = 2;
        }


    char temp[100]; //variabel untuk menyimpan makanan sebelum ditukar

        for(i=0;i<n;i++) {
            for(j=0;j<m;j++){
                if(strcmp(var[i][j].nama, ganti.nama1) == 0) { //cek apakah nama yang disimpan dalam variabel sama dengan nama di inputan
                    for(k=0;k<n;k++) {
                        for(a=0;a<m;a++) {
                            if(strcmp(var[k][a].nama, ganti.nama2) == 0) { //cek apakah nama yang disimpan dalam variabel sama dengan nama di inputan
                                if(ganti.num == 1) { 
                                    strcpy(temp, var[i][j].m1);         
                                    strcpy(var[i][j].m1, var[k][a].m1);
                                    strcpy(var[k][a].m1, temp);                             //masukkan nama makanan index a ke dalam variabel temp
                                }                                                           //masukkan nama makanan di index a ke variabel makanan index b
                                if(ganti.num == 2) {                                        //masukkan nama makanan yang sudah disimpan didalam temp ke variabel makanan index b
                                    strcpy(temp, var[i][j].m2);
                                    strcpy(var[i][j].m2, var[k][a].m2);
                                    strcpy(var[k][a].m2, temp);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}