#include "pola.h"
void spasi(int o){
    for(k=0;k<o;k++){
        printf(" ");
    }
}//prosedur untuk memberikan spasi (spasi setiap pola telah dibuat)
void pola0(int o){
    for(k=0;k<o;k++){
        printf(" ");
    }
    for(k=0;k<o;k++){
        printf(" ");
    }
    for(k=0;k<o;k++){
        printf(" ");
    }
}//prosedur untuk memberikan baris kosong (spasi) untuk pola '+' pada baris pertama dan 5
void pola1(int o){
    for(k=0;k<o;k++){
        printf("H");
    }
    for(k=0;k<o;k++){
        printf(" ");
    }
    for(k=0;k<o;k++){
        printf(" ");
    }
}//prosedur untuk membuat pola "H  " untuk panjang string 2, 5, 6 pada baris 2 atau 4
void pola10(int o){
    for(k=0;k<o;k++){
        printf("H");
    }
}//prosedur untuk membuat pola "H" untuk panjang string 5 dan 6 dengan baris 2 dan panjang string 2 dengan baris 4 dan jika pola tersebut posisinya berada di akhir agar tidak memberikan spasi 
void pola2(int o){
    for(k=0;k<o;k++){
        printf(" ");
    }
    for(k=0;k<o;k++){
        printf("H");
    }
    for(k=0;k<o;k++){
        printf(" ");
    }
}//prosedur untuk membuat pola " H " untuk panjang string 0,2,3,5,6,8,9 denggan baris 1, panjang string 2,3,4,5,6,7,8,9 dengan baris 3, dan panjang string 0,2,3,5,6,8,9 dengan baris 5
void pola21(int o){
    for(k=0;k<o;k++){
        printf("H");
    }
    for(k=0;k<o;k++){
        printf(" ");
    }
}//prosedur untuk membuat pola khusus "H " jika panjang string adalah 3 pada baris 1,3, dan 5
void pola20(int o){
    for(k=0;k<o;k++){
        printf(" ");
    }
    for(k=0;k<o;k++){
        printf("H");
    }
}//prosedur untuk membuat pola khusus " H" jika panjang string adalah 3 pada baris 2 dan 4 dan jika pola tersebut adalah pola terakhir (posisi ujung)
void pola3(int o){
    for(k=0;k<o;k++){
        printf(" ");
    }
    for(k=0;k<o;k++){
        printf(" ");
    }
    for(k=0;k<o;k++){
        printf("H");
    }
}//prosedur untuk membuat pola "  H" jika panjang string 2,3,7 dengan baris 3,4,5,7,9 dengan baris 4, dan panjang string 7 dan 4 dengan baris 5
void pola31(int o){
    for(k=0;k<o;k++){
        printf("H");
    }
}//prosedur untuk membuat pola khusus jika panjang string sama dengan 3 atau 1 (dimana pola tersebut tidak memakai spasi maka bentuk pola tidak akan berubah)
void pola32(int o){
    for(k=0;k<o;k++){
        printf(" ");
    }
    for(k=0;k<o;k++){
        printf("H");
    }
}//prosedur untuk membuat pola khusus " H" jika panjang string adalah 3 pada baris 2 dan 4
void pola4(int o){
    for(k=0;k<o;k++){
        printf("H");
    }
    for(k=0;k<o;k++){
        printf(" ");
    }
    for(k=0;k<o;k++){
        printf("H");
    }
}//prosedur untuk membuat pola "H H" jika panjang string 4 dengan baris 1, panjang string 0,4,8,9 dengan baris 2, panjang string = 0 dengan baris 3, panjang string 0,6,8 dengan baris 4
void pola5(int o){
    for(k=0;k<o;k++){
        printf("H");
    }
    for(k=0;k<o;k++){
        printf("H");
    }
    for(k=0;k<o;k++){
        printf(" ");
    }
}//prosedur untuk membuat pola "HH " jika panjang string sama dengan 7 pada baris 1
void pola50(int o){
    for(k=0;k<o;k++){
        printf("H");
    }
    for(k=0;k<o;k++){
        printf("H");
    }
}//prosedur untuk membuat pola khusus "HH" jika panjang string sama dengan 7 dan jika pola tersebut adalah pola terakhir (posisi ujung) agar tidak memberikan spasi setelahnya
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
}//prosedur untuk membuat pola "HHH" untuk membuat pola '+' pada baris ke 3
void input(int n, int m, char str[m][100]){
    int i, j;//iterator
    panjang[m];
    for(i=0;i<m;i++){
        panjang[i] = 0;
    }//perulangan untuk membuat isi tiap variabel array tersebut menjadi 0 (untuk mencegah terjadinya bug)
    for(i=0;i<m;i++){
        if(strlen(str[i]) <= 9){//syarat jika panjang string kurang dari sama dengan 9
            panjang[i] = strlen(str[i]);//maka nilai variabel panjang sama dengan panjang string input
        } else if(strlen(str[i]) >= 10){
            panjang[i] = (strlen(str[i]) % 10);//maka nilai variabel panjang sama dengan modulo dari panjang string input
        }//syarat jika panjang string lebih dari sama dengan 10
    }//perulangan untuk mencari panjang tiap string
    for(i=0;i<m;i++){
        check[i] = 0;
        check2[i] = 0;
    }//membuat variabel array tersebut menjadi 0 (agar tidak terjadi bug)
    for(i=0;i<m;i++){
        if(panjang[i] == 1){//syarat jika panjang string sama dengan 1
            check[i] = 1;
        }else{
            check[i] = 0;
        }
    }//perulangan untuk mengecek apakah ada string dengan panjang string = 1 untuk membuat pola khusus
    for(i=0;i<m;i++){
        if(panjang[i] == 3){//syarat jika panjang string input sama dengan 3
            check2[i] = 1;
        }else{
            check2[i] = 0;
        }
    }//perulangan untuk mengecek apakah ada string dengan panjang string =  3 untuk membuat pola khusus
}//prosedur untuk mencari panjang string dan mengecek apakah panjang string sama dengan 1 dan atau 3
void pola(int o, int n, int m){
    int i, j, a, l;//iterator
    char tampung[4] = {'+', '6', '2', '8'};//variabel untuk menampung array '+628' apabila mode tampilan yang diinput adalah 1
    char tampung2[2] = {'0', '8'};//variabel untuk menampung array '08' apabila mode tampilan yang diinput adalah 2
    for(i=0;i<5;i++){//perulangan untuk membuat pola berdasarkan baris (jumlah baris = 5)
        for(j=0;j<o;j++){//perulangan untuk membuat pola berdasarkan kolom (jumlah kolom sesuai dengan ketebalan yang diinput)
                if(n == 1){//syarat jika mode yang diinput adalah 1
                    for(a=0;a<4;a++){//a<4 karena jumlah huruf pada mode tampilan 1 adalah 4 
                        if(i==0){
                            if(tampung[a] == '+'){
                                pola0(o);//memanggil prosedur "pola0" untuk membuat pola "   "
                                spasi(o);//memanggil prosedur "spasi" untuk memberikan spasi setelah pola dibuat
                            }
                            if(tampung[a] == '6' || tampung[a] == '2' || tampung[a] == '8' ){
                                pola2(o);
                                spasi(o);
                            }
                        }//syarat untuk membuat pola baris pertama
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
                        }//syarat untuk membuat pola baris kedua
                        if(i==2){
                            if(tampung[a] == '+'){
                                pola6(o);
                                spasi(o);
                            }
                            if(tampung[a] == '6' || tampung[a] == '2' || tampung[a] == '8'){
                                pola2(o);
                                spasi(o);
                            }
                        }//syarat untuk membuat pola baris ketiga
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
                        }//syarat untuk membuat pola baris ke 4
                        if(i==4){
                            if(tampung[a] == '+'){
                                pola0(o);
                                spasi(o);
                            }
                            if(tampung[a] == '6' || tampung[a] == '2' || tampung[a] == '8'){
                                pola2(o);
                                spasi(o);
                            }
                        }//syarat untuk membuat pola baris ke 5
                    }//perulangan untuk menampilkan pola '+628' jika mode tampilan yang diinput adalah 1
                }else if(n == 2){//syarat untuk membuat pola '08' jika mode tampilan yang diinput adalah 2
                    for(a=0;a<2;a++){
                        if(i == 0){
                            pola2(o);
                            spasi(o);
                        }//syarat untuk membuat pola baris 1
                        if(i == 1){
                            pola4(o);
                            spasi(o);
                        }//syarat untuk membuat pola baris 2
                        if(i == 2){
                            if(tampung2[a] == '0'){
                                pola4(o);
                                spasi(o);
                            }
                            if(tampung2[a] == '8'){
                                pola2(o);
                                spasi(o);
                            }
                        }//syarat untuk membuat pola baris 3
                        if(i == 3){
                            pola4(o);
                            spasi(o);
                        }//syarat untuk membuat pola baris 4
                        if(i == 4){
                            pola2(o);
                            spasi(o);
                        }//syarat untuk membuat pola baris 5
                    }//perulangan untuk membuat pola '08'
                }
            for(a=0;a<m;a++){//perulangan untuk membuat pola setelah pola '+628' atau '08' telah dibuat
                if(a < m-1){//syarat untuk membuat pola sebelum pola terakhir 
                    if(i == 0){//syarat untuk membuat pola baris pertama
                            if(check2[a] == 1){
                                pola21(o);
                                spasi(o);
                            }//syarat untuk membuat pola jika panjang string 3
                            if(panjang[a] == 0 || panjang[a] == 2 || panjang[a] == 5 || panjang[a] == 6 || panjang[a] == 8 || panjang[a] == 9){
                                pola2(o);
                                spasi(o);
                            }//syarat untuk membuat pola jika panjang string 0 atau 2 atau 5 atau 6 atau 8 atau 9
                            if(check[a] == 1){//syarat jika panjang string adalah 1
                                pola31(o);
                                spasi(o);
                            }else{
                                if(panjang[a] == 1){
                                    pola3(o);
                                    spasi(o);
                                }
                            }
                            if(panjang[a] == 4){
                                pola4(o);
                                spasi(o);
                            }//syarat jika panjang string sama dengan 4
                            if(panjang[a] == 7){//syarat jika panjang string sama dengan 7
                                pola5(o);
                                spasi(o);
                            }
                    }
                    if(i == 1){//syarat untuk membuat pola baris ke dua
                            if(panjang[a] == 0 || panjang[a] == 4 || panjang[a] == 8 || panjang[a] == 9){
                                pola4(o);
                                spasi(o);
                            }//syarat jika panjang string adalah 0 atau 4 atau 8 atau 9
                            if(check[a] == 1){//syarat jika panjang string adalah 1
                                if(panjang[a] == 1){
                                    pola31(o);
                                    spasi(o);
                                }
                            }else{
                                if(panjang[a] == 1){
                                    pola3(o);
                                    spasi(o);
                                }
                            }
                            if(check2[a] == 1){//syarat jika panjang string adalah 3
                                pola32(o);
                                spasi(o);
                            }
                            if(panjang[a] == 2 || panjang[a] == 7){//syarat jika panjang string adalah 2 atau 7
                                pola3(o);
                                spasi(o);
                            }
                            if(panjang[a] == 5 || panjang[a] == 6){//syarat jika panjang string adalah 5 atau 6
                                pola1(o);
                                spasi(o);
                            }
                    }
                    if(i == 2){//syarat untuk membuat pola baris ke 3
                            if(panjang[a] == 0){//syarat jika panjang string adalah 0
                                pola4(o);
                                spasi(o);
                            }
                            if(check[a] == 1){//syarat jika panjang string adalah 1
                                if(panjang[a] == 1){
                                    pola31(o);
                                    spasi(o);
                                }
                            }else{
                                if(panjang[a] == 1){
                                    pola3(o);
                                    spasi(o);
                                }
                            }
                            if(panjang[a] == 7){//syarat jika panjang string adlaah 7
                                pola3(o);
                                spasi(o);
                            }
                            if(check2[a] == 1){//syarat jika panjang string adalah 3
                                pola21(o);
                                spasi(o);
                            }
                            if(panjang[a] == 2 || panjang[a] == 4 || panjang[a] == 5 || panjang[a] == 6 || panjang[a] == 8 || panjang[a] == 9){
                                pola2(o);
                                spasi(o);
                            }//syarat jika panjang string adalah 2 atau 4 atau 6 atau 5 atau 8 atau 9
                    }
                    if(i == 3){//syarat untuk membuat pola baris ke 4
                            if(panjang[a] == 0 || panjang[a] == 6 || panjang[a] == 8){
                                pola4(o);
                                spasi(o);
                            }//syarat jika panjang string adalah 0 atau 6 atau 8
                            if(check[a] == 1){//syarat jika panjang string adalah 1
                                if(panjang[a] == 1){
                                    pola31(o);
                                    spasi(o);
                                }
                            }else{
                                if(panjang[a] == 1){
                                    pola3(o);
                                    spasi(o);
                                }
                            }
                            if(check2[a] == 1){//syarat jika panjang string adalah 3
                                pola32(o);
                                spasi(o);
                            }
                            if(panjang[a] == 4 || panjang[a] == 5 || panjang[a] == 7 || panjang[a] == 9){//syarat jika panjang string adalah 4 atau 5 atau 7 atau 9
                                pola3(o);
                                spasi(o);
                            }
                            if(panjang[a] == 2){//syarat jika panjang string adalah 2
                                pola1(o);
                                spasi(o);
                            }
                    }
                    if(i == 4){//syarat untuk membuat pola baris 5
                        if(check2[a] == 1){//syarat jika panjang string adalah 3
                                pola21(o);
                                spasi(o);
                            }
                            if(panjang[a] == 0 || panjang[a] == 2 || panjang[a] == 5 || panjang[a] == 6 || panjang[a] == 8 || panjang[a] == 9){
                                pola2(o);
                                spasi(o);
                            }//syarat jika panjang string adalah 0 atau 2 atau 5 atau 6 atau 8 atau 9
                            if(check[a] == 1){//syarat jika panjang string adalah 1
                                if(panjang[a] == 1){
                                    pola31(o);
                                    spasi(o);
                                }
                            }else{
                                if(panjang[a] == 1){
                                    pola3(o);
                                    spasi(o);
                                }
                            }
                            if(panjang[a] == 4 || panjang[a] == 7){//syarat jika panjang string adalah 4 atau 7
                                pola3(o);
                                spasi(o);
                            }
                    }
                }else if(a == m-1){//syarat untuk membuat pola pada akhir string (posisi pola berada di ujung kanan) agar tidak memberikan spasi setelh pola dibuat
                    if(i == 0){//syarat untuk membuat pola baris 1
                        if(panjang[a] == 0 || panjang[a] == 9 || panjang[a] == 2 || panjang[a] == 5 || panjang[a] == 6 || panjang[a] == 8){
                            pola20(o);
                        }//syarat jika panjang string adalah 0 atau 9 atau 2 atau 5 atau 6 atau 8
                        if(check[a] == 1 || check2[a] == 1){//syarat  jika panjang string adalah 1 atau 3
                            pola31(o);
                        }
                        if(panjang[a] == 4){//syarat jika panjang string adalah 4
                            pola4(o);
                        }
                        if(panjang[a] == 7){//syarat jika panjang string adalah 7
                            pola50(o);
                        }
                    }
                    if(i == 1){//syarat untuk membuat pola baris 2
                        if(panjang[a] == 0 || panjang[a] == 4 || panjang[a] == 8 || panjang[a] == 9){//syarat jika panjang string adalah 0 atau 4 atau 8 atau 9
                            pola4(o);
                        }
                        if(check2[a] == 1){//syarat jika panjang string adalah 3
                            pola32(o);
                        }
                        if(check[a] == 1){//syarat jika panjang string adlaah 1
                            pola31(o);
                        }
                        if(panjang[a] == 2 || panjang[a] == 7){//syarat jika panjang string adalah 2 atau 7
                            pola3(o);
                        }
                        if(panjang[a] == 5 || panjang[a] == 6){//syarat jika panjangs tring adalah 5 atau 6
                            pola10(o);
                        }
                    }
                    if(i == 2){//syarat untuk membuat pola baris 3
                        if(panjang[a] == 0){//syarat jika panjang string adalah 0
                            pola4(o);
                        }
                        if(panjang[a] == 7){//syarat jika panjang string adlaah 7
                            pola3(o);
                        }
                        if(check[a] == 1 || check2[a] == 1){//syarat jika panjang string adalah 1 atau 3
                            pola31(o);
                        }
                        if(panjang[a] == 2 || panjang[a] == 4 || panjang[a] == 5 || panjang[a] == 6 || panjang[a] == 8 || panjang[a] == 9){
                            pola20(o);
                        }//syarat jika panjangs tring adlaah 2 atau 4 atau 5 atau 6 atau 8 atau 9
                    }
                    if(i == 3){//syarat untuk membuat pola baris ke 4
                        if(panjang[a] == 0 || panjang[a] == 6 || panjang[a] == 8){//syarat jika panjang string adalah 0 atau 6 atau 8
                            pola4(o);
                        }
                        if(check2[a] == 1){//syarat jika panjangs string adalah 3
                            pola32(o);
                        }
                        if(check[a] == 1){//syarat jika panjang string adalah 1
                            pola31(o);
                        }
                        if(panjang[a] == 4 || panjang[a] == 5 || panjang[a] == 7 || panjang[a] == 9){//syarat jika panjang striing adalah 4 atau 5 atau 7 atau 9
                            pola3(o);
                        }
                        if(panjang[a] == 2){//syarat jika panjang string adalah 2
                            pola10(o);
                        }
                    }
                    if(i == 4){//syarat untuk membuat pola baris 4
                        if(check[a] == 1 || check2[a] == 1){//syarat jika panjang string adalah 1 atau 3
                            pola31(o);
                        }
                        if(panjang[a] == 0 || panjang[a] == 2 || panjang[a] == 5 || panjang[a] == 6 || panjang[a] == 8 || panjang[a] == 9){
                            pola20(o);
                        }//syarat jika panjang string adalah 0 atau 2 atau 5 atau 6 atau 8 atau 9
                        if(panjang[a] == 4 || panjang[a] == 7){//syarat jika panjangs tring adalah 4 atau 7
                            pola3(o);
                        }
                    }
                }
            }
            printf("\n");
        }
    }
}//prosedur membentuk dan print pola sesuai dengan nilai panjang string
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman 1 untuk ke berkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/