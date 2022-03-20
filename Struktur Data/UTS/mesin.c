#include "header.h"
void createlist(list *L){
    (*L).first = NULL;
}
int countelementB(list L){
    int hasil = 0;
    if(L.first != NULL){
        eBaris *bantu;
        bantu = L.first;
        while(bantu != NULL){
            hasil++;
            bantu = bantu->next;
        }
    }
    return hasil;
}
int countelementK(eBaris L){
    int hasil = 0;
    if(L.col != NULL){
        eKolom *bantu;
        bantu = L.col;
        while(bantu != NULL){
            hasil++;
            bantu = bantu->next_kol;
        }
    }
}
void addfirstB(char nama[], list *L){
    eBaris* baru;
    baru = (eBaris *) malloc (sizeof (eBaris));
    strcpy(baru->kontainer.nama, nama);
    baru->col = NULL;
    if((*L).first == NULL){
        baru->next = NULL;
    }else{
        baru->next = (*L).first;
    }
    (*L).first = baru;
    baru = NULL;
}
void addfirstK(char nama[], char harga[], eBaris *L){
    eKolom* baru;
    baru = (eKolom *) malloc (sizeof (eKolom));
    strcpy(baru->kontainer_kol.nama, nama);
    strcpy(baru->kontainer_kol.harga, harga);
    if((*L).col == NULL){
        baru->next_kol = NULL;
    }else{
        baru->next_kol = (*L).col;
    }
    (*L).col = baru;
    baru = NULL;
}
void addafterB(eBaris* prev, char nama[]){
    eBaris* baru;
    baru = (eBaris *) malloc (sizeof(eBaris));
    strcpy(baru->kontainer.nama, nama);
    baru->col = NULL;
    if(prev->next == NULL){
        baru->next = NULL;
    }else{
        baru->next = prev->next;
    }
    prev->next =baru;
    baru = NULL;
}
void addafterK(eKolom* prev,char nama[], char harga[]){
    eKolom* baru;
    baru = (eKolom *) malloc (sizeof(eKolom));
    strcpy(baru->kontainer_kol.nama, nama);
    strcpy(baru->kontainer_kol.harga, harga);
    if(prev->next_kol == NULL){
        baru->next_kol = NULL;
    }else{
        baru->next_kol = prev->next_kol;
    }
    prev->next_kol = baru;
    baru = NULL;
}
void addlastB( char nama[], list *L){
    if((*L).first == NULL){
        addfirstB(nama, L);
    }else{
        eBaris *last = (*L).first;
        while(last->next != NULL){
            last = last->next;
        }
        addafterB(last, nama);
    }
}
void addlastK(char nama[], char harga[], eBaris *L){
    if((*L).col ==NULL){
        addfirstK(nama, harga, L);
    }else{
        eKolom *last = (*L).col;
        while(last->next_kol != NULL){
            last = last->next_kol;
        }
        addafterK(last, nama, harga);
    }
}
void delfirstK(eBaris *L){
    if((*L).col != NULL){
        eKolom* hapus = (*L).col;
        if(countelementK(*L) == 1){
            (*L).col = NULL;
        }else{
            (*L).col = (*L).col->next_kol;
            hapus->next_kol = NULL;
        }
        free(hapus);
    }
}
void delafterK(eKolom* prev){
    eKolom* hapus = prev->next_kol;
    if(hapus != NULL){
        if(hapus->next_kol == NULL){
            prev->next_kol = NULL;
        }else{
            prev->next_kol = hapus->next_kol;
            hapus->next_kol = NULL;
        }
    }
    free(hapus);
}
void dellastK(eBaris *L){
    if((*L).col != NULL){
        if(countelementK(*L) == 1){
            delfirstK(L);
        }else{
            eKolom *last = (*L).col;
            eKolom *before_last;
            while(last->next_kol != NULL){
                before_last = last;
                last = last->next_kol;
            }
            delafterK(before_last);
        }
    }
}
void delallK(eBaris *L){
    if(countelementK(*L) != 0){
        int i;
        for(i=countelementK(*L);i>=1;i--){
            dellastK(L);
        }
    }
}
void delfirstB(list *L){
    if((*L).first != NULL){
        eBaris *hapus = (*L).first;
        if(hapus->col != NULL){
            delallK(hapus);
        }
        if(countelementB(*L) == 1){
            (*L).first = NULL;
        }else{
            (*L).first =(*L).first->next;
        }
        hapus->next = NULL;
        free(hapus);
    }
}
void delafterB(eBaris* prev){
    if(prev != NULL){
        eBaris *hapus = prev->next;
        if(hapus != NULL){
            if(hapus->col != NULL){
                delallK(hapus);
            }
            if(hapus->next == NULL){
                prev->next = NULL;
            }else{
                prev->next = hapus->next;
            }
            hapus->next = NULL;
            free(hapus);
        }
    }
}
void dellastB(list *L){
    if((*L).first != NULL){
        if(countelementB(*L) == 1){
            delfirstB(L);
        }else{
            eBaris *last = (*L).first;
            eBaris *before_last;
            while(last->next != NULL){
                before_last = last;
                last = last->next;
            }
            delafterB(before_last);
        }
    }
}
void delallB(list *L){
    if(countelementB(*L) != 0){
        for(int i = countelementB(*L);i>=1;i--){
            			//proses penghapusan elemen list
            dellastB(L);
        }
    }
}
eBaris* getLatestBaris(list L, char nama[]){
	/*inisialisasi dan cek jika listnya tidak kosong, nilai tunjuk jadi elemen baris pertama*/
	eBaris* tunjuk = NULL;
	if (L.first != NULL)
	{
		tunjuk = L.first;
		/*perulangan selama bukan null dan bukan nama yang dicari*/
		while((tunjuk != NULL) && (strcmp(tunjuk->kontainer.nama, nama) != 0)) {
		    tunjuk = tunjuk->next;
		}
	}

	return tunjuk;
}
void printelement(list L, int banyak){
    if(L.first != NULL){
        eBaris* bantu = L.first;
        int i = 0;
        while(bantu != NULL){
            printf("%s:\n", bantu->kontainer.nama);
            eKolom* eCol = bantu->col;
            while(eCol != NULL){
                printf("- %s %s\n", eCol->kontainer_kol.nama, eCol->kontainer_kol.harga);
                eCol = eCol->next_kol;
            }
            if(i < banyak-1){
                printf("\n");
            }
            i++;
            bantu = bantu->next;
        }
   }else{
       printf("List Kosong\n");
   }
}
void pindah(list *L, char input1[], char input2[], char input3[]){
    int cek1 = 0, cek2 = 0, cek3 = 0;//variabel untuk memberhentikan while
    //jika baris tidak kosong
    if((*L).first != NULL){
        eBaris* bantu = (*L).first;
        //proses pencarian nama restoran yang akan di pindahkan dan proses looping berhenti jika ditemukannya data yang diinginkan
        while ((bantu != NULL) && (cek1 != 1)){
            if((strcmp(input1, bantu->kontainer.nama) == 0)){
                eKolom* kolom = bantu->col;
                eKolom* sebelum = NULL;
                //proses pencarian menu pada restoran pertama jika proses pencarian pertama berhasil dan proses looping berhenti jika ditemukannya data yang diinginkan
                while((kolom != NULL) && (cek2 != 1)){
                    if(strcmp(input2, kolom->kontainer_kol.nama) == 0){
                        eBaris* bantu2 = (*L).first;
                        while((bantu2 != NULL) && (cek3 != 1)){
                            //proses pencarian restoran ketiga untuk memindahkan menu dari restoran pertama
                            if(strcmp(bantu2->kontainer.nama, input3) == 0){
                                addlastK(kolom->kontainer_kol.nama, kolom->kontainer_kol.harga, bantu2);
                                //jika yang dihapus merupakan kolom pertama
                                if(sebelum == NULL){
                                    delfirstK(bantu);
                                }else{
                                    sebelum->next_kol = kolom->next_kol;
                                    kolom->next_kol = NULL;
                                }
                                //penanda ditemukannya data yang dicari
                                cek1 = 1;
                                cek2 = 1;
                                cek3 = 1;
                            }
                            bantu2 = bantu2->next;
                        }
                    }
                    sebelum = kolom;//variabel prev
                    kolom = kolom->next_kol;
                }
            }
            bantu = bantu->next;
        }
    }
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Ujian Tengah Semester (UTS)dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/