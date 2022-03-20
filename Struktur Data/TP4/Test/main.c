#include "header.h"
	/* Saya Hanifah Al Humaira mengerjakan TP dalam 
	mata kuliah struktur data untuk keberkahanNya maka 
	saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. 
	Aamiin*/
int main()
{
    int i, waktu;
    char nama[50], jenis_member[50];
    queue Q;
    createEmpty(&Q);
    // input pertama untuk cek kondisi berhenti
	do{
		scanf("%s", nama);
		if(strcmp(nama, "stop")!=0){
			scanf("%s %d", jenis_member, &waktu);
			addP(nama, jenis_member, waktu, &Q);
		}
	}while(strcmp(nama, "stop")!=0);
	printQueue(Q);
    // keluarkan yang sudah konsultasi
	konsultasi(&Q);
    // print sisanya
    printQueue(Q);

    return 0;
}