#include <stdio.h>
#include <math.h>
int main(){
	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;
	int kuadrat1;
	int kuadrat2;
	float akar;

	printf("Masukkan angka x1:\n");
	scanf("%d", &x1);
	printf("Masukkan angka y1:\n");
	scanf("%d", &y1);
	printf("Masukkan angka x2:\n");
	scanf("%d", &x2);
	printf("Masukkan angka y2:\n");
	scanf("%d", &y2);
	x3 = x1 - x2;
	y3 = y1 -y2;
	kuadrat1 = x3 * x3;
	kuadrat2 = y3 * y3;
	akar = sqrt (kuadrat1);
	float hasil = akar + kuadrat2;
	printf("Jarak antara kedua titik adalah %0.2f\n", hasil);
	return 0; 
}