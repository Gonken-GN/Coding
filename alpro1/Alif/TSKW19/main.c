#include "header.h" //include header

int main(){

    char penyakit[100], elemenPenyakit[100];//var string untuk penyakit dan elemennya
    int n, i;//n variabel banyak penawar, i variabel iterator
    scanf("%s %s", penyakit, elemenPenyakit); // input penyakit dan elemennya
    scanf("%d", &n);//input banyak penawar
    char penawar[n][100], elemen[n][100];
    for(i = 0; i < n; i++){
        scanf("%s %s", penawar[i], elemen[i]);//input penawar dan elemennya
    }
    check(n, penyakit, elemenPenyakit, penawar, elemen);//prosedur untuk mengecek dan memisahkan mana berhasil dan gagal
    print();//prosedur menampilkan penawar yang berhasil dan gagal

    return 0;
}