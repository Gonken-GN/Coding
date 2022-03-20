#include "pola.h"
int k;
int panjang[100];
void spasi(int o){
    for(k=0;k<o;k++){
        printf("-");
    }
}
void pola0(int o){
    for(k=0;k<o;k++){
        printf("-");
    }
    for(k=0;k<o;k++){
        printf("-");
    }
    for(k=0;k<o;k++){
        printf("-");
    }
}
void pola1(int o){
    for(k=0;k<o;k++){
        printf("H");
    }
    for(k=0;k<o;k++){
        printf("-");
    }
    for(k=0;k<o;k++){
        printf("-");
    }
}
void pola10(int o){
    for(k=0;k<o;k++){
        printf("H");
    }
}
void pola2(int o){
    for(k=0;k<o;k++){
        printf("-");
    }
    for(k=0;k<o;k++){
        printf("H");
    }
    for(k=0;k<o;k++){
        printf("-");
    }
}
void pola20(int o){
     for(k=0;k<o;k++){
        printf("-");
    }
    for(k=0;k<o;k++){
        printf("H");
    }
}
void pola3(int o){
    for(k=0;k<o;k++){
        printf("-");
    }
    for(k=0;k<o;k++){
        printf("-");
    }
    for(k=0;k<o;k++){
        printf("H");
    }
}
void pola4(int o){
    for(k=0;k<o;k++){
        printf("H");
    }
    for(k=0;k<o;k++){
        printf("-");
    }
    for(k=0;k<o;k++){
        printf("H");
    }
}
void pola5(int o){
    for(k=0;k<o;k++){
        printf("H");
    }
    for(k=0;k<o;k++){
        printf("H");
    }
    for(k=0;k<o;k++){
        printf("-");
    }
}
void pola50(int o){
    for(k=0;k<o;k++){
        printf("H");
    }
    for(k=0;k<o;k++){
        printf("H");
    }
}
void pola6(int o){
    for(k=0;k<o;k++){
        printf("H");
    }
    for(k=0;k<o;k++){
        printf("H");
    }
    for(k=0;k<o;k++){
        printf("H");
    }
}
void input(int n, int m, char str[m][100]){
    int i, j;
    panjang[m];
    for(i=0;i<m;i++){
        panjang[i] = 0;
    }
    for(i=0;i<m;i++){
        if(strlen(str[i]) <= 9){
            panjang[i] = strlen(str[i]);
        } else if(strlen(str[i]) >= 10){
            panjang[i] = (strlen(str[i]) % 10);
        }
    }
}
void pola(int o, int n, int m){
    int i, j, a, l;
    char tampung[4] = {'+', '6', '2', '8'};
    char tampung2[2] = {'0', '8'};
    for(i=0;i<5;i++){
        for(j=0;j<o;j++){
                if(n == 1){
                    for(a=0;a<4;a++){
                        if(i==0){
                            if(tampung[a] == '+'){
                                pola0(o);
                                spasi(o);
                            }
                            if(tampung[a] == '6' || tampung[a] == '2' || tampung[a] == '8' ){
                                pola2(o);
                                spasi(o);
                            }
                        }
                        if(i==1){
                            if(tampung[a] == '+'){
                                pola2(o);
                                spasi(o);
                            }
                            if(tampung[a] == '6'){
                                pola1(o);
                                spasi(o);
                            }
                            if(tampung[a] == '2'){
                                pola3(o);
                                spasi(o);
                            }
                            if(tampung[a] == '8'){
                                pola4(o);
                                spasi(o);
                            }
                        }
                        if(i==2){
                            if(tampung[a] == '+'){
                                pola6(o);
                                spasi(o);
                            }
                            if(tampung[a] == '6' || tampung[a] == '2' || tampung[a] == '8'){
                                pola2(o);
                                spasi(o);
                            }
                        }
                        if(i==3){
                            if(tampung[a] == '+'){
                                pola2(o);
                                spasi(o);
                            }
                            if(tampung[a] == '6' || tampung[a] == '8'){
                                pola4(o);
                                spasi(o);
                            }
                            if(tampung[a] == '2'){
                                pola1(o);
                                spasi(o);
                            }
                        }
                        if(i==4){
                            if(tampung[a] == '+'){
                                pola0(o);
                                spasi(o);
                            }
                            if(tampung[a] == '6' || tampung[a] == '2' || tampung[a] == '8'){
                                pola2(o);
                                spasi(o);
                            }
                        }
                    }
                }else if(n == 2){
                    for(a=0;a<2;a++){
                        if(i == 0){
                            pola2(o);
                            spasi(o);
                        }
                        if(i == 1){
                            pola4(o);
                            spasi(o);
                        }
                        if(i == 2){
                            if(tampung2[a] == '0'){
                                pola4(o);
                                spasi(o);
                            }
                            if(tampung2[a] == '8'){
                                pola2(o);
                                spasi(o);
                            }
                        }
                        if(i == 3){
                            pola4(o);
                            spasi(o);
                        }
                        if(i == 4){
                            pola2(o);
                            spasi(o);
                        }
                    }
                }
            for(a=0;a<m;a++){
                if(a < m-1){
                    if(i == 0){
                        if(panjang[a] == 0 || panjang[a] == 2 || panjang[a] == 3 || panjang[a] == 5 || panjang[a] == 6 || panjang[a] == 8 || panjang[a] == 9){
                            pola2(o);
                            spasi(o);
                        }
                        if(panjang[a] == 1){
                            pola3(o);
                            spasi(o);
                        }
                        if(panjang[a] == 4){
                            pola4(o);
                            spasi(o);
                        }
                        if(panjang[a] == 7){
                            pola5(o);
                            spasi(o);
                        }
                    }
                    if(i == 1){
                        if(panjang[a] == 0 || panjang[a] == 4 || panjang[a] == 8 || panjang[a] == 9){
                            pola4(o);
                            spasi(o);
                        }
                        if(panjang[a] == 1 || panjang[a] == 2 || panjang[a] == 3 || panjang[a] == 7){
                            pola3(o);
                            spasi(o);
                        }
                        if(panjang[a] == 5 || panjang[a] == 6){
                            pola1(o);
                            spasi(o);
                        }
                    }
                    if(i == 2){
                        if(panjang[a] == 0){
                            pola4(o);
                            spasi(o);
                        }
                        if(panjang[a] == 1 || panjang[a] == 7){
                            pola3(o);
                            spasi(o);
                        }
                        if(panjang[a] == 2 || panjang[a] == 3 || panjang[a] == 4 || panjang[a] == 5 || panjang[a] == 6 || panjang[a] == 8 || panjang[a] == 9){
                            pola2(o);
                            spasi(o);
                        }
                    }
                    if(i == 3){
                        if(panjang[a] == 0 || panjang[a] == 6 || panjang[a] == 8){
                            pola4(o);
                            spasi(o);
                        }
                        if(panjang[a] == 1 || panjang[a] == 3 || panjang[a] == 4 || panjang[a] == 5 || panjang[a] == 7 || panjang[a] == 9){
                            pola3(o);
                            spasi(o);
                        }
                        if(panjang[a] == 2){
                            pola1(o);
                            spasi(o);
                        }
                    }
                    if(i == 4){
                        if(panjang[a] == 0 || panjang[a] == 2 || panjang[a] == 3 || panjang[a] == 5 || panjang[a] == 6 || panjang[a] == 8 || panjang[a] == 9){
                            pola2(o);
                            spasi(o);
                        }
                        if(panjang[a] == 1 || panjang[a] == 4 || panjang[a] == 7){
                            pola3(o);
                            spasi(o);
                        }
                    }
                }else if(a == m-1){
                    if(i == 0){
                        if(panjang[a] == 0 || panjang[a] == 9 || panjang[a] == 2 || panjang[a] == 5 || panjang[a] == 6 || panjang[a] == 8 || panjang[a] == 3){
                            pola20(o);
                        }
                        if(panjang[a] == 1){
                            pola3(o);
                        }
                        if(panjang[a] == 4){
                            pola4(o);
                        }
                        if(panjang[a] == 7){
                            pola50(o);
                        }
                    }
                    if(i == 1){
                        if(panjang[a] == 0 || panjang[a] == 4 || panjang[a] == 8 || panjang[a] == 9){
                            pola4(o);
                        }
                        if(panjang[a] == 1 || panjang[a] == 2 || panjang[a] == 3 || panjang[a] == 7){
                            pola3(o);
                        }
                        if(panjang[a] == 5 || panjang[a] == 6){
                            pola10(o);
                        }
                    }
                    if(i == 2){
                        if(panjang[a] == 0){
                            pola4(o);
                        }
                        if(panjang[a] == 1 || panjang[a] == 7){
                            pola3(o);
                        }
                        if(panjang[a] == 2 || panjang[a] == 3 || panjang[a] == 4 || panjang[a] == 5 || panjang[a] == 6 || panjang[a] == 8 || panjang[a] == 9){
                            pola20(o);
                        }
                    }
                    if(i == 3){
                        if(panjang[a] == 0 || panjang[a] == 6 || panjang[a] == 8){
                            pola4(o);
                        }
                        if(panjang[a] == 1 || panjang[a] == 3 || panjang[a] == 4 || panjang[a] == 5 || panjang[a] == 7 || panjang[a] == 9){
                            pola3(o);
                        }
                        if(panjang[a] == 2){
                            pola10(o);
                        }
                    }
                    if(i == 4){
                        if(panjang[a] == 0 || panjang[a] == 2 || panjang[a] == 3 || panjang[a] == 5 || panjang[a] == 6 || panjang[a] == 8 || panjang[a] == 9){
                            pola20(o);
                        }
                        if(panjang[a] == 1 || panjang[a] == 4 || panjang[a] == 7){
                            pola3(o);
                        }
                    }
                }
            }
            printf("\n");
        }
    }
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman 1 untuk ke berkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/