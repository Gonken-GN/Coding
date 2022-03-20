#include "header.h"

void write(list_buku buku[], author aut[], genre gen[], tokoBuku toko[], final list[], int n, int a, int b, int c, FILE *flistbuku, FILE *fauthor, FILE *fgenre, FILE *ftokobuku) {
    int i = 0, j;

    while(strcmp(buku[i].NamaBuku, "####") != 0) {
        strcpy(list[i].NamaBuku, buku[i].NamaBuku);
        for(j=0;j<a;j++) {
            if(strcmp(buku[i].Author, aut[j].KodeAuthor) == 0) {
                strcpy(list[i].Author, aut[j].NamaAuthor);
            }
        }
        for(j=0;j<b;j++) {
            if(strcmp(buku[i].Genre, gen[j].KodeGenre) == 0) {
                strcpy(list[i].Genre, gen[j].NamaGenre);
            }
        }
        for(j=0;j<c;j++) {
            if(strcmp(buku[i].TokoBuku, toko[j].KodeToko) == 0) {
                strcpy(list[i].TokoBuKu, toko[j].NamaToko);
            }
        }
        i++;
    }

    FILE *flistfinal;
    flistfinal = fopen("ListBukuFinal.dat", "w");

    i=0;
    j=0;
    fprintf(flistfinal, "+------------------------------+-------------------------+--------------------+--------------------+\n");
    fprintf(flistfinal, "|           NamaBuku           |         Author          |       Genre        |      TokoBuku      |\n");
    fprintf(flistfinal, "+------------------------------+-------------------------+--------------------+--------------------+\n");
    while(strcmp(buku[i].NamaBuku, "####") != 0) {
        fprintf(flistfinal, "|%s", list[i].NamaBuku);
        for(j=0;j<30 - strlen(list[i].NamaBuku);j++) {
            fprintf(flistfinal, " ");
        }
        fprintf(flistfinal, "|%s", list[i].Author);
        for(j=0;j<25 - strlen(list[i].Author);j++) {
            fprintf(flistfinal, " ");
        }
        fprintf(flistfinal, "|%s", list[i].Genre);
        for(j=0;j<20 - strlen(list[i].Genre);j++) {
            fprintf(flistfinal, " ");
        }
        fprintf(flistfinal, "|%s", list[i].TokoBuKu);
        for(j=0;j<20 - strlen(list[i].TokoBuKu);j++) {
            fprintf(flistfinal, " ");
        }
        fprintf(flistfinal, "|\n");
        i++;
    }

    fprintf(flistfinal, "|####                          |####                     |####                |####                |\n");
    fprintf(flistfinal, "+------------------------------+-------------------------+--------------------+--------------------+\n");
    fclose(flistfinal);
}

void readFinal(final list[], list_buku buku[]) {
    int i=0;
    int j=0;
    printf("+------------------------------+-------------------------+--------------------+--------------------+\n");
    printf("|           NamaBuku           |         Author          |       Genre        |      TokoBuku      |\n");
    printf("+------------------------------+-------------------------+--------------------+--------------------+\n");
    while(strcmp(buku[i].NamaBuku, "####") != 0) {
        printf("|%s", list[i].NamaBuku);
        for(j=0;j<30 - strlen(list[i].NamaBuku);j++) {
            printf(" ");
        }
        printf("|%s", list[i].Author);
        for(j=0;j<25 - strlen(list[i].Author);j++) {
            printf(" ");
        }
        printf("|%s", list[i].Genre);
        for(j=0;j<20 - strlen(list[i].Genre);j++) {
            printf(" ");
        }
        printf("|%s", list[i].TokoBuKu);
        for(j=0;j<20 - strlen(list[i].TokoBuKu);j++) {
            printf(" ");
        }
        printf("|\n");
        i++;
    }

    printf("|####                          |####                     |####                |####                |\n");
    printf("+------------------------------+-------------------------+--------------------+--------------------+\n");    
}

void readAuthor(author aut[]) {
    int i=0;
    int j;
    printf("+-------+-------------------------+\n");
    while(strcmp(aut[i].KodeAuthor, "####") != 0) {
        printf("| %s", aut[i].KodeAuthor);
        printf(" ");
        printf("|%s", aut[i].NamaAuthor);
        for(j=0;j<25-strlen(aut[i].NamaAuthor);j++) {
            printf(" ");
        }
        printf("|\n");
        i++;
    }
    printf("|  #### |####                     |\n");
    printf("+-------+-------------------------+\n");
}

void readGenre(genre gen[]) {
    int i=0;
    int j;
    printf("+-----+--------------------+\n");
    while(strcmp(gen[i].KodeGenre, "####") != 0) {
        printf("| %s", gen[i].KodeGenre);
        printf(" ");
        printf("|%s", gen[i].NamaGenre);
        for(j=0;j<20-strlen(gen[i].NamaGenre);j++) {
            printf(" ");
        }
        printf("|\n");
        i++;
    }
    printf("|#### |####                |\n");
    printf("+-----+--------------------+\n");
}

void readToko(tokoBuku toko[]) {
    int i=0;
    int j;
    printf("+-----+--------------------+\n");
    while(strcmp(toko[i].KodeToko, "####") != 0) {
        printf("| %s", toko[i].KodeToko);
        printf(" ");
        printf("|%s", toko[i].NamaToko);
        for(j=0;j<20-strlen(toko[i].NamaToko);j++) {
            printf(" ");
        }
        printf("|\n");
        i++;
    }
    printf("|#### |####                |\n");
    printf("+-----+--------------------+\n");
}

void writeBuku(list_buku buku[], FILE *flistbuku, int n) {
    printf("+--------------------------------------------------------------------------------+\n");
    printf("| Pastikan KodeAuthor, KodeGenre dan KodeTokoBuku ada didalam file .dat          |\n");
    printf("| Inputkan '####' ke masing masing masukkan jika sudah selesai menambahkan data  |\n");
    printf("+--------------------------------------------------------------------------------+\n");
    printf("\n");
    printf("NamaBuku:\n");
    scanf("%s", buku[n].NamaBuku);
    printf("KodeAuthor:\n");
    scanf("%s", buku[n].Author);
    printf("KodeGenre:\n");
    scanf("%s", buku[n].Genre);
    printf("KodeTokoBuku:\n");
    scanf("%s", buku[n].TokoBuku); 
    printf("\n");

    while(strcmp(buku[n].NamaBuku, "####") != 0) {
        n++;
        printf("NamaBuku:\n");
        scanf("%s", buku[n].NamaBuku);
        printf("KodeAuthor:\n");
        scanf("%s", buku[n].Author);
        printf("KodeGenre:\n");
        scanf("%s", buku[n].Genre);
        printf("KodeTokoBuku:\n");
        scanf("%s", buku[n].TokoBuku);
        printf("\n");
    }

    flistbuku = fopen("ListBukuMentah.dat", "w");
    n = 0;
    while(strcmp(buku[n].NamaBuku, "####") != 0) {
        fprintf(flistbuku, "%s %s %s %s\n", buku[n].NamaBuku, buku[n].Author, buku[n].Genre, buku[n].TokoBuku);
        n++;
    }
    fprintf(flistbuku, "#### #### #### ####\n");
    fclose(flistbuku);
}

void writeAuthor (author aut[], FILE *fauthor, int a) {
    printf("+------------------------------------------------------------------------------+\n");
    printf("| Inputkan '####' ke masing masing masukkan jika sudah selesai menambahkan data|\n");
    printf("+------------------------------------------------------------------------------+\n");
    printf("\n");
    printf("Masukkan KodeAuthor:\n");
    scanf("%s", aut[a].KodeAuthor);
    printf("Masukkan NamaAuthor:\n");
    scanf("%s", aut[a].NamaAuthor);
    printf("\n");

    while(strcmp(aut[a].KodeAuthor, "####") != 0) {
        a++;
        printf("Masukkan KodeAuthor:\n");
        scanf("%s", aut[a].KodeAuthor);
        printf("Masukkan NamaAuthor:\n");
        scanf("%s", aut[a].NamaAuthor);
        printf("\n");
    }

    fauthor = fopen("Author.dat", "w");
    a = 0;
    while(strcmp(aut[a].KodeAuthor, "####") != 0) {
        fprintf(fauthor, "%s %s\n", aut[a].KodeAuthor, aut[a].NamaAuthor);
        a++;
    }
    fprintf(fauthor, "#### ####\n");
    fclose(fauthor);
}

void writeGenre(genre gen[], FILE *fgenre, int b) {
    printf("+------------------------------------------------------------------------------+\n");
    printf("| Inputkan '####' ke masing masing masukkan jika sudah selesai menambahkan data|\n");
    printf("+------------------------------------------------------------------------------+\n");
    printf("\n");
    printf("Masukkan KodeGenre:\n");
    scanf("%s", gen[b].KodeGenre);
    printf("Masukkan NamaGenre:\n");
    scanf("%s", gen[b].NamaGenre);
    printf("\n");

    while(strcmp(gen[b].KodeGenre, "####") != 0) {
        b++;
        printf("Masukkan KodeGenre:\n");
        scanf("%s", gen[b].KodeGenre);
        printf("Masukkan NamaGenre:\n");
        scanf("%s", gen[b].NamaGenre);
        printf("\n");
    }

    fgenre = fopen("Genre.dat", "w");
    b = 0;
    while(strcmp(gen[b].KodeGenre, "####") != 0) {
        fprintf(fgenre, "%s %s\n", gen[b].KodeGenre, gen[b].NamaGenre);
        b++;
    }
    fprintf(fgenre, "#### ####");
    fclose(fgenre);
}

void writeToko(tokoBuku toko[], FILE *ftokobuku, int c) {
    printf("+------------------------------------------------------------------------------+\n");
    printf("| Inputkan '####' ke masing masing masukkan jika sudah selesai menambahkan data|\n");
    printf("+------------------------------------------------------------------------------+\n");
    printf("\n");
    printf("Masukkan KodeToko:\n");
    scanf("%s", toko[c].KodeToko);
    printf("Masukkan NamaToko:\n");
    scanf("%s", toko[c].NamaToko);
    printf("\n");

    while(strcmp(toko[c].KodeToko, "####") != 0) {
        c++;
        printf("Masukkan KodeToko:\n");
        scanf("%s", toko[c].KodeToko);
        printf("Masukkan NamaToko:\n");
        scanf("%s", toko[c].NamaToko);
        printf("\n");
    }

    ftokobuku = fopen("TokoBuku.dat", "w");
    c = 0;
    while(strcmp(toko[c].KodeToko, "####") != 0) {
        fprintf(ftokobuku, "%s %s\n", toko[c].KodeToko, toko[c].NamaToko);
        c++;
    }
    fprintf(ftokobuku, "#### ####");
    fclose(ftokobuku);
}



