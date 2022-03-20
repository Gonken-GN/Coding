#include "driski.h"

/* 	Saya D'Riski Maulana mengerjakan evaluasi - Test Mesin Queue
	mata kuliah Struktur Data untuk keberkahanNya maka saya tidak
 	melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.	 */

void createEmpty(queue *Q)
{
	(*Q).first = NULL;
}

int countElement(queue Q)
{
	int hasil = 0;
	if (Q.first != NULL)
	{
		// jika queue tidak kosong
		element *tunjuk;
		tunjuk = Q.first;
		while (tunjuk != NULL)
		{
			hasil++;
			tunjuk = tunjuk->next;
		}
	}

	return hasil;
}

void add(char nama[], int rating, queue *Q)
{
	element *baru;
	baru = (element *)malloc(sizeof(element));
	strcpy(baru->kontainer.nama, nama);
	baru->kontainer.rating = rating;
	baru->next = NULL;
	if ((*Q).first == NULL)
	{
		// jika queue kosong
		(*Q).first = baru;
	}
	else
	{
		// jika queue tidak kosong
		(*Q).last->next = baru;
	}
	(*Q).last = baru;
	baru = NULL;
}

void priorityAdd(int priority, char nama[], int rating, queue *Q)
{
	element *baru;
	baru = (element *)malloc(sizeof(element));
	strcpy(baru->kontainer.nama, nama);
	baru->kontainer.rating = rating;
	baru->next = NULL;
	if ((*Q).first == NULL)
	{
		// jika queue kosong
		(*Q).first = baru;
	}
	else
	{
		// jika prioritas element baru lebih besar dari antrian terakhir
		if (priority > countElement(*Q))
		{
			(*Q).last->next = baru;
			(*Q).last = baru;
		}
		else if (priority == 1)
		{
			// jika priority 1
			baru->next = (*Q).first;
			(*Q).first = baru;
		}
		else
		{
			// jika di antara
			element *tunjuk = (*Q).first;
			element *prev = (*Q).first;
			int i = 1;
			while (i != priority)
			{
				i++;
				prev = tunjuk;
				tunjuk = tunjuk->next;
			}
			baru->next = prev->next;
			prev->next = baru;
		}
	}

	baru = NULL;
}

void del(queue *Q, queue *Q2)
{
	if ((*Q).first != NULL)
	{
		// jika queue tidak kosong
		element *hapus = (*Q).first;
		// data yang dihapus akan masuk ke Q2
		add(hapus->kontainer.nama, hapus->kontainer.rating, Q2);
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
	else
	{
		printf("queue kosong\n");
	}
}

void printqueue(queue Q, int wichQ)
{
	if (Q.first != NULL)
	{

		// jika queue tidak kosong
		printf("******************\n");
		// print yang mana?
		if (wichQ == 1)
		{
			printf("Queue 1\n");
		}
		else
		{
			printf("Queue 2\n");
		}
		element *tunjuk = Q.first;
		while (tunjuk != NULL)
		{
			printf("%s %d\n", tunjuk->kontainer.nama, tunjuk->kontainer.rating);
			tunjuk = tunjuk->next;
		}
	}
	else
	{
		printf("queue kosong\n");
	}
}