#include "header.h"
void wfinal(listfilm movie[], listfilm genre[], listfilm sutradara[], listfilm bioskop[], listfilm akhir[], int a, int b, int c, int d, FILE *ffilm, FILE *fgenre, FILE *fsutradara, FILE *fbioskop){
    int i, j;//iterator
    i=0;
    //proses menyalin dan membuat lisfilmfinal dari struktur data
    while(strcmp(movie[i].nama, "####") != 0){
        //menyalin nama film untuk listfilmfinal
        strcpy(akhir[i].nama, movie[i].nama);
        //proses menyalin dan mengubah id sutradara menjadi nama sutradara
        for(j=0;j<c;j++){
            if(strcmp(movie[i].sutradara, sutradara[j].id) == 0){
                strcpy(akhir[i].sutradara, sutradara[j].sutradara);
                break;
            }
        }
        //proses menyalin dan mengubah id genre menjadi nama genre
        for(j=0;j<b;j++){
            if(strcmp(movie[i].genre, genre[j].id) == 0){
                strcpy(akhir[i].genre, genre[j].genre);
                break;
            }
        }
        //proses menyalin dan mengubah id bioskop menjadi nama bioskop
        for(j=0;j<d;j++){
            if(strcmp(movie[i].bioskop, bioskop[j].id) == 0){
                strcpy(akhir[i].bioskop, bioskop[j].bioskop);
                break;
            }
        }
        i++;
    }
    FILE *flistfilmfinal;                               //menampung sementara
    flistfilmfinal = fopen("ListFilmFinal.dat","w");    //membuat file baru bernama "ListFilmFinal"
    //proses menyaklin printf dibawah ini kedalam file listfiilmfinal
    fprintf(flistfilmfinal, "+------------------------------+-------------------------+--------------------+--------------------+\n");
    fprintf(flistfilmfinal, "|           NamaFilm           |         Sutradara       |       Genre        |       Bioskop      |\n");
    fprintf(flistfilmfinal, "+------------------------------+-------------------------+--------------------+--------------------+\n");
    i=0;
    //proses menyalin nama, sutradara, genre, dan bioskop film
    while(strcmp(movie[i].nama, "####") != 0){
        //proses menyalin nama film ke dalam file
        fprintf(flistfilmfinal, "|%s", akhir[i].nama);
        //proses menyalin spasi pada nama film ke dalam file
        for(j=0;j<30-strlen(akhir[i].nama);j++){
            fprintf(flistfilmfinal, " ");
        }
        //proses menyalin nama sutradara ke dalam file
        fprintf(flistfilmfinal, "|%s", akhir[i].sutradara);
        //proses menyalin spasi pada nama sutradara ke dalam file
        for(j=0;j<25-strlen(akhir[i].sutradara);j++){
            fprintf(flistfilmfinal, " ");
        }
        //proses menyalin nama genre ke dalam file
        fprintf(flistfilmfinal, "|%s", akhir[i].genre);
        //proses menyalin spasi pada nama genre ke dalam file
        for(j=0;j<20-strlen(akhir[i].genre);j++){
            fprintf(flistfilmfinal, " ");
        }
        //proses menyalin nama bioskop ke dalam file
        fprintf(flistfilmfinal, "|%s", akhir[i].bioskop);
        //proses menyalin spasi pada nama bioskop ke dalam file
        for(j=0;j<20-strlen(akhir[i].bioskop);j++){
            fprintf(flistfilmfinal, " ");
        }
        //proses menyalin enter pada file
        fprintf(flistfilmfinal, "|\n");
        i++;
    }
    //proses menyalin isi printf di bawahh ini ke dalam file
    fprintf(flistfilmfinal, "|####                          |####                     |####                |####                |\n");
    fprintf(flistfilmfinal, "+------------------------------+-------------------------+--------------------+--------------------+\n");
    fclose(flistfilmfinal);//menutup file
    i=0; 
}//prosedur untuk membuat file listfilmfinal
void readwfinal(listfilm movie[], listfilm akhir[]){//menampilkan isi dari file listfilmfinal
    int i, j;//iterator
    printf("+------------------------------+-------------------------+--------------------+--------------------+\n");
    printf("|           NamaFilm           |         Sutradara       |       Genre        |       Bioskop      |\n");
    printf("+------------------------------+-------------------------+--------------------+--------------------+\n");
     i=0;
     //proses menampilkan nama, sutradara, genre, dan bioskop film
    while(strcmp(movie[i].nama, "####") != 0){
        //proses menampilkan nama dan spasi pada nama film
        printf("|%s", akhir[i].nama);
        for(j=0;j<30-strlen(akhir[i].nama);j++){
            printf(" ");
        }
        //proses menampilkan nama dan spasi nama sutradara
        printf("|%s", akhir[i].sutradara);
        for(j=0;j<25-strlen(akhir[i].sutradara);j++){
            printf(" ");
        }
        //proses menampilkan nama dan spasi pada genre
        printf("|%s", akhir[i].genre);
        for(j=0;j<20-strlen(akhir[i].genre);j++){
            printf(" ");
        }
        //proses menampilkan nama dan spasi pada bioskop
        printf("|%s", akhir[i].bioskop);
        for(j=0;j<20-strlen(akhir[i].bioskop);j++){
            printf(" ");
        }
        printf("|\n");
        i++;
    }
    printf("|####                          |####                     |####                |####                |\n");
    printf("+------------------------------+-------------------------+--------------------+--------------------+\n");
}
void tambahfilm(listfilm film[], FILE *ffilm, int a){
    int i, j;//iterator
    printf("+------------------------------------------------------------------------------+\n");
    printf("| Inputkan '####' ke masing masing masukkan jika sudah selesai menambahkan data|\n");
    printf("+------------------------------------------------------------------------------+\n");
    //proses memasukkan record baru untuk film
    printf("Masukkan Nama Film: ");
    scanf("%s", &film[a].nama);             //memasukkan nama film
    printf("Masukkan Kode Sutradara: ");
    scanf("%s", &film[a].sutradara);        //memasukkan nama sutradara
    printf("Masukkan Kode Genre: ");
    scanf("%s", &film[a].genre);            //memasukkan kode genre
    printf("Masukkan Kode Bioskop: ");
    scanf("%s", &film[a].bioskop);          //memasukkan kode bioskop
    //proses memasukkan nama, sutradara, genre, dan bioskop film jika input tidak "####"
    while (strcmp(film[a].nama, "####") != 0){
        a++;
        printf("Masukkan Nama Film: ");
        scanf("%s", &film[a].nama);
        printf("Masukkan Kode Sutradara: ");
        scanf("%s", &film[a].sutradara);
        printf("Masukkan Kode Genre: ");
        scanf("%s", &film[a].genre);
        printf("Masukkan Kode Bioskop: ");
        scanf("%s", &film[a].bioskop);
    }
    //membuka file dengan tipe write
    ffilm = fopen("ListFilm.dat","w");
    a=0;
    //proses menambahkan record pada file listfilm
    while(strcmp(film[a].nama, "####") != 0){
        fprintf(ffilm, "%s %s %s %s\n", film[a].nama, film[a].sutradara, &film[a].genre, &film[a].bioskop);
        a++;
    }
    //menambahkan EoF End of File
    fprintf(ffilm, "#### ####");
    fclose(ffilm);
}
void tambahgenre(listfilm genre[], FILE *fgenre, int a){
    int i, j;//iterator
    printf("+------------------------------------------------------------------------------+\n");
    printf("| Inputkan '####' ke masing masing masukkan jika sudah selesai menambahkan data|\n");
    printf("+------------------------------------------------------------------------------+\n");
    //proses memasukkan record baru untuk genre
    printf("Masukkan Kode Genre: ");    
    scanf("%s", &genre[a].id);      //memasukkan kode genre
    printf("Masukkan Nama Genre: ");
    scanf("%s", &genre[a].genre);   //memasukkan nama genre
    //proses melanjutkan proses input untuk kode genre dan nama genre selama input yang dimasukkan tidak "####"
    while (strcmp(genre[a].id, "####") != 0){
        a++;
        printf("Masukkan Kode Genre: ");
        scanf("%s", &genre[a].id);
        printf("Masukkan Nama Genre: ");
        scanf("%s", &genre[a].genre);
    }
    
    fgenre = fopen("Genre.dat","w");//membuka file dengan tipe write
    a=0;
    //proses menambahkan record baru kedalam file genre
    while(strcmp(genre[a].id, "####") != 0){
        fprintf(fgenre, "%s %s\n", genre[a].id, genre[a].genre);
        a++;
    }
    fprintf(fgenre, "#### ####");//End of File
    fclose(fgenre);
}
void tambahsutradara(listfilm sutradara[], FILE *fsutradara, int a){
    int i, j;//iterator
    printf("+------------------------------------------------------------------------------+\n");
    printf("| Inputkan '####' ke masing masing masukkan jika sudah selesai menambahkan data|\n");
    printf("+------------------------------------------------------------------------------+\n");
    //proses memasukkan kode dan nama sutradara
    printf("Masukkan Kode Sutradara: ");
    scanf("%s", &sutradara[a].id);          //memasukkan kode sutradara
    printf("Masukkan Nama Sutradara: ");
    scanf("%s", &sutradara[a].sutradara);   //memasukkan nama sutradra
    //proses melanjutkan input id dan nama sutradara selama input yang dimasukkan tidak "####"
    while (strcmp(sutradara[a].id, "####") != 0){
        a++;
        printf("Masukkan Kode Sutradara: ");
        scanf("%s", &sutradara[a].id);
        printf("Masukkan Nama Sutradara: ");
        scanf("%s", &sutradara[a].sutradara);
    }
    fsutradara = fopen("Sutradara.dat","w");//membuka file sutradara dengan tipe write
    a=0;
    //proses menambahkan record baru kedalam file sutrdara
    while(strcmp(sutradara[a].id, "####") != 0){
        fprintf(fsutradara, "%s %s\n", sutradara[a].id, sutradara[a].sutradara);
        a++;
    }
    fprintf(fsutradara, "#### ####");//End of File
    fclose(fsutradara);
}
void tambahbioskop(listfilm bioskop[], FILE *fbioskop, int a){
    int i, j;//iterator
    printf("+------------------------------------------------------------------------------+\n");
    printf("| Inputkan '####' ke masing masing masukkan jika sudah selesai menambahkan data|\n");
    printf("+------------------------------------------------------------------------------+\n");
    //proses memasukkan kode dan nama bioskop
    printf("Masukkan Kode Bioskop: ");
    scanf("%s", &bioskop[a].id);
    printf("Masukkan Nama Bioskop: ");
    scanf("%s", &bioskop[a].bioskop);
    //proses melanjutkan input kode dan nama bioskop selama input tidak "####"
    while (strcmp(bioskop[a].id, "####") != 0){
        a++;
        printf("Masukkan Kode Bioskop: ");
        scanf("%s", &bioskop[a].id);
        printf("Masukkan Nama Bioskop: ");
        scanf("%s", &bioskop[a].bioskop);
    }
    fbioskop = fopen("Bioskop.dat","w");//membuka file bioskop dengan tipe write
    a=0;
    //proses menambahkan record keedalam file bioskop
    while(strcmp(bioskop[a].id, "####") != 0){
        fprintf(fbioskop, "%s %s\n", bioskop[a].id, bioskop[a].bioskop);
        a++;
    }
    fprintf(fbioskop, "#### ####");//End of File
    fclose(fbioskop);
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 8 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/