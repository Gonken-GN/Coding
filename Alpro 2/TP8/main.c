#include "header.h"
int main (){
    int i, j;// iterator
    int a=0, b=0, c=0, d=0;//iterasi untuk tiap file
    listfilm film[100]; //data terstruktur untuk file film
    listfilm gen[100];  //data terstruktur untuk file genre
    listfilm sut[100];  //data terstruktur untuk file sutradara
    listfilm bios[100]; //data terstruktur untuk fie bioskop
    listfilm final[100];//data terstuktur untuk file finallist (list film yang sudah digabung)
    //proses menampung seemntara dari file yang dibuat
    FILE *ffilm;
    FILE *fgenre;
    FILE *fsutradara;
    FILE *fbioskop;
    char pilih;//variabel untuk meemilih menu
    //proses memilih dan menyalin isi file kedalam data terstukrut yang sudah disedakan
    i=0;
    while(pilih != '0'){
        a=0, b=0, c=0, d=0;//iterator
        //proses membuka file
        ffilm = fopen("ListFilm.dat","r");
        fgenre = fopen("Genre.dat","r");
        fsutradara = fopen("Sutradara.dat","r");
        fbioskop = fopen("Bioskop.dat","r");
        //proses menyalin isi file ke dalam data terstruktur yang sudah disediiakan
        fscanf(ffilm, "%s %s %s %s", &film[a].nama, &film[a].sutradara, &film[a].genre, &film[a].bioskop);
        while(strcmp(film[a].nama, "####") != 0){
            a++;
            fscanf(ffilm, "%s %s %s %s", &film[a].nama, &film[a].sutradara, &film[a].genre, &film[a].bioskop);
        }
        fscanf(fgenre, "%s %s", &gen[b].id, &gen[b].genre);
        while(strcmp(gen[b].id, "####") != 0){
            b++;
            fscanf(fgenre, "%s %s", &gen[b].id, &gen[b].genre);
        }
        fscanf(fsutradara, "%s %s", &sut[c].id, &sut[c].sutradara);
        while (strcmp(sut[c].id, "####") != 0){
            c++;
            fscanf(fsutradara, "%s %s", &sut[c].id, &sut[c].sutradara);
        }
        fscanf(fbioskop, "%s %s", &bios[d].id, &bios[d].bioskop);
        while (strcmp(bios[d].id, "####") != 0){
            d++;
            fscanf(fbioskop, "%s %s", &bios[d].id, &bios[d].bioskop);
        }
        //menutup file
        fclose(ffilm);
        fclose(fgenre);
        fclose(fgenre);
        fclose(fbioskop);
        printf("+------------------------------------------+\n");
        printf("| 1. Buat&tampilkan ListFilmFinal.dat      |\n");
        printf("| 2. Tambahkan record Film                 |\n");
        printf("| 3. Tambahkan record Sutradara            |\n");
        printf("| 4. Tambahkan record Genre                |\n");
        printf("| 5. Tambahkan record Bioskop              |\n");
        printf("+------------------------------------------+\n");
        printf("| 0. Selesai                               |\n");
        printf("+------------------------------------------+\n");
        printf("Pilih Menu (berdasarkan nomor): ");
        //proses memilih dari menu yang sudah disedikan
        scanf(" %c", &pilih);
        if(pilih == '1'){
            wfinal(film, gen, sut, bios, final, a, b, c, d, ffilm, fgenre, fsutradara, fbioskop);//memanggil prosedur buat listfilmfinal.dat
            readwfinal(film, final);            //menampilkan isi file darii listfilmfinal.dat
        }else if(pilih == '2'){
            tambahfilm(film, ffilm, a);         //memanggil prosedur untuk menambah record film
        }else if(pilih == '3'){
            tambahsutradara(sut, fsutradara, c);//memanggil prosedur untuk menambah record sutradara
        }else if(pilih == '5'){
            tambahbioskop(bios, fbioskop, d);   //memanggiil prosedur untuk menambah record bioskop
        }else if(pilih == '4'){
            tambahgenre(gen, fgenre, b);        //memanggil prosedur untuk menambah record genre
        }else{
            printf("Terima Kasih \n");
        }
    }
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 8 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/