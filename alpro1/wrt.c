#include <stdio.h>
typedef struct {
	int pilihan;
	int banyak;
	int total;
	char member;
	
}costumer;

int main () {
	printf("==============================\n");
	printf("SELAMAT DATANG DI MAMANG RESTO\n");
	printf("==============================\n");
	printf("             MENU             \n");
	printf("1.  Sosis Bakar     : Rp.5.000\n");
	printf("2. Nasi Goreng      : Rp. 10.000\n");
	printf("3. Spaghetti        : Rp. 20.000\n");
	printf("4. Green Tea        : Rp. 8.000\n");

	costumer pertama;
	pertama.total = 0;

	printf("Masukkan Pilihan Menu Anda\n");
	scanf("%d", &pertama.pilihan);

	printf("Masukkan Banyak Menu Yang Anda Pilih\n");
	scanf("%d", &pertama.banyak);

	printf("Apakah Anda Member (Y/N)\n");
	scanf(" %c", &pertama.member);

	switch (pertama.pilihan) {
		case 1:
		pertama.total = pertama.banyak * 5000;
		break;
		case 2:
		pertama.total = pertama.banyak * 10000;
		case 3:
		pertama.total = pertama.banyak * 20000;
		case 4:
		pertama.total = pertama.banyak * 8000;
		default:
			printf("===================================\n");
			printf("MEnu Yang Anda Pilih Tidak Tersedia\n");
			printf("===================================\n");
			break;
	}
	if ((pertama.total > 0) && (pertama.pilihan >= 1) && (pertama.pilihan <= 4))
		{if (pertama.member == 'Y')
	{ pertama.total = pertama.total - ((pertama.total * 20)/ 100);
		printf("\n");
		printf("Total Pesanan Anda : Rp.%d\n", pertama.total);
		}
	}
	return 0;
}