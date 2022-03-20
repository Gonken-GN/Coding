#include "header.h"

int main () {

    char pita[301];
    char temp[50];
    char end[50];
    int i;

    var_buku buku[100];
    var_genre genre[100];

    FILE *arsip_buku;
    FILE *arsip_genre;

    printf("Welcome to the alif's DBMS Sederhana Bahagia\n");
    printf("\n");

    while(strcmp(pita, "exit;") != 0) {
        int n = 0;
        int m = 0;

        arsip_buku = fopen("buku.dat", "r");
        fscanf(arsip_buku, "%s %s %s", buku[n].kode_buku, buku[n].nama_buku, buku[n].kode_genre);
        while(strcmp(buku[n].kode_buku, "###") != 0) {
            n++;
            fscanf(arsip_buku, "%s %s %s", buku[n].kode_buku, buku[n].nama_buku, buku[n].kode_genre);
        }
        fclose(arsip_buku);

        arsip_genre = fopen("genre.dat", "r");
        fscanf(arsip_genre, "%s %s", genre[m].kode_genre, genre[m].nama_genre);
        while(strcmp(genre[m].kode_genre, "###") != 0) {
            m++;
            fscanf(arsip_genre, "%s %s", genre[m].kode_genre, genre[m].nama_genre);
        }
        fclose(arsip_genre);

        
        printf("alif's dbms >> ");
        scanf(" %300[^\n]s", &pita);

        STARTKATA(pita);
        strcpy(temp, GETCKATA());
        while(EOPKATA(pita) == 0) {
            if(strcmp(GETCKATA(), "INSERT") == 0) {
                INCKATA(pita);
                strcpy(temp, GETCKATA());
                if(strcmp(temp, "buku") == 0) {
                    INCKATA(pita);
                    insert_kode_buku(buku, n, pita);
                    insert_nama_buku(buku, n, pita);
                    insert_kode_genre(buku, n, pita);
                    flush_data_buku(arsip_buku, buku);
                    printf("sudah masuk broo\n");
                    printf("\n");
                } else if(strcmp(temp, "genre") == 0) {
                    INCKATA(pita);
                    insert_kode_genre2(genre, m, pita);
                    insert_nama_genre(genre, m, pita);
                    flush_data_genre(arsip_genre, genre);
                    printf("sudah masuk broo\n");
                    printf("\n");
                } else {
                    printf("gagal broo\n");
                    while(EOPKATA(pita) == 0) {
                        INCKATA(pita);
                    }
                }
            } else if(strcmp(GETCKATA(), "UPDATE") == 0) {
                INCKATA(pita);
                if(strcmp(GETCKATA(), "buku") == 0) {
                    INCKATA(pita);
                    if(strcmp(GETCKATA(), "WHERE") == 0) {
                        INCKATA(pita);
                        if(strcmp(GETCKATA(), "kode_buku") == 0) {
                            INCKATA(pita);
                            for(i=0;i<n;i++) {
                                if(strcmp(GETCKATA(), buku[i].kode_buku) == 0) {
                                    INCKATA(pita);
                                    if(strcmp(GETCKATA(), "SET") == 0) {
                                        INCKATA(pita);
                                        update_buku(buku, i, pita);
                                        flush_data_buku(arsip_buku, buku);
                                        printf("sudah terupdate broo\n");
                                        printf("\n");
                                    } else {
                                        printf("gagal broo\n");
                                        while(EOPKATA(pita) == 0) {
                                            INCKATA(pita);
                                        }
                                    }   
                                }
                            }
                        }
                    }
                } else if(strcmp(GETCKATA(), "genre") == 0) {
                    INCKATA(pita);
                    if(strcmp(GETCKATA(), "WHERE") == 0) {
                        INCKATA(pita);
                        if(strcmp(GETCKATA(), "kode_genre") == 0) {
                            INCKATA(pita);
                            for(i=0;i<m;i++) {
                                if(strcmp(GETCKATA(), genre[i].kode_genre) == 0) {
                                    INCKATA(pita);
                                    if(strcmp(GETCKATA(), "SET") == 0) {
                                        INCKATA(pita);
                                        update_genre(genre, i, pita);
                                        flush_data_genre(arsip_genre, genre);
                                        printf("sudah terupdate broo\n");
                                        printf("\n");
                                    } 
                                }
                            }
                        } 
                    }
                }
            } else if(strcmp(GETCKATA(), "DELETE") == 0) {
                INCKATA(pita);
                if(strcmp(GETCKATA(), "IN") == 0) {
                    INCKATA(pita);
                    if(strcmp(GETCKATA(), "buku") == 0) {
                        INCKATA(pita);
                        if(strcmp(GETCKATA(), "WHERE") == 0) {
                            INCKATA(pita);
                            if(strcmp(GETCKATA(), "kode_buku") == 0) {
                                INCKATA(pita);
                                for(i=0;i<n;i++) {
                                    if(strcmp(GETCKATA(), buku[i].kode_buku) == 0) {
                                        delete_data_buku(buku, n, i, pita);
                                        flush_data_buku(arsip_buku, buku);
                                        printf("sudah terdelete broo\n");
                                        printf("\n");
                                    }
                                }
                            }
                        }
                    } else if(strcmp(GETCKATA(), "genre") == 0) {
                        INCKATA(pita);
                        if(strcmp(GETCKATA(), "WHERE") == 0) {
                            INCKATA(pita);
                            if(strcmp(GETCKATA(), "kode_genre") == 0) {
                                INCKATA(pita);
                                for(i=0;i<m;i++) {
                                    if(strcmp(GETCKATA(), genre[i].kode_genre) == 0) {
                                        delete_data_genre(genre, m, i, pita);
                                        flush_data_genre(arsip_genre, genre);
                                        printf("sudah terdelete broo\n");
                                        printf("\n");
                                    }
                                }
                            }
                        }
                    }
                }
            } else if(strcmp(GETCKATA(), "SELECT") == 0) {
                INCKATA(pita);
                if(strcmp(GETCKATA(), "buku") == 0) {
                    INCKATA(pita);
                    if(strcmp(GETCKATA(), "genre") == 0) {
                        select_buku_genre(buku, genre);
                    } else {
                        select_buku(buku);
                    }
                } else if(strcmp(GETCKATA(), "genre") == 0) {
                    select_genre(genre);
                }
            }
            RESETKATA();
        }
    }

    return 0;
}