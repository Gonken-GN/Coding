#include <stdio.h>
#include <string.h>

typedef struct{
    char kode_buku[100];
    char nama_buku[100];
    char kode_genre[100];
}var_buku;

typedef struct{
    char kode_genre[100];
    char nama_genre[100];
}var_genre;

void STARTKATA(char pita[]);
void RESETKATA();
void INCKATA(char pita[]);
char* GETCKATA();
int EOPKATA(char pita[]);
void insert_nama_buku(var_buku buku[], int n, char pita[]);
void insert_kode_buku(var_buku buku[], int n, char pita[]);
void insert_kode_genre(var_buku buku[], int n, char pita[]);
void flush_data_buku(FILE *arsip_buku, var_buku buku[]);
void update_buku(var_buku buku[], int i, char pita[]);
void insert_kode_genre2(var_genre genre[], int m, char pita[]);
void insert_nama_genre(var_genre genre[], int m, char pita[]);
void update_genre(var_genre genre[], int i, char pita[]);
void flush_data_genre(FILE *arsip_genre, var_genre genre[]);
void delete_data_buku(var_buku buku[], int n, int i, char pita[]);
void delete_data_genre(var_genre genre[], int m, int i, char pita[]);
void select_buku(var_buku buku[]);
void select_genre(var_genre genre[]);
void select_buku_genre(var_buku buku[], var_genre genre[]);

// Saya Alif Rizza Z mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
// Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak
// melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
