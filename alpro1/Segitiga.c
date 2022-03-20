#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int bil;
	float akar;
	int kuadrat;
	printf("masukkan angka integer\n");
	scanf("%d", &bil);
	akar = sqrt (bil);
	kuadrat = bil * bil;
	printf("bilangan akar %0.2f\n", akar);
	printf("bilangan kuadrat %d\n", kuadrat);
	return 0;
}