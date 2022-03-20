#include "header.h"
void panstr(int n, char str[n][100], int m, char str2[m][100]){
    int i, j, a = 0, b = 0;//variabel untuk menampung iterator
    panpem = 0, panputam = 0;//membuat nilai variabel menjadi 0 agar tidak terjadi bug
    for(i=0;i<n;i++){
        panputam += strlen(str[i]);//mencari dan menjumlahkan panjang tiap string utama
    }
    for(i=0;i<m;i++){
        panpem += strlen(str2[i]);//mencari dan menjumlahkan panjang tiap string pembanding
    }
    tampung[panputam];//membuat jumlah kata yang dimasukkan sebanyak total panjang string utama
    tampung2[panpem];//membuat jumlah kata yang dimasukkan sebanyak total panjang string pembanding
    for(i=0;i<n;i++){
        for(j=0;j<strlen(str[i]);j++){
            tampung[a] = str[i][j];//memasukkan huruf tiap string utama kedalam variabel tampung
            a++;
        }
    }
    tampung[panputam] = '\0';
    for(i=0;i<m;i++){
        for(j=0;j<strlen(str2[i]);j++){
            tampung2[b] = str2[i][j];//memasukkan huruf tiap striing pembanding ke dalam variabel tampung
            b++;
        }
    }
    tampung[panpem] = '\0';
}//prosedur untuk mencari panjang string dan memasukkan string tiap baris ke dalam tampung
void temp(){
    int i;//variabel iterator
    cek = 0;//agar tidak terjadii bug
    za=0, zb=0, zc=0, zd=0, ze=0, zf=0, zg=0, zh=0, zi=0, zj=0, zk=0, zl=0, zm=0, zn=0, zo=0, zp=0, zq=0, zr=0, zs=0, zt=0, zu=0, zv=0, zw=0, zx=0, zy=0, zz=0;//membuat variabel bernilai 0 agar tidak terjadi bug
    for(i=0;i<strlen(tampung);i++){//perulangan untuk mencari huruf agar dapat dijadikan pembanding antara string utama dan string pembanding
        if(tampung[i] == 'a'){
            za++;
        }else if(tampung[i] == 'b'){
            zb++;
        }else if(tampung[i] == 'c'){
            zc++;
        }else if(tampung[i] == 'd'){
            zd++;
        }else if(tampung[i] == 'e'){
            ze++;
        }else if(tampung[i] == 'f'){
            zf++;
        }else if(tampung[i] == 'g'){
            zg++;
        }else if(tampung[i] == 'h'){
            zh++;
        }else if(tampung[i] == 'i'){
            zi++;
        }else if(tampung[i] == 'j'){
            zj++;
        }else if(tampung[i] == 'k'){
            zk++;
        }else if(tampung[i] == 'l'){
            zl++;
        }else if(tampung[i] == 'm'){
            zm++;
        }else if(tampung[i] == 'n'){
            zn++;
        }else if(tampung[i] == 'o'){
            zo++;
        }else if(tampung[i] == 'p'){
            zp++;
        }else if(tampung[i] == 'q'){
            zq++;
        }else if(tampung[i] == 'r'){
            zr++;
        }else if(tampung[i] == 's'){
            zs++;
        }else if(tampung[i] == 't'){
            zt++;
        }else if(tampung[i] == 'u'){
            zu++;
        }else if(tampung[i] == 'v'){
            zv++;
        }else if(tampung[i] == 'w'){
            zw++;
        }else if(tampung[i] == 'x'){
            zx++;
        }else if(tampung[i] == 'y'){
            zy++;
        }else if(tampung[i] == 'z'){
            zz++;
        }
    }//perulangan untuk mencari huruf agar dapat dijadikan pembanding antara string utama dan string pembanding
    for(i=0;i<strlen(tampung2);i++){//perulangan untuk mencari huruf agar dapat dijadikan pembanding antara string utama dan string pembanding
        if(tampung2[i] == 'a'){
            za++;
        }else if(tampung2[i] == 'b'){
            zb++;
        }else if(tampung2[i] == 'c'){
            zc++;
        }else if(tampung2[i] == 'd'){
            zd++;
        }else if(tampung2[i] == 'e'){
            ze++;
        }else if(tampung2[i] == 'f'){
            zf++;
        }else if(tampung2[i] == 'g'){
            zg++;
        }else if(tampung2[i] == 'h'){
            zh++;
        }else if(tampung2[i] == 'i'){
            zi++;
        }else if(tampung2[i] == 'j'){
            zj++;
        }else if(tampung2[i] == 'k'){
            zk++;
        }else if(tampung2[i] == 'l'){
            zl++;
        }else if(tampung2[i] == 'm'){
            zm++;
        }else if(tampung2[i] == 'n'){
            zn++;
        }else if(tampung2[i] == 'o'){
            zo++;
        }else if(tampung2[i] == 'p'){
            zp++;
        }else if(tampung2[i] == 'q'){
            zq++;
        }else if(tampung2[i] == 'r'){
            zr++;
        }else if(tampung2[i] == 's'){
            zs++;
        }else if(tampung2[i] == 't'){
            zt++;
        }else if(tampung2[i] == 'u'){
            zu++;
        }else if(tampung2[i] == 'v'){
            zv++;
        }else if(tampung2[i] == 'w'){
            zw++;
        }else if(tampung2[i] == 'x'){
            zx++;
        }else if(tampung2[i] == 'y'){
            zy++;
        }else if(tampung2[i] == 'z'){
            zz++;
        }
    }//perulangan untuk mencari huruf agar dapat dijadikan pembanding antara string utama dan string pembanding
    if(za%2==0 && zb%2==0 && zc%2==0 && zd%2==0 && ze%2==0 && zf%2==0 && zg%2==0 && zh%2==0 && zi%2==0 && zj%2==0 && zk%2==0
        && zl%2==0 && zm%2==0 && zn%2==0 && zo%2==0 && zp%2==0 && zq%2==0 && zr%2==0 && zs%2==0
        && zt%2==0 && zu%2==0 && zv%2==0 && zw%2==0 && zx%2==0 && zy%2==0 && zz%2==0){//syarat jika nilai tiap huruf bernilai 0 (setelah dijumlahkan antara utama dan pembanding) maka string tersebut adalah anagram
            cek = 1;
        }else{//jika tidak bernilai 0 maka string tersebut adalah bukan anagram
            cek = 0;
        }
}
int hasil(){
    int total = 0;//variabel untuk menampung nilai apakah anagram atau tidak
    if(cek == 1){
        total = 1;//jika anagram
    }else if(cek == 0){
        total = 0;//jika bukan anagram
    }
    return total;
}//fungsi untuk menentukan apakah string utama dengan pembanding adalah anagram atau tidak
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Ujian Akhir Semester dalam mata kuliah
Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/