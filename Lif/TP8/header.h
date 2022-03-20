#include <stdio.h>
#include <string.h>

typedef struct{
    char NamaBuku[30];
    char Author[30];
    char Genre[30];
    char TokoBuku[30];
} list_buku;

typedef struct{
    char KodeAuthor[30];
    char NamaAuthor[30];
} author;

typedef struct{
    char KodeGenre[30];
    char NamaGenre[30];
} genre;

typedef struct{
    char KodeToko[30];
    char NamaToko[30];
} tokoBuku;

typedef struct{
    char NamaBuku[30];
    char Author[30];
    char Genre[30];
    char TokoBuKu[30];
} final;

void write(list_buku buku[], author aut[], genre gen[], tokoBuku toko[], final list[], int n, int a, int b, int c, FILE *flistbuku, FILE *fauthor, FILE *fgenre, FILE *ftokobuku); //Membuat file ListBukuFinal.dat
void readFinal(final list[], list_buku buku[]); //Menampilkan ListBukuFinal.dat
void readAuthor(author aut[]); //Menampilkan Author.dat
void readGenre(genre gen[]); //Menampilkan Genre.dat
void readToko(tokoBuku toko[]); //Menampilkan TokoBuku.dat
void writeBuku(list_buku buku[], FILE *flistbuku, int n); //Menambah ListBukuMentah.dat
void writeAuthor(author aut[], FILE *fauthor, int a); //Menambah Author.dat
void writeGenre(genre gen[], FILE *fgenre, int b); //Menambah Genre.dat
void writeToko(tokoBuku toko[], FILE *ftokobuku, int c); //Menambah TokoBuku.dat

//Saya Alif Rizza mengerjakan evaluasi TP7 dalam mata kuliah Alpro 2 
//untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.