#include <stdio.h>

	typedef struct {
		int panjang;
		int lebar;
		int tinggi;
		int lp;
		int volume;
	}balok;
	int main () {
		balok b;// membuat bungkusan di dalam main

		printf("Masukan nilai panjang, lebar tinggi\n");
		scanf("%d %d %d", &b.panjang, &b.lebar, &b.tinggi);

		b.lp = 2*((b.panjang * b.lebar) + (b.panjang * b.tinggi) + (b.lebar * b.tinggi));
		b.volume = b.panjang * b.lebar * b.tinggi;

		printf("Luas permukaan %d\n", b.lp);
		printf("Volume %d\n", b.volume);
		return 0;
	}
