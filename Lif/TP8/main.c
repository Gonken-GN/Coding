#include "header.h"

int main () {

    int i, n = 0, a = 0, b = 0, c = 0;

    list_buku buku[100];
    author aut[100];
    genre gen[100];
    tokoBuku toko[100];
    final list[100];

    FILE *flistbuku;
    FILE *fauthor;
    FILE *fgenre;
    FILE *ftokoBuku;

    char masukan;

    while(masukan != '0') {

        n = 0, a = 0, b = 0, c = 0;

        flistbuku = fopen("ListBukuMentah.dat", "r");
        fauthor = fopen("Author.dat", "r");
        fgenre = fopen("Genre.dat", "r");
        ftokoBuku = fopen("TokoBuku.dat", "r");

        fscanf(flistbuku, "%s %s %s %s", buku[n].NamaBuku, buku[n].Author, buku[n].Genre, buku[n].TokoBuku);

        while(strcmp(buku[n].NamaBuku, "####") != 0) {
            n++;
            fscanf(flistbuku, "%s %s %s %s", buku[n].NamaBuku, buku[n].Author, buku[n].Genre, buku[n].TokoBuku);
        }

        fscanf(fauthor, "%s %s", aut[a].KodeAuthor, aut[a].NamaAuthor);

        while(strcmp(aut[a].KodeAuthor, "####") != 0) {
            a++;
            fscanf(fauthor, "%s %s", aut[a].KodeAuthor, aut[a].NamaAuthor);
        }

        fscanf(fgenre, "%s %s", gen[b].KodeGenre, gen[b].NamaGenre);

        while(strcmp(gen[b].KodeGenre, "####") != 0) {
            b++;
            fscanf(fgenre, "%s %s", gen[b].KodeGenre, gen[b].NamaGenre);
        }

        fscanf(ftokoBuku, "%s %s", toko[c].KodeToko, toko[c].NamaToko);

        while(strcmp(toko[c].KodeToko, "####") != 0) {
            c++;
            fscanf(ftokoBuku, "%s %s", toko[c].KodeToko, toko[c].NamaToko);
        }

        fclose(flistbuku);
        fclose(fauthor);
        fclose(fgenre);
        fclose(ftokoBuku);

        printf("+--------------------------------+\n");
        printf("| 1. Buat ListBukuFinal.dat      |\n");
        printf("| 2. Tampilkan ListBukuFinal.dat |\n");
        printf("| 3. Tampilkan Author.dat        |\n");
        printf("| 4. Tampilkan Genre.dat         |\n");
        printf("| 5. Tampilkan TokoBuku.dat      |\n");
        printf("| 6. Tambah Buku                 |\n");
        printf("| 7. Tambah Author               |\n");
        printf("| 8. Tambah Genre                |\n");
        printf("| 9. Tambah TokoBuku             |\n");
        printf("+--------------------------------+\n");
        printf("| 0. Selesai                     |\n");
        printf("+--------------------------------+\n");
        printf("Pilih Menu (berdasarkan nomor): \n");
        scanf(" %c", &masukan);
        if(masukan == '1') {
            write(buku, aut, gen, toko, list, n, a, b, c, flistbuku, fauthor, fgenre, ftokoBuku);
             readFinal(list, buku);
        } else if(masukan == '2') {
           
        } else if(masukan == '3') {
            readAuthor(aut);
        } else if(masukan == '4') {
            readGenre(gen);
        } else if(masukan == '5') {
            readToko(toko);
        } else if(masukan == '6') {
            writeBuku(buku, flistbuku, n);
        } else if(masukan == '7') {
            writeAuthor(aut, fauthor, a);
        } else if(masukan == '8') {
            writeGenre(gen, fgenre, b);
        } else if(masukan == '9') {
            writeToko(toko, ftokoBuku, c);
        }
    }

    return 0;
}