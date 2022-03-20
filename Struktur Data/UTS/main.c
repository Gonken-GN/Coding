#include "header.h"

int main (){
    list L;
    createlist(&L);
    int n, i = 0, j =0, m;
    scanf("%d", &n);
    char start[100], swt[100];
    char baris1[100], menu1[100], baris2[100];
    restoran warteg[n];
    menu makanan;
    //inputan akan dimasukkan kedalam list dan list of list
    for(i=0;i<n;i++){
        int temu = 0;
        scanf("%s", &start);
        if(strcmp(start, "start") == 0){
            //proses mengubah input menjadi baris (list)
            scanf("%s", &warteg[i].nama);
            addlastB(warteg[i].nama, &L);
            eBaris* baris = getLatestBaris(L, warteg[i].nama);//code untuk mengambil alokasi baris sebagai penanda baris mana yg akan di add kolom
            //perulangan akan terus berlansung selama tidak memasukkan input end
            do{
                scanf("%s", &makanan.nama);
                if(strcmp(makanan.nama, "end") != 0){
                    scanf("%s", &makanan.harga);
                    //jika terdapat baris maka masukkan kolom
                    if(baris != NULL){
                        addlastK(makanan.nama, makanan.harga, baris);
                    }
                }
            }while(strcmp(makanan.nama, "end") != 0);
        }
    }
    //proses menu dan restoran mana yang akan ditukar menunya
    scanf("%s", &swt);
    int iterator = 0;
    if(strcmp(swt, "switch") == 0){
        //perulangan akan terus berlangsung selama tidak memasukkan input end
        do{
            scanf("%s", &baris1);
            if(strcmp(baris1, "end") != 0){
                scanf("%s %s", &menu1, &baris2);
                iterator = 1;
                //proses memindahkan menu dari input pertama restoran dan input kedua restoran
                if(iterator != 0){
                    pindah(&L, baris1, menu1, baris2);
                }
            }
        }while(strcmp(baris1, "end") != 0);
    }
    printelement(L, n);
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Ujian Tengah Semester (UTS)dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/