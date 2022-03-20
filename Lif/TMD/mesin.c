#include "header.h"

int indeks;
int panjangkata;
char ckata[50];

void STARTKATA(char pita[]) {  //memulai kata
    indeks = 0;
    panjangkata = 0;
    while(pita[indeks] == ' ') {
        indeks++;
    }
    while((pita[indeks] != ' ') && (pita[indeks] != ';')) {
        ckata[panjangkata] = pita[indeks];
        indeks++;
        panjangkata++;
    }
    ckata[panjangkata] = '\0';
}

void RESETKATA() { //mengulang kata
    panjangkata = 0;
    ckata[panjangkata] = '\0';
}

void INCKATA(char pita[]) { //melanjutkan kata
    panjangkata = 0;
    while(pita[indeks] == ' ') {
        indeks++;
    }
    while((pita[indeks] != ' ') && (pita[indeks] != ';')) {
        ckata[panjangkata] = pita[indeks];
        indeks++;
        panjangkata++;
    }
    ckata[panjangkata] = '\0';
}

char* GETCKATA() { //return kata
    return ckata;
}

int EOPKATA(char pita[]) { //syarat berhenti
    if(pita[indeks] == ';') {
        return 1;
    } else {
        return 0;
    }
}

void insert_nama_buku(var_buku buku[], int n, char pita[]) { //memasukkan nama_buku ke array
    int i = n;
    strcpy(buku[i].nama_buku, GETCKATA());
    i++;
    strcpy(buku[i].nama_buku, "###");
    INCKATA(pita);
}


void insert_kode_buku(var_buku buku[], int n, char pita[]) { //memasukkan kode_buku ke array
    int i = n;
    strcpy(buku[i].kode_buku, GETCKATA());
    i++;
    strcpy(buku[i].kode_buku, "###");
    INCKATA(pita);
}

void insert_kode_genre(var_buku buku[], int n, char pita[]) { //memasukkan kode_genre ke array
    int i = n;
    strcpy(buku[i].kode_genre, GETCKATA());
    i++;
    strcpy(buku[i].kode_genre, GETCKATA());
    INCKATA(pita);
}

void update_buku(var_buku buku[], int i, char pita[]) { //mengubah nama buku dan kode genre yang ada di dalam array
    strcpy(buku[i].nama_buku, GETCKATA());
    INCKATA(pita);
    strcpy(buku[i].kode_genre, GETCKATA());
}

void flush_data_buku(FILE *arsip_buku, var_buku buku[]) { //memasukkan data buku yang telah di edit ke dalam buku.dat
    int i;
    arsip_buku = fopen("buku.dat", "w");
    i = 0;
    while(strcmp(buku[i].kode_buku, "###") != 0) {
        fprintf(arsip_buku, "%s %s %s\n", buku[i].kode_buku ,buku[i].nama_buku, buku[i].kode_genre);
        i++;
    } 
    fprintf(arsip_buku, "### ### ###\n");
    fclose(arsip_buku);
}

void insert_kode_genre2(var_genre genre[], int m, char pita[]) { //memasukkan kode genre ke array 
    int i = m;
    strcpy(genre[i].kode_genre, GETCKATA());
    i++;
    strcpy(genre[i].kode_genre, "###");
    INCKATA(pita);
}

void insert_nama_genre(var_genre genre[], int m, char pita[]) { //memasukkan nama genre ke array
    int i = m;
    strcpy(genre[i].nama_genre, GETCKATA());
    i++;
    strcpy(genre[i].nama_genre, "###");
    INCKATA(pita);
}

void update_genre(var_genre genre[], int i, char pita[]) { //mengubah nama genre yang ada di dalam array
    strcpy(genre[i].nama_genre, GETCKATA());
}

void flush_data_genre(FILE *arsip_genre, var_genre genre[]) { //memasukkan data genre yg telah diedit ke genre.dat
    int i;
    arsip_genre = fopen("genre.dat", "w");
    i = 0;
    while(strcmp(genre[i].kode_genre, "###") != 0) {
        fprintf(arsip_genre, "%s %s\n", genre[i].kode_genre, genre[i].nama_genre);
        i++;
    }
    fprintf(arsip_genre, "### ###\n");
    fclose(arsip_genre);
}

void delete_data_buku(var_buku buku[], int n, int i, char pita[]) { //menghapus data buku yg ada di array
    int a;
    if(i < n-1) {
        for(a=i;a<n;a++) {
            strcpy(buku[a].kode_buku, buku[a+1].kode_buku);
            strcpy(buku[a].nama_buku, buku[a+1].nama_buku);
            strcpy(buku[a].kode_genre, buku[a+1].kode_genre);
        }
        n = n - 1;
    } else {
        strcpy(buku[i].kode_buku, buku[i+1].kode_buku);
        strcpy(buku[i].nama_buku, buku[i+1].nama_buku);
        strcpy(buku[i].kode_genre, buku[i+1].kode_genre);
        n = n - 1;
    }
}

void delete_data_genre(var_genre genre[], int m, int i, char pita[]) { //menghapus data genre yang ada di array
    int a;
    if(i < m-1) {
        for(a=i;a<m;a++) {
            strcpy(genre[a].kode_genre, genre[a+1].kode_genre);
            strcpy(genre[a].nama_genre, genre[a+1].nama_genre);
        }
        m = m - 1;
    } else {
        strcpy(genre[i].kode_genre, genre[i+1].kode_genre);
        strcpy(genre[i].nama_genre, genre[i+1].nama_genre);
        m = m - 1;
    }
}

void select_buku(var_buku buku[]) { // menampilkan data buku
    int i = 0;
    int j;
    printf("Inilah data yang telah anda input: \n");
    printf("+-----------+----------------------------------+\n");
    printf("| kode_buku |             nama_buku            |\n");
    printf("+-----------+----------------------------------+\n");
    while(strcmp(buku[i].kode_buku, "###") != 0) {
        printf("|   %s", buku[i].kode_buku);
        printf("   |");
        printf(" %s", buku[i].nama_buku);
        for(j=0;j<33-strlen(buku[i].nama_buku);j++) {
            printf(" ");
        }
        printf("|\n");
        i++;
    }
    printf("+-----------+----------------------------------+\n");
}

void select_genre(var_genre genre[]) { //menampilkan data genre
    int i = 0;
    int j;
    printf("Inilah data yang telah anda input: \n");
    printf("+------------+--------------------------+\n");
    printf("| kode_genre |        nama_genre        |\n");
    printf("+------------+--------------------------+\n");
    while(strcmp(genre[i].kode_genre, "###") != 0) {
        printf("|     %s    |", genre[i].kode_genre);
        printf(" %s", genre[i].nama_genre);
        for(j=0;j<25-strlen(genre[i].nama_genre);j++) {
            printf(" ");
        }
        printf("|\n");
        i++;
    }
    printf("+------------+--------------------------+\n");
}

void select_buku_genre(var_buku buku[], var_genre genre[]) { //menampilkan data buku digabung dengan data genre
    int i = 0;
    int j;
    int a;
    printf("Inilah kedua data gabungan anda: \n");
    printf("+-----------+----------------------------------+------------+--------------------------+\n");
    printf("| kode_buku |             nama_buku            | kode_genre |        nama_genre        |\n");
    printf("+-----------+----------------------------------+------------+--------------------------+\n");
    while(strcmp(buku[i].kode_buku, "###") != 0) {
        a = 0;
        printf("|   %s   |", buku[i].kode_buku);
        printf(" %s", buku[i].nama_buku);
        for(j=0;j<33-strlen(buku[i].nama_buku);j++) {
            printf(" ");
        }
        printf("|     %s    |", buku[i].kode_genre);
        while(strcmp(buku[i].kode_genre, genre[a].kode_genre) != 0) {
            a++;
        }
        printf(" %s", genre[a].nama_genre);
        for(j=0;j<25-strlen(genre[a].nama_genre);j++) {
            printf(" ");
        }
        printf("|\n");
        i++;
    }
        printf("+-----------+----------------------------------+------------+--------------------------+\n");
}





