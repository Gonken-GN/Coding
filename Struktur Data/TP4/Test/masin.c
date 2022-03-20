#include "header.h"
	/* Saya Hanifah Al Humaira mengerjakan kuis2 dalam 
	mata kuliah struktur data untuk keberkahanNya maka 
	saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. 
	Aamiin*/

void createEmpty(queue *Q)
{
    (*Q).first = NULL;
    (*Q).last = NULL;
}

int isEmpty(queue Q)
{
    int hasil = 0;
    if (Q.first == NULL)
    {
        hasil = 1;
    }
    return hasil;
}

int countElement(queue Q)
{
    int hasil = 0;
    if (Q.first != NULL)
    {
        /* queue tidak kosong */
        elemen *bantu;
        /* inisialisasi */
        bantu = Q.first;

        while (bantu != NULL)
        {
            /* proses */
            hasil = hasil + 1;

            /* iterasi */
            bantu = bantu->next;
        }
    }

    return hasil;
}
void add(char nama[], char jenis_member[], int waktu, queue *Q){
    elemen* baru;
    baru = (elemen *) malloc (sizeof(elemen));
    strcpy(baru->kontainer.nama, nama);
    strcpy(baru->kontainer.jenis_member, jenis_member);
    baru->kontainer.waktu = waktu;
    baru->next = NULL;
    if((*Q).first == NULL){
        (*Q).first = baru;
    }else{
        (*Q).last->next = baru;
    }
    (*Q).last = baru;
    baru = NULL;
}

void del(queue *Q)
{
    if ((*Q).first != NULL)
    {
        //jika queue bukan queue kosong//
        elemen *hapus = (*Q).first;
        if (countElement(*Q) == 1)
        {
            (*Q).first = NULL;
            (*Q).last = NULL;
        }
        else
        {
            (*Q).first = (*Q).first->next;
            hapus->next = NULL;
        }
        free(hapus);
    }
}


void printQueue(queue Q)
{
    if (Q.first != NULL)
    {
        elemen *bantu = Q.first;
        while (bantu != NULL)
        {
            printf("%s %s\n", bantu->kontainer.nama, bantu->kontainer.jenis_member);
            /* iterasi */
            bantu = bantu->next;
        }
    }
    else
    {
        /* proses jika queue kosong */
        printf("Antrian kosong.\n");
    }
}

// add dengan prioritas
void addP(char nama[], char jenis_member[], int waktu, queue *Q){
    elemen* baru;
    baru = (elemen *) malloc (sizeof(elemen));

    strcpy(baru->kontainer.nama, nama);
    strcpy(baru->kontainer.jenis_member, jenis_member);
    baru->kontainer.waktu = waktu;
    baru->next = NULL;

    if((*Q).first == NULL){
        (*Q).first = baru;
        (*Q).last = baru;
    }else{
        if(strcmp(jenis_member, "platinum")==0){
            if(strcmp((*Q).first->kontainer.jenis_member, "platinum")!=0){
                baru->next=(*Q).first;
                (*Q).first = baru;
            }else if(strcmp((*Q).first->kontainer.jenis_member, "platinum")==0){
                elemen* bantu = (*Q).first;
                elemen* prev = NULL;
                while(strcmp(bantu->kontainer.jenis_member, "platinum")==0){
                    prev = bantu;
                    bantu = bantu->next;
                } 
                baru->next = bantu;
                prev->next = baru; 
            }
        }else if(strcmp(jenis_member, "gold")==0){
            if((strcmp((*Q).first->kontainer.jenis_member, "platinum")!=0)&&
			(strcmp((*Q).first->kontainer.jenis_member, "gold")!=0)){
                baru->next=(*Q).first;
                (*Q).first = baru;
            }
            else{
                elemen* bantu = (*Q).first;
                elemen* prev = NULL;
                while((strcmp(bantu->kontainer.jenis_member, "platinum")==0)||
				(strcmp(bantu->kontainer.jenis_member, "gold")==0)){
                    prev = bantu;
                    bantu = bantu->next;
                }
                baru->next = bantu;
                prev->next = baru;
            }
        }else if(strcmp(jenis_member, "silver")==0){
            if((strcmp((*Q).first->kontainer.jenis_member, "platinum")!=0)&&
			(strcmp((*Q).first->kontainer.jenis_member, "gold")!=0)&&(strcmp((*Q).first->kontainer.jenis_member, "silver")!=0)){
                baru->next=(*Q).first;
                (*Q).first = baru;
            }
            else{
                elemen* bantu = (*Q).first;
                elemen* prev = NULL;
                while((strcmp(bantu->kontainer.jenis_member, "platinum")==0)||
				(strcmp(bantu->kontainer.jenis_member, "gold")==0)||(strcmp(bantu->kontainer.jenis_member, "silver")==0)){
                    prev = bantu;
                    bantu = bantu->next;
                }
                baru->next = bantu;
                prev->next = baru;
            }
        }else{
            add(nama, jenis_member, waktu, Q);
        }
    }
    baru = NULL;
}

// prosedur menghapus klien yang sudah konsultasi
void konsultasi(queue *Q)
{
    // waktu = 6 jam diganti ke waktu
    int waktu = 60 * 6;
    // hapus selama waktu cukup untuk melayani pasien
    elemen *bantu = Q->first;
    while (bantu != NULL && waktu >= bantu->kontainer.waktu)
    {
        waktu = waktu - bantu->kontainer.waktu;
        del(Q);
        bantu = Q->first;
    }
}