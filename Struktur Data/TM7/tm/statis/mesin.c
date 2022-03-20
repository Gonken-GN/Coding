#include "driski.h"

/* 	Saya D'Riski Maulana mengerjakan evaluasi - Test Mesin Queue
	mata kuliah Struktur Data untuk keberkahanNya maka saya tidak
 	melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.	 */
void createEmpty(queue *Q)
{
	// -1 tanda lis kosong
	(*Q).first = -1;
	(*Q).last = -1;
}

int isEmpty(queue Q)
{
	// apakah queue kosong?
	int hasil = 0;
	if (Q.first == -1)
	{
		hasil = 1;
	}

	return hasil;
}

int isFull(queue Q)
{
	// apakah queue penuh?
	int hasil = 0;
	if (Q.last == 9)
	{
		hasil = 1;
	}
	return hasil;
}

void add(char nama[], int rating, queue *Q)
{
	if (isEmpty(*Q) == 1)
	{
		// jika queue kosong
		(*Q).first = 0;
		(*Q).last = 0;
		strcpy((*Q).data[0].nama, nama);
		(*Q).data[0].rating = rating;
	}
	else
	{
		// jika queue tidak kosong
		if (isFull(*Q) != 1)
		{
			(*Q).last = (*Q).last + 1;
			strcpy((*Q).data[(*Q).last].nama, nama);
			(*Q).data[(*Q).last].rating = rating;
		}
		else
		{
			printf("queue penuh.\n");
		}
	}
}

void priorityAdd(int priority, char nama[], int rating, queue *Q)
{
	if (isEmpty(*Q) == 1)
	{
		// jika queue kosong
		(*Q).first = 0;
		(*Q).last = 0;
		strcpy((*Q).data[0].nama, nama);
		(*Q).data[0].rating = rating;
	}
	else
	{
		// jika queue tidak kosong
		if (isFull(*Q) != 1)
		{
			if ((*Q).last + 1 < priority)
			{
				// jika data yang akan dimasukkan prioritas terakhir
				(*Q).last = (*Q).last + 1;
				strcpy((*Q).data[(*Q).last].nama, nama);
				(*Q).data[(*Q).last].rating = rating;
			}
			// jika data yang akan dimasukkan prioritas utama
			else if (priority == 1)
			{
				// menggeser element ke depan
				for (int i = (*Q).last; i >= (*Q).first; i--)
				{
					strcpy((*Q).data[i + 1].nama, (*Q).data[i].nama);
					(*Q).data[i + 1].rating = (*Q).data[i].rating;
				}
				// mengisi element pertama dengan rating baru
				(*Q).last = (*Q).last + 1;
				strcpy((*Q).data[0].nama, nama);
				(*Q).data[0].rating = rating;
			}
			// jika data yang akan dimasukkan merupakan di tengah queue
			else
			{
				// mundur dari titik yang telah dicari
				for (int i = (*Q).last; i >= priority - 1; i--)
				{
					// mundur satu index
					strcpy((*Q).data[i + 1].nama, (*Q).data[i].nama);
					(*Q).data[i + 1].rating = (*Q).data[i].rating;
				}
				// di titik mundur isi dengan data baru
				(*Q).last = (*Q).last + 1;
				strcpy((*Q).data[priority - 1].nama, nama);
				(*Q).data[priority - 1].rating = rating;
			}
		}
		else
		{
			printf("queue penuh.\n");
		}
	}
}

void del(queue *Q, queue *Q2)
{
	// data yang dihapus akan masuk ke Q2
	add((*Q).data[(*Q).first].nama, (*Q).data[(*Q).first].rating, Q2);
	if ((*Q).last == 0)
	{
		// jika hanya satu element
		(*Q).first = -1;
		(*Q).last = -1;
	}
	else
	{
		// menggeser element ke depan
		for (int i = (*Q).first + 1; i <= (*Q).last; i++)
		{
			strcpy((*Q).data[i - 1].nama, (*Q).data[i].nama);
			(*Q).data[i - 1].rating = (*Q).data[i].rating;
		}
		(*Q).last = (*Q).last - 1;
	}
}

void printqueue(queue Q, int wichQ)
{
	if (Q.first != -1)
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
		for (int i = Q.first; i <= Q.last; i++)
		{
			printf("%s %d\n", Q.data[i].nama, Q.data[i].rating);
		}
	}
	else
	{
		printf("queue kosong\n");
	}
}