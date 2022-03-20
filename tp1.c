#include<stdio.h>

int main () {

    int menit_masukan;
    int detik_masukan;
    int j_foto;
    int istirahat;
    int sec_awal;
    int sec_akhir;
    int jam;
    int menit;
    int detik;

    scanf("%d", &menit_masukan);
    scanf("%d", &detik_masukan);
    scanf("%d", &j_foto);

    sec_awal = (menit_masukan*60 + detik_masukan)*j_foto;
    istirahat = sec_awal/1800;
    int sec_istirahat = istirahat * 60;
    sec_akhir = sec_awal + sec_istirahat;

    jam = sec_akhir/3600;
    menit = (sec_akhir%3600)/60; 
    detik = (sec_akhir%3600)%60;

    printf("Istirahat sebanyak : %d\n", istirahat);
    printf("Total waktu yang diperlukan : %d jam %d menit %d detik\n", jam, menit, detik);
    return 0;
}