#include "pola.h"
int main () {
    int i, n, m, o;//variabel untuk menampung iterator dan angka
    scanf("%d %d", &n, &m);//meminta user untuk memasukkan angka(mode tampilan dan banyaknya string)
    char str[m][100];//variabel untuk menampung string inputan
    for(i=0;i<m;i++){
        scanf("%s", &str[i]);//meminta user untuk memasukkan string sebanyak n
    }
    scanf("%d", &o);//meminta user untuk memasukkan angka(ketebalan)
    input(n, m, str);//menampilkan prosedur untuk mencari panjang tiap string
    pola(o, n, m);//menampilkan prosedur untuk menampilkan pola
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/