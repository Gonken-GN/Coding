#include "axel.h"

void conf(char swap_food[], list *L1, list *L2){

        /*
            variabel untuk pengecekan agar searching berhenti
            ketika menemukan data yang dituju
        */
        int cek1 = 0;

        /*
            membuat variabel untuk menampung data makanan
        */
        char nama_makanan_tampung[100];
	    int harga_makanan_tampung;

        /*
            variabel pointer agar next dan juga prev
            tidak hilang dan tetap tersimpan
        */
		elemen* listsatu = (*L1).first;
		elemen* prev_listsatu = NULL;
		elemen* listdua = (*L2).first;
		elemen* prev_listdua = NULL;


        /*
            melakukan pengecekan pada list
            restoran yang pertama
        */
		while(listsatu != NULL && cek1 == 0){

			if(strcmp(listsatu->box.nama_masakan, swap_food) == 0){
                /*
                    jika data ditemukan maka, data list
                    ditampung pada variabel baru lalu dilakukan 
                    addlast dengan tujuan list ke 2.
                    dan melakukan delete list pada list 1
                */
				strcpy(nama_makanan_tampung, listsatu->box.nama_masakan);
				harga_makanan_tampung = listsatu->box.harga_masakan;
				addlast(nama_makanan_tampung, harga_makanan_tampung, L2);
				if(prev_listsatu == NULL){ // jika data merupakan data pertama
					delfirst(L1);
				}else{
					delafter(prev_listsatu, L1); 
				}
				cek1++;// cek bertambah agar searcing selesai
			}
            // iterator
			prev_listsatu = listsatu;
			listsatu = listsatu->next;
		}

        /*
            melakukan pengecekan pada list
            restoran yang kedua
        */
		while(listdua != NULL && cek1 == 0){
			if(strcmp(listdua->box.nama_masakan, swap_food) == 0){
                /*
                    jika data ditemukan maka, data list
                    ditampung pada variabel baru lalu dilakukan 
                    addlast dengan tujuan list ke 1.
                    dan melakukan delete list pada list 2
                */
				strcpy(nama_makanan_tampung, listdua->box.nama_masakan);
				harga_makanan_tampung = listdua->box.harga_masakan;
				addlast(nama_makanan_tampung, harga_makanan_tampung, L1);
				if(prev_listdua == NULL){ // jika data merupakan data pertama
					delfirst(L2);
				}else{
					delafter(prev_listdua, L2);
				}
				cek1++; // cek bertambah agar searcing selesai
			}

            // iterator
			prev_listdua = listdua;
			listdua = listdua->next;
		}
}   

void createlist (list *L){
    (*L).first = NULL; // L first dideklarasikan sebagai list kosong
}

int countelemen(list L){
    int hasil = 0;
    if(L.first != NULL){
        // artinya list tidak  kosong
        elemen* tunjuk;
        // inisialisasi
        tunjuk = L.first;

        while(tunjuk != NULL){
            //proses
            hasil = hasil + 1;

            //iterasi
            tunjuk = tunjuk -> next;
        }

    }
    return hasil;
}

void addfirst(char nama_masakan[], int harga_masakan, list *L){
    elemen* baru;
    baru = (elemen*) malloc (sizeof (elemen));
    // memasukkan data ke variabel yang sudah disediakan
    strcpy(baru -> box.nama_masakan, nama_masakan);
    baru->box.harga_masakan = harga_masakan;
    /*
    jika menemukan list kosong maka list akan
    langsung ditambahkan pada data awal
    */
    if((*L).first == NULL){
        baru -> next = NULL;
    }

    /*
    jika menemukan list tidak kosong
    maka list akan ditambah pada data awal
    */

    else{
        baru -> next = (*L).first;
    }
    (*L).first = baru;
    baru = NULL;
}
void addafter(elemen* prev, char nama_masakan[], int harga_masakan){

    elemen* baru;
    baru = (elemen*) malloc (sizeof (elemen));
     // memasukkan data ke variabel yang sudah disediakan
    strcpy(baru -> box.nama_masakan, nama_masakan);
    baru->box.harga_masakan = harga_masakan;

    // langsung saja tidak usah pakai if else
    baru -> next = prev -> next;

    prev -> next = baru;
    baru = NULL;
}


void addlast(char nama_masakan[], int harga_masakan, list *L){
    if((*L).first == NULL){
        // jika data kosong maka, list akan dimasukkan 
        // di data awal 
        addfirst(nama_masakan, harga_masakan, L);
    }
    // jika list memiliki data
    // maka data akan disimpan di bagian paling akhir
    else{
        elemen* prev = (*L).first;
        while(prev -> next != NULL){
            prev = prev -> next;
        }
        addafter(prev, nama_masakan, harga_masakan);
    }
}

// delete list bagian awal
void delfirst(list *L){
    if((*L).first != NULL){
        elemen* hapus = (*L).first;
        if(countelemen(*L) == 1){
            (*L).first = NULL;
        }
        else{
            (*L).first = (*L).first -> next;
            hapus -> next = NULL;
        }
        free(hapus);
    }
}

// delete list seletah list lainnnya
void delafter(elemen* prev, list *L){
    elemen* hapus = prev -> next;
    if(hapus != NULL){
        if(hapus -> next == NULL){
            prev -> next = NULL;
        }
        else{
            prev -> next = hapus -> next;
            hapus -> next = NULL;
        }
        free(hapus);
    }
}

// delete list data di bagian paling akhir
void dellast(list *L){
    if((*L).first != NULL){

        if(countelemen(*L) == 1){
            delfirst(L);
        }
        else{
            elemen* last = (*L).first;
            elemen* prev;

            while(last -> next != NULL){
                prev = last;
                last = last -> next;
            }
            delafter(prev, L);
        }
    }
}

// print seluruh list 
void printelemen(list L){
    if(L.first != NULL){
        
        elemen* tunjuk = L.first;
        int i = 1;
        while(tunjuk != NULL){
            /*
                print list yang sudah dilakukan perombakana
                atau pun tidak ada perubahan. list akan berhenti
                ketika list berada pada ujung yang ditandai dengan
                NULL
            */
            printf("%s %d\n", tunjuk -> box.nama_masakan, tunjuk -> box.harga_masakan);
            tunjuk = tunjuk -> next;
            i=i+1;
        }
    }
    else{
        printf("list kosong\n"); // jika list kosong
    }
}

// delete seluruh list
void delall(list *L){
    if(countelemen(*L) != 0){
        int i;
        for(i=countelemen(*L); i>=1; i--){
            dellast(L);
        }
    }
}

