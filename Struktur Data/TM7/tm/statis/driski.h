#include <stdio.h>
#include <string.h>

/* 	Saya D'Riski Maulana mengerjakan evaluasi - Test Mesin Queue
	mata kuliah Struktur Data untuk keberkahanNya maka saya tidak
 	melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.	 */

// variabek terstruktur
typedef struct
{
	char nama[50];
	int rating;
} game;

typedef struct
{
	int first;
	int last;
	game data[10];
} queue;

// deklarasi method and function
void createEmpty(queue *Q);
int isEmpty(queue Q);
int isFull(queue Q);
void add(char nama[], int rating, queue *Q);
void priorityAdd(int priority, char nama[], int rating, queue *Q);
void del(queue *Q, queue *Q2);
void printqueue(queue Q, int wichQ);
