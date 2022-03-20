#include <stdio.h>
int main () {
	char nilai;

	printf("Masukkan Nilai Anda:\n");
	scanf(" %c", &nilai);

	switch(nilai){
		case 'A' :
			printf("PERFECT\n");
			break;
		case 'B' :
			printf("GOOD!\n");
			break;
		case 'C':
			printf("NOT BAD!\n");
			break;
		case 'D' :
			printf("Your Score is not bad\n");
			break;
		case 'E' :
			printf("Remidial, Hew we go again\n");
			break;
		default : 
			printf("You don't have any score\n");
			break;
	}
	return 0;
}