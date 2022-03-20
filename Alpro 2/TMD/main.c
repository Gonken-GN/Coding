#include "header.h"

int main (){
    char pita[100];
    int found = 0;
    int n, m, i;
    buku komik[50];
    buku penulis[50];
    buku genre[50];
    FILE *nkomik;
    FILE *pkomik;
    FILE *gkomik;
    printf("Selamat datang di DBMS Komik center (Fadhil)\n");
    while(found != 1){
        int n = 0, m = 0, o = 0;
        nkomik = fopen("komik.dat", "r");
        fscanf(nkomik, "%s %s %s %s", komik[n].id, komik[n].nama, komik[n].genre, komik[n].penulis);
        while(strcmp(komik[n].id, "####") != 0){
            n++;
            fscanf(nkomik, "%s %s %s %s", komik[n].id, komik[n].nama, komik[n].genre, komik[n].penulis);
        }
        fclose(nkomik);
        gkomik = fopen("genre.dat", "r");
        fscanf(gkomik, "%s %s", genre[m].id, genre[m].genre);
        while(strcmp(genre[m].id, "####") != 0){
            m++;
            fscanf(gkomik, "%s %s", genre[m].id, genre[m].genre);
        }
        fclose(gkomik);
        pkomik = fopen("penulis.dat", "r");
        fscanf(pkomik, "%s %s", penulis[o].id, penulis[o].penulis);
        while(strcmp(penulis[o].id, "####") != 0){
            o++;
            fscanf(pkomik, "%s %s", penulis[o].id, penulis[o].penulis);
        }
        fclose(pkomik);
        printf("DBMS Komik > ");
        scanf(" %200[^\n]s", pita);
        STARTKATA(pita);
        while(EOPKATA(pita)==0){
            if(strcmp(GETCKATA(), "jangan") == 0){
                INCKATA(pita);
                if(strcmp(GETCKATA(), "lupa") == 0){
                    INCKATA(pita);
                    if(strcmp(GETCKATA(), "bahagia") == 0){
                        INCKATA(pita);
                        if(strcmp(GETCKATA(), "hari") == 0){
                            INCKATA(pita);
                            if(strcmp(GETCKATA(), "ini") == 0){
                                INCKATA(pita);
                                found = 1;
                            }
                        }
                    }
                }
            }else if(strcmp(GETCKATA(), "UBAH") == 0){
                int berhenti = 0;
                INCKATA(pita);
                if(strcmp(GETCKATA(), "genre") == 0){
                    INCKATA(pita);
                        for(i=0;i<m;i++){
                            if(strcmp(genre[i].id, GETCKATA()) == 0){
                                berhenti = 1;
                                INCKATA(pita);
                                strcpy(genre[i].genre, GETCKATA());
                                flushgkomik(gkomik, genre);
                                printf("Update berhasil\n");
                            }
                        }if(berhenti == 0){
                            printf("Update gagal, data tidak diitemukan\n");
                        }
                }else if(strcmp(GETCKATA(), "penulis") == 0){
                    INCKATA(pita);
                    for(i=0;i<o;i++){
                        if(strcmp(penulis[i].id, GETCKATA()) == 0){
                            berhenti = 1;
                            INCKATA(pita);
                            strcpy(penulis[i].penulis, GETCKATA());
                            flushpkomik(pkomik, penulis);
                            printf("Update berhasil\n");
                        }
                    }if(berhenti == 0){
                        printf("Update gagal, data tidak diitemukan\n");
                    }
                }else if(strcmp(GETCKATA(), "komik") == 0){
                    INCKATA(pita);
                    for(i=0;i<n;i++){
                        if(strcmp(komik[i].id, GETCKATA()) == 0){
                            berhenti = 1;
                            INCKATA(pita);
                            strcpy(komik[i].nama, GETCKATA());
                            INCKATA(pita);
                            strcpy(komik[i].genre, GETCKATA());
                            INCKATA(pita);
                            strcpy(komik[i].penulis, GETCKATA());
                            flushnkomik(nkomik, komik);
                            printf("Update berhasil\n");
                        }
                    }if(berhenti == 0){
                        printf("Update gagal, data tidak diitemukan\n");
                    }
                }
            }else if(strcmp(GETCKATA(), "ENTRI") == 0){
                INCKATA(pita);
                int berhenti = 0;
                if(strcmp(GETCKATA(), "genre") == 0){
                    INCKATA(pita);
                    for(i=0;i<m;i++){
                        if(strcmp(GETCKATA(), genre[i].id) == 0){
                            berhenti = 1;
                        }
                    }
                    if(berhenti == 0){
                        insertgkomik(genre, pita, m);
                        flushgkomik(gkomik, genre);
                        printf("Insert berhasil\n");
                    }else{
                        printf("Insert gagal, data sudah ada\n");
                    }
                }else if(strcmp(GETCKATA(), "penulis") == 0){
                    INCKATA(pita);
                    int berhenti = 0;
                    for(i=0;i<m;i++){
                        if(strcmp(GETCKATA(), penulis[i].id) == 0){
                            berhenti = 1;
                        }
                    }
                    if(berhenti == 0){
	                    insertpkomik(penulis, pita, o);
	                    flushpkomik(pkomik, penulis);
	                    printf("Insert berhasil\n");
                    }else if(berhenti == 1){
                        printf("Insert gagal, data sudah ada\n");
                    }
                }else if(strcmp(GETCKATA(), "komik") == 0){
                    INCKATA(pita);
                    int berhenti = 0;
                    for(i=0;i<n;i++){
                        if(strcmp(GETCKATA(), komik[i].id) == 0){
                            berhenti = 1;
                        }
                    }
                    if(berhenti == 0){
                    insertnkomik(komik, pita, n);
                    flushnkomik(nkomik, komik);
                    printf("Insert berhasil\n");
                    }else{
                        printf("Insert gagal, data sudah ada\n");
                    }
                }
            }else if(strcmp(GETCKATA(), "HAPUS") == 0){
                int berhenti = 0;
            	INCKATA(pita);
            	if(strcmp(GETCKATA(), "genre") == 0){
            		INCKATA(pita);
            		for(i=0;i<m;i++){
            			if(strcmp(GETCKATA(), genre[i].id) == 0){
                            berhenti = 1;
            				deletegkomik(genre, m, i);
            				flushgkomik(gkomik, genre);
                            printf("Delete Berhasil\n");
            			}
            		}if(berhenti == 0){
                        printf("Data tidak ditemukan\n");
                    }
            	}else if(strcmp(GETCKATA(), "penulis") == 0){
                    INCKATA(pita);
                    for(i=0;i<o;i++){
                        if(strcmp(GETCKATA(), penulis[i].id) == 0){
                            berhenti = 1;
                            deletepkomik(penulis, o, i);
                            flushpkomik(pkomik, penulis);
                            printf("Delete Berhasil\n");
                        }
                    }if(berhenti == 0){
                       printf("Data tidak ditemukan\n"); 
                    }
                }else if(strcmp(GETCKATA(), "komik") == 0){
                    INCKATA(pita);
                    for(i=0;i<n;i++){
                        if(strcmp(GETCKATA(), komik[i].id) == 0){
                            berhenti = 1;
                            deletenkomik(komik, n, i);
                            flushnkomik(nkomik, komik);
                            printf("Delete Berhasil\n");
                        }
                    }if(berhenti == 0){
                        printf("Data tidak ditemukan\n");
                    }
                }
            }else if(strcmp(GETCKATA(), "TAMPIL") == 0){
                INCKATA(pita);
                if(strcmp(GETCKATA(), "komik") == 0){
                    tampilnkomik(komik);
                }else if(strcmp(GETCKATA(), "genre") == 0){
                    tampilgkomik(genre);
                }else if(strcmp(GETCKATA(), "penulis") == 0){
                    tampilpkomik(penulis);
                }else{
                    printf("Tabel tidak diteemukan");
                }
            }else{
                printf("Input Failed, Please try again with new input :)\n");
                while(EOPKATA(pita) == 0){
                    INCKATA(pita);
                }
            }
            RESETKATA();
        }
    }
    printf("\nTerima kasih telah menggunakan DBMS komik center :)\n");
    return 0;
}

/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/