#include <stdio.h>
typedef struct {
	int pertama;
	int kedua;
	int ketiga;
	char bebas;
	int total;

	
}perhitungan;
int main () {
	perhitungan itungan;
	int total = 0;

	scanf("%d %d %d", &itungan.pertama, &itungan.kedua, &itungan.ketiga);
	scanf(" %c", &itungan.bebas);

	switch (itungan.bebas) {
		case 'A':
			itungan.total = (itungan.pertama * itungan.kedua) + (itungan.kedua * itungan.ketiga);
			break;
		case 'B':
			itungan.total = (itungan.pertama * itungan.kedua) / itungan.ketiga;
			break;
		case 'C':
			itungan.total = (itungan.kedua - itungan.ketiga) * itungan.pertama;
			break;
		default:
			itungan.total = (itungan.pertama + itungan.kedua) - itungan.ketiga;
			break;
	}
	printf("%d\n", itungan.total);
	return 0;
}