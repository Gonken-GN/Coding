#include "header.h"

void STARTKATA(char pita[]) {
    indeks = 0;     //inisialisasi
    panjangkata = 0;//inisialisasi
    //proses untuk menambah indeks hingga bertemu dengan huruf
    while(pita[indeks] == ' ') {
        indeks++;
    }
    //proses untuk menjadikan huruf pada kata menjadi string
    while((pita[indeks] != ' ') && (pita[indeks] != ';')) {
        ckata[panjangkata] = pita[indeks];//memasukkan huruf pada kata pada temporary
        indeks++;
        panjangkata++;
    }
    ckata[panjangkata] = '\0';
}//prosedur untuk memulai mesin kata

void INCKATA(char pita[]) {
    panjangkata = 0;//inisialisasi
    while(pita[indeks] == ' ') {
        indeks++;
    }
    while((pita[indeks] != ' ') && (pita[indeks] != ';')) {
        ckata[panjangkata] = pita[indeks];
        indeks++;
        panjangkata++;
    }
    ckata[panjangkata] = '\0';//agar dijadikan string
}//proses untuk melanjutkan mesin kata

char* GETCKATA() {
    return ckata;
}//prosedur untuk mengambil string pada pita

int GETPANJANGKATA() {
    return panjangkata;
}//prosedur untuk mengambil panjang string pada pita

int EOPKATA(char pita[]) {
    if(pita[indeks] == ';') {//jika huruf pada kata telah menumakan ';'
        return 1;//maka mesin kata berhenti
    } else {
        return 0;
    }
}//prosedur untuk memberhentika mesin kata jika bertemu eop
void RESETKATA() { //mengulang kata
    panjangkata = 0;
    ckata[panjangkata] = '\0';
}
void flushnkomik(FILE *nkomik, buku komik[]){
    int i;
    nkomik = fopen("komik.dat", "w");
    i=0;
    while(strcmp(komik[i].id, "####") != 0){
        fprintf(nkomik, "%s %s %s %s\n", komik[i].id, komik[i].nama, komik[i].genre, komik[i].penulis);
        i++;
    }
    fprintf(nkomik, "#### #### #### ####\n");
    fclose(nkomik);
}
void flushgkomik(FILE *gkomik, buku genre[]){
    int i;
    gkomik = fopen("genre.dat", "w");
    i=0;
    while(strcmp(genre[i].id, "####") != 0){
        fprintf(gkomik, "%s %s\n", genre[i].id, genre[i].genre);
        i++;
    }
    fprintf(gkomik, "#### ####\n");
    fclose(gkomik);
}
void flushpkomik(FILE *pkomik, buku penulis[]){
    int i=0;
    pkomik = fopen("penulis.dat", "w");
    while(strcmp(penulis[i].id, "####") != 0){
        fprintf(pkomik, "%s %s\n", penulis[i].id, penulis[i].penulis);
        i++;
    }
    fprintf(pkomik, "#### ####\n");
    fclose(pkomik);
}
void insertgkomik(buku genre[], char pita[], int banyak){
    int i;
    if(strcmp(GETCKATA(), genre[0].id) < 0){
        for(i=banyak; i>=0; i--){
            strcpy(genre[i+1].id, genre[i].id);
            strcpy(genre[i+1].genre, genre[i].genre);
        }
        banyak++;
        strcpy(genre[0].id, GETCKATA());
        INCKATA(pita);
        strcpy(genre[0].genre, GETCKATA());
    }else if(strcmp(GETCKATA(), genre[banyak-1].id) > 0){
        strcpy(genre[banyak].id, GETCKATA());
        INCKATA(pita);
        strcpy(genre[banyak].genre, GETCKATA());
        INCKATA(pita);
        banyak++;
        strcpy(genre[banyak].id, "####");
    }else{
        int stop = 0;
        i=0;
        while((i < banyak) && (stop == 0)){
            if(strcmp(genre[i].id, GETCKATA()) > 0){
                stop = 1;
            }else{
                i++;
            }
        }
        int j;
        for(j=banyak-1;j>=i;j--){
            strcpy(genre[j+1].id, genre[j].id);
            strcpy(genre[j+1].genre, genre[j].genre);
        }
        strcpy(genre[i].id, GETCKATA());
        INCKATA(pita);
        strcpy(genre[i].genre, GETCKATA());
        banyak++;
        strcpy(genre[banyak].id, "####");
    }
}
void insertpkomik(buku penulis[], char pita[], int banyak){
    int i;
    if(strcmp(GETCKATA(), penulis[0].id) < 0){
        for(i=banyak; i>=0; i--){
            strcpy(penulis[i+1].id, penulis[i].id);
            strcpy(penulis[i+1].penulis, penulis[i].penulis);
        }
        banyak++;
        strcpy(penulis[0].id, GETCKATA());
        INCKATA(pita);
        strcpy(penulis[0].penulis, GETCKATA());
    }else if(strcmp(GETCKATA(), penulis[banyak-1].id) > 0){
        strcpy(penulis[banyak].id, GETCKATA());
        INCKATA(pita);
        strcpy(penulis[banyak].penulis, GETCKATA());
        INCKATA(pita);
        banyak++;
        strcpy(penulis[banyak].id, "####");
    }else{
        int stop = 0;
        i=0;
        while((i < banyak) && (stop == 0)){
            if(strcmp(penulis[i].id, GETCKATA()) > 0){
                stop = 1;
            }else{
                i++;
            }
        }
        int j;
        for(j=banyak-1;j>=i;j--){
            strcpy(penulis[j+1].id, penulis[j].id);
            strcpy(penulis[j+1].penulis, penulis[j].penulis);
        }
        strcpy(penulis[i].id, GETCKATA());
        INCKATA(pita);
        strcpy(penulis[i].penulis, GETCKATA());
        banyak++;
        strcpy(penulis[banyak].id, "####");
    }
}
void insertnkomik(buku komik[], char pita[], int banyak){
    int i;
    if(strcmp(GETCKATA(), komik[0].id) < 0){
        for(i=banyak; i>=0; i--){
            strcpy(komik[i+1].id, komik[i].id);
            strcpy(komik[i+1].nama, komik[i].nama);
            strcpy(komik[i+1].genre, komik[i].genre);
            strcpy(komik[i+1].penulis, komik[i].penulis);
        }
        banyak++;
        strcpy(komik[0].id, GETCKATA());
        INCKATA(pita);
        strcpy(komik[0].nama, GETCKATA());
        INCKATA(pita);
        strcpy(komik[0].genre, GETCKATA());
        INCKATA(pita);
        strcpy(komik[0].penulis, GETCKATA());
    }else if(strcmp(GETCKATA(), komik[banyak-1].id) > 0){
        strcpy(komik[banyak].id, GETCKATA());
        INCKATA(pita);
        strcpy(komik[banyak].nama, GETCKATA());
        INCKATA(pita);
        strcpy(komik[banyak].genre, GETCKATA());
        INCKATA(pita);
        strcpy(komik[banyak].penulis, GETCKATA());
        banyak++;
        strcpy(komik[banyak].id, "####");
    }else{
        int stop = 0;
        i=0;
        while((i < banyak) && (stop == 0)){
            if(strcmp(komik[i].id, GETCKATA()) > 0){
                stop = 1;
            }else{
                i++;
            }
        }
        int j;
        for(j=banyak-1;j>=i;j--){
            strcpy(komik[j+1].id, komik[j].id);
            strcpy(komik[j+1].nama, komik[j].nama);
            strcpy(komik[j+1].genre, komik[j].genre);
            strcpy(komik[j+1].penulis, komik[j].penulis);
        }
        strcpy(komik[i].id, GETCKATA());
        INCKATA(pita);
        strcpy(komik[i].nama, GETCKATA());
        INCKATA(pita);
        strcpy(komik[i].genre, GETCKATA());
        INCKATA(pita);
        strcpy(komik[i].penulis, GETCKATA());
        banyak++;
        strcpy(komik[banyak].id, "####");
    }
}
void deletegkomik(buku genre[], int banyak, int i){
	int a;
	if(i<banyak-1){
		for(a=i;a<banyak;a++){
			strcpy(genre[a].id, genre[a+1].id);
			strcpy(genre[a].genre, genre[a+1].genre);
		}
		banyak = banyak-1;
	}else{
		strcpy(genre[i].id, genre[i+1].id);
		strcpy(genre[i].genre, genre[i+1].genre);
		banyak = banyak - 1;
	}
}
void deletepkomik(buku penulis[], int banyak, int i){
    int a;
    if(i < banyak-1){
        for(a=i;a<banyak;a++){
            strcpy(penulis[a].id, penulis[a+1].id);
            strcpy(penulis[a].penulis, penulis[a+1].penulis);
        }
        banyak--;
    }else{
        strcpy(penulis[i].id, penulis[i+1].id);
        strcpy(penulis[i].penulis, penulis[i+1].penulis);
        banyak--;
    }
}
void deletenkomik(buku komik[], int banyak, int i){
    int a;
    if(i < banyak-1){
        for(a=i;a<banyak;a++){
            strcpy(komik[a].id, komik[a+1].id);
            strcpy(komik[a].nama, komik[a+1].nama);
            strcpy(komik[a].genre, komik[a+1].genre);
            strcpy(komik[a].penulis, komik[a+1].penulis);
        }
        banyak--;
    }else{
        strcpy(komik[i].id, komik[i+1].id);
        strcpy(komik[i].nama, komik[i+1].nama);
        strcpy(komik[i].genre, komik[i+1].genre);
        strcpy(komik[i].penulis, komik[i+1].penulis);
        banyak--;
    }
}
void tampilnkomik(buku komik[]){
    int i = 0, j;
    printf("+--------------+--------------------------+--------------+--------------+\n");
    printf("| kode_komik   |        nama_komik        | kode_genre   | kode_penulis |\n");
    printf("+--------------+--------------------------+--------------+--------------+\n");
    while(strcmp(komik[i].id, "####") != 0){
        printf("|     %s     |", komik[i].id);
        printf(" %s", komik[i].nama);
        for(j=0;j<25-strlen(komik[i].nama);j++){
            printf(" ");
        }
        printf("|     %s     |", komik[i].genre);
        printf("     %s       ", komik[i].penulis);
        printf("|\n");
        i++;
    }
    printf("+--------------+--------------------------+--------------+--------------+\n");
}
void tampilgkomik(buku genre[]){
    int i = 0;
    int j;
    printf("+------------+--------------------------+\n");
    printf("| kode_genre |        nama_genre        |\n");
    printf("+------------+--------------------------+\n");
    while(strcmp(genre[i].id, "####") != 0) {
        printf("|     %s    |", genre[i].id);
        printf(" %s", genre[i].genre);
        for(j=0;j<25-strlen(genre[i].genre);j++) {
            printf(" ");
        }
        printf("|\n");
        i++;
    }
    printf("+------------+--------------------------+\n");
}
void tampilpkomik(buku penulis[]){
    int i = 0, j;
    printf("+---------------+----------------------------+\n");
    printf("|  kode_penulis |        nama_penulis        |\n");
    printf("+---------------+----------------------------+\n");
    while(strcmp(penulis[i].id, "####") != 0){
        printf("|      %s      |", penulis[i].id);
        printf(" %s", penulis[i].penulis);
        for(j=0;j<25-strlen(penulis[i].penulis);j++){
            printf(" ");
        }
        printf("  |\n");
        i++;
    }
     printf("+---------------+----------------------------+\n");
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/