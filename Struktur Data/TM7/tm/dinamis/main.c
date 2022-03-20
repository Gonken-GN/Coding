#include "driski.h"

/* 	Saya D'Riski Maulana mengerjakan evaluasi - Test Mesin Queue
	mata kuliah Struktur Data untuk keberkahanNya maka saya tidak
 	melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.	 */

int main()
{
	// deklarasi queue
	queue Q1;
	createEmpty(&Q1);
	queue Q2;
	createEmpty(&Q2);

	// input variable
	game input[6];

	for (int i = 0; i < 6; i++)
	{
		// ask for input
		scanf("%s %d", input[i].nama, &input[i].rating);
	}

	// test machine
	add(input[0].nama, input[0].rating, &Q1);
	add(input[1].nama, input[1].rating, &Q1);
	priorityAdd(2, input[2].nama, input[2].rating, &Q1);
	printqueue(Q1, 1);
	del(&Q1, &Q2);
	printqueue(Q1, 1);
	printqueue(Q2, 2);
	priorityAdd(1, input[3].nama, input[3].rating, &Q1);
	priorityAdd(99, input[4].nama, input[4].rating, &Q1);
	printqueue(Q1, 1);
	del(&Q1, &Q2);
	del(&Q1, &Q2);
	add(input[5].nama, input[5].rating, &Q1);
	printqueue(Q1, 1);
	printqueue(Q2, 2);
	printf("******************\n");

	return 0;
}