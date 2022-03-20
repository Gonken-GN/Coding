#include "head.h"

void datafilm(data film[50], int x){
    //flush ke file
    int i, j;
    FILE *ffinal;
    ffinal=fopen("ListFilmFinal.dat", "w");
    for(i=0; i<x; i++){
        fprintf(ffinal, "%s %s %s %s\n", film[i].namafilm, film[i].sutradara, film[i].genre, film[i].bioskop);
    }
    fprintf(ffinal, "#### #### #### ####\n");
    fclose(ffinal);

    printf("+-----------------------------+-----------------------+-----------------------+-----------------------+\n");
    printf("|         NAMA FILM           |       SUTRADARA       |         GENRE         |         BIOSKOP       |\n");
    printf("+-----------------------------+-----------------------+-----------------------+-----------------------+\n");
    for(i=0; i<x; i++){
        printf("|%s", film[i].namafilm);
        for(j=strlen(film[i].namafilm); j<29; j++){
            printf(" ");
        }
        printf("|%s", film[i].sutradara);
        for(j=strlen(film[i].sutradara); j<23; j++){
            printf(" ");
        }
        printf("|%s", film[i].genre);
        for(j=strlen(film[i].genre); j<23; j++){
            printf(" ");
        }
        printf("|%s", film[i].bioskop);
        for(j=strlen(film[i].bioskop); j<23; j++){
            printf(" ");
        }
        printf("|\n");
    }
    printf("+-----------------------------+-----------------------+-----------------------+-----------------------+\n");

}

void addfilm(data film[50], int x, data baru[50]){

    int i=0, j;
    FILE *daftarfilm;
    daftarfilm=fopen("ListFilm.dat", "r");
    fscanf(daftarfilm, "%s %s %s %s\n", baru[i].namafilm, baru[i].sutradara, baru[i].genre, baru[i].bioskop);
    while (strcmp(baru[i].namafilm, "####")!=0){
        i++;
        fscanf(daftarfilm, "%s %s %s %s\n", baru[i].namafilm, baru[i].sutradara, baru[i].genre, baru[i].bioskop);
    }
    scanf("%s %s %s %s", &baru[i].namafilm, baru[i].sutradara, baru[i].genre, baru[i].bioskop);
    while (strcmp(baru[i].namafilm, "####")!=0){
        i++;
        scanf("%s %s %s %s", &baru[i].namafilm, &baru[i].sutradara, &baru[i].genre, &baru[i].bioskop);
    }
    fclose(daftarfilm);
    daftarfilm=fopen("ListFilm.dat", "w");
    for(j=0; j<i; j++){
        fprintf(daftarfilm, "%s %s %s %s\n", baru[j].namafilm, &baru[j].sutradara, &baru[j].genre, &baru[j].bioskop);
    }
    fprintf(daftarfilm, "#### #### #### ####\n");
    
}

void addsutradara(data baru[50], int m){

    int i=0, j;
    FILE *fdaftarstdr;
    scanf("%s %s", &baru[m].id, &baru[m].sutradara);
    while (strcmp(baru[m].id, "####")!=0){
        m++;
        scanf("%s %s", &baru[m].id, &baru[m].sutradara);
    }
    fdaftarstdr=fopen("Sutradara.dat", "w");
    m=0;
    while(strcmp(baru[m].id, "####") != 0){
        fprintf(fdaftarstdr, "%s %s\n", baru[m].id, baru[m].sutradara);
        m++;
    }
    fprintf(fdaftarstdr, "#### ####");
    fclose(fdaftarstdr);
    
}

void addgenre(data baru[50]){

    int i=0, j;
    FILE *daftargenre;
    daftargenre=fopen("Genre.dat", "r");
    fscanf(daftargenre, "%s %s\n", baru[i].id, baru[i].genre);
    while (strcmp(baru[i].id, "####")!=0){
        i++;
        fscanf(daftargenre, "%s %s\n", baru[i].id, baru[i].genre);
    }
    scanf("%s %s", &baru[i].id, &baru[i].genre);
    while (strcmp(baru[i].id, "####")!=0){
        i++;
        scanf("%s %s", &baru[i].id, &baru[i].genre);
    }
    fclose(daftargenre);
    daftargenre=fopen("Genre.dat", "w");
    for(j=0; j<i; j++){
        fprintf(daftargenre, "%s %s\n", baru[j].id, baru[j].genre);
    }
    fprintf(daftargenre, "#### #### #### ####\n");
    
}

void addbioskop(data baru[50]){

    int i=0, j;
    FILE *daftarbioskop;
    daftarbioskop=fopen("Bioskop.dat", "r");
    fscanf(daftarbioskop, "%s %s\n", baru[i].id, baru[i].bioskop);
    while (strcmp(baru[i].id, "####")!=0){
        i++;
        fscanf(daftarbioskop, "%s %s\n", baru[i].id, baru[i].bioskop);
    }
    scanf("%s %s", &baru[i].id, &baru[i].bioskop);
    while (strcmp(baru[i].id, "####")!=0){
        i++;
        scanf("%s %s", &baru[i].id, &baru[i].bioskop);
    }
    fclose(daftarbioskop);
    daftarbioskop=fopen("Bioskop.dat", "w");
    for(j=0; j<i; j++){
        fprintf(daftarbioskop, "%s %s\n", baru[j].id, baru[j].bioskop);
    }
    fprintf(daftarbioskop, "#### #### #### ####\n");
    
}