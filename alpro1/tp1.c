#include<stdio.h>
int main () {
    //membuat kotak angka
    int menit_masukan;
    int detik_masukan;
    int j_foto;
    int istirahat;
    int sec_awal;
    int sec_akhir;
    int jam;
    int menit;
    int detik;
    //meminta masukan user untuk 3 kotak angka
    scanf("%d", &menit_masukan);
    scanf("%d", &detik_masukan);
    scanf("%d", &j_foto);
    //menit dikali 60 karena diubah menjadi detik
    sec_awal = (menit_masukan*60 + detik_masukan)*j_foto;
    //sec_awal dibagi 1800 karena setiap 30 menit (1800 detik) Pak Tejo istirahat
    istirahat = sec_awal/1800;
    //istirahat dikali 60 karena belum dikonversi menjadi detik
    int sec_istirahat = istirahat * 60;
    //total lama waktu mencetak semua foto
    sec_akhir = sec_awal + sec_istirahat;

    //mengoperasikan artimatika
    //sec_akhir dibagi dengan 3600 karena setiap 1 jam = 3600 detik
    jam = sec_akhir/3600;
    menit = (sec_akhir%3600)/60; 
    detik = (sec_akhir%3600)%60;

    //menampilkan jumlah istirahat
    printf("Istirahat sebanyak : %d\n", istirahat);
    //menampilkan total waktu yang diperlukan
    printf("Total waktu yang diperlukan : %d jam %d menit %d detik\n", jam, menit, detik);
    return 0;
    /*Saya Raden Fadhil A.A (2004305) mengerjakan Tugas Pratikum PPU20 dalam mata kuliah Alpro 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
}