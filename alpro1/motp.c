#include <stdio.h>
typedef struct {
	int tgl;
	int plat;
	char asal;
	int lama;
	int total;
	
}parkir;
int main () {
	parkir satu;
	parkir dua;
	parkir tiga;
	int total = 0;

	scanf("%d %d %c %d", &satu.tgl, &satu.plat, &satu.asal, &satu.lama);
	scanf("%d %d %c %d", &dua.tgl, &dua.plat, &dua.asal, &dua.lama);
	scanf("%d %d %c %d", &tiga.tgl, &tiga.plat, &tiga.asal, &tiga.lama);

	switch(satu.asal) {
		case 'A':
			if ((satu.plat % 8 == 0) && (satu.tgl >= 25)) {
				satu.total = ((6000 * satu.lama)* 10)/100;
			printf(">> DATA PARKIR MANG OLEH\n");
			printf("-  Nomor Kendaraan : %d\n", satu.plat);
			printf("-  Jenis Kendaraan : Mobil\n");
			printf("-  Total Biaya Parkir : %d\n", satu.total);
				break;
			} else if ((satu.plat % 8 != 0) || (satu.tgl <= 25)) {
				satu.total = (6000 * satu.lama);
			printf(">> DATA PARKIR MANG OLEH\n");
			printf("-  Nomor Kendaraan : %d\n", satu.plat);
			printf("-  Jenis Kendaraan : Mobil\n");
			printf("-  Total Biaya Parkir : %d\n", satu.total);
				break;
			}
			break;
		case 'B':
		if ((satu.plat % 8 == 0) && (satu.tgl >= 25)) {
				satu.total = ((3000 * satu.lama)* 10)/100;
			printf(">> DATA PARKIR MANG OLEH\n");
			printf("-  Nomor Kendaraan : %d\n", satu.plat);
			printf("-  Jenis Kendaraan : Motor\n");
			printf("-  Total Biaya Parkir : %d\n", satu.total);
			} else if ((satu.plat % 8 != 0) || (satu.tgl <= 25)) {
				satu.total = (3000 * satu.lama);
			printf(">> DATA PARKIR MANG OLEH\n");
			printf("-  Nomor Kendaraan : %d\n", satu.plat);
			printf("-  Jenis Kendaraan : Motor\n");
			printf("-  Total Biaya Parkir : %d\n", satu.total);
			}
			break;
		case 'C':
		if ((satu.plat % 8 == 0) && (satu.tgl >= 25)) { 
				satu.total = ((10000 * satu.lama)* 10)/100;
			printf(">> DATA PARKIR MANG OLEH\n");
			printf("-  Nomor Kendaraan : %d\n", satu.plat);
			printf("-  Jenis Kendaraan : Truk\n");
			printf("-  Total Biaya Parkir : %d\n", satu.total);
				break;
				} else if ((satu.plat % 8 != 0) || (satu.tgl <= 25)) {
					satu.total = (10000 * satu.lama);
			printf(">> DATA PARKIR MANG OLEH\n");
			printf("-  Nomor Kendaraan : %d\n", satu.plat);
			printf("-  Jenis Kendaraan : Truk\n");
			printf("-  Total Biaya Parkir : %d\n", satu.total);
					break;
				}
			}
	switch(dua.asal) {
		case 'A':
			if ((dua.plat % 8 == 0) && (dua.tgl >= 25)) {
				dua.total = ((6000 * dua.lama)* 10)/100;
			printf("-  Nomor Kendaraan : %d\n", dua.plat);
			printf("-  Jenis Kendaraan : Mobil\n");
			printf("-  Total Biaya Parkir : %d\n", dua.total);
			}else if ((dua.plat % 8 != 0) || (dua.tgl <= 25)) {
				dua.total = (6000 * dua.lama);
			printf("-  Nomor Kendaraan : %d\n", dua.plat);
			printf("-  Jenis Kendaraan : Mobil\n");
			printf("-  Total Biaya Parkir : %d\n", dua.total);
			}
			break;
		case 'B':
		if ((dua.plat % 8 == 0) && (dua.tgl >= 25)) {
			dua.total = ((3000 * dua.lama)* 10)/100;
			printf("-  Nomor Kendaraan : %d\n", dua.plat);
			printf("-  Jenis Kendaraan : Motor\n");
			printf("-  Total Biaya Parkir : %d\n", dua.total);
			 }else if ((dua.plat % 8 != 0) || (dua.tgl <= 25)) {
			 	dua.total = (3000 * dua.lama);
			 printf("-  Nomor Kendaraan : %d\n", dua.plat);
			printf("-  Jenis Kendaraan : Motor\n");
			printf("-  Total Biaya Parkir : %d\n", dua.total);
			 }
			 break;
		case 'C':
		if ((dua.plat % 8 == 0) && (dua.tgl >= 25)) {
				dua.total = ((10000 * dua.lama)* 10)/100;
			printf("-  Nomor Kendaraan : %d\n", dua.plat);
			printf("-  Jenis Kendaraan : Truk\n");
			printf("-  Total Biaya Parkir : %d\n", dua.total);
				break;
				} else if ((dua.plat % 8 != 0) || (dua.tgl <= 25)) {
					dua.total = (10000 * dua.lama);
			printf("-  Nomor Kendaraan : %d\n", dua.plat);
			printf("-  Jenis Kendaraan : Truk\n");
			printf("-  Total Biaya Parkir : %d\n", dua.total);
					break;
				}
			}
	switch(tiga.asal) {
		case 'A':
			if ((tiga.plat % 8 == 0) && (tiga.tgl >= 25)) {
				tiga.total = ((6000 * tiga.lama)* 10)/100;
			printf("-  Nomor Kendaraan : %d\n", tiga.plat);
			printf("-  Jenis Kendaraan : Mobil\n");
			printf("-  Total Biaya Parkir : %d\n", tiga.total);
			} else if ((tiga.plat % 8 != 0) || (tiga.tgl <= 25)){
				tiga.total = (6000 * tiga.lama);
			printf("-  Nomor Kendaraan : %d\n", tiga.plat);
			printf("-  Jenis Kendaraan : Mobil\n");
			printf("-  Total Biaya Parkir : %d\n", tiga.total);
			}
			break;
		case 'B':
		if ((tiga.plat % 8 == 0) && (tiga.tgl >= 25)) {
				tiga.total = ((3000 * tiga.lama)* 10)/100;
			printf("-  Nomor Kendaraan : %d\n", tiga.plat);
			printf("-  Jenis Kendaraan : Motor\n");
			printf("-  Total Biaya Parkir : %d\n", tiga.total);
				break;
			} else if ((tiga.plat % 8 != 0) || (tiga.tgl <= 25)) {
				tiga.total = (3000 * tiga.lama);
			printf("-  Nomor Kendaraan : %d\n", tiga.plat);
			printf("-  Jenis Kendaraan : Motor\n");
			printf("-  Total Biaya Parkir : %d\n", tiga.total);
				break;
			}
			break;
		case 'C':
		if ((tiga.plat % 8 == 0) && (tiga.tgl >= 25)) { 
				tiga.total = ((10000 * tiga.lama)* 10)/100;
			printf("-  Nomor Kendaraan : %d\n", tiga.plat);
			printf("-  Jenis Kendaraan : Truk\n");
			printf("-  Total Biaya Parkir : %d\n", tiga.total);
				break;
				} else if ((tiga.plat % 8 != 0) || (tiga.tgl <= 25)) {
					tiga.total = (10000 * tiga.lama);
			printf("-  Nomor Kendaraan : %d\n", tiga.plat);
			printf("-  Jenis Kendaraan : Truk\n");
			printf("-  Total Biaya Parkir : %d\n", tiga.total);
					break;
				}
			}

			return 0;
/*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi TP3 Mang Oleh Jadi Tukang Parkir (MOTP20) dalam mata kuliah Alpro 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
}