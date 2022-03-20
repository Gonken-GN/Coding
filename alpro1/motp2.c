#include <stdio.h>
//membuat tipe bungkusan data
typedef struct {
	int tgl;
	int plat;
	char asal;
	int lama;
	int total;
	float diskon;
	int h_diskon;	
}parkir;

int main () {
	//membuat bungkusan di dalam main
	parkir satu;
	parkir dua;
	parkir tiga;
	int total = 0;
	//meminta user untuk menyediakan 3 kotak input
	scanf("%d %d %c %d", &satu.tgl, &satu.plat, &satu.asal, &satu.lama);
	scanf("%d %d %c %d", &dua.tgl, &dua.plat, &dua.asal, &dua.lama);
	scanf("%d %d %c %d", &tiga.tgl, &tiga.plat, &tiga.asal, &tiga.lama);
	//syarat jika plat nomor kelipatan 8 dan 7 hari terakhir oktober maka diskon 10%
	if ((satu.plat % 8 == 0) && (satu.tgl >= 25)) {
		satu.diskon = 0.1;
	} else if ((satu.plat % 8 != 0) || (satu.tgl <= 25)) {
				satu.diskon = 0;
			}
	//syarat jika plat nomor kelipatan 8 dan 7 hari terakhir oktober maka diskon 10%
	if ((dua.plat % 8 == 0) && (dua.tgl >= 25)) {
		dua.diskon = 0.1;
	} else if ((dua.plat % 8 != 0) || (dua.tgl <= 25)) {
				dua.diskon = 0;
			}
	//syarat jika plat nomor kelipatan 8 dan 7 hari terakhir oktober maka diskon 10%
	if ((tiga.plat % 8 == 0) && (tiga.tgl >= 25)) {
		tiga.diskon = 0.1;
	} else if ((tiga.plat % 8 != 0) || (tiga.tgl <= 25)) {
				tiga.diskon = 0;
			}
	//membuat pilihan yang diambil untuk parkiran satu
	switch(satu.asal) {
		//jika yang dipilih mobil
		case 'A':
		//menghitung harga total dan harga diskon lalu harga total dikurangkan oleh harga diskon
		satu.total = 6000 * satu.lama;
		satu.h_diskon = (6000 * satu.lama) * satu.diskon;
			printf(">> DATA PARKIR MANG OLEH\n");
			printf("-  Nomor Kendaraan : %d\n", satu.plat);
			printf("-  Jenis Kendaraan : Mobil\n");
			printf("-  Total Biaya Parkir : %d\n", satu.total - satu.h_diskon);
			break;
		//jika yang dipilih motor
		case 'B':
		//menghitung harga total dan harga diskon lalu harga total dikurangkan oleh harga diskon
		satu.total = 3000 * satu.lama;
		satu.h_diskon = (3000 * satu.lama) * satu.diskon;
			printf(">> DATA PARKIR MANG OLEH\n");
			printf("-  Nomor Kendaraan : %d\n", satu.plat);
			printf("-  Jenis Kendaraan : Motor\n");
			printf("-  Total Biaya Parkir : %d\n", satu.total - satu.h_diskon);
			break;
		//jika yang dipilih truk
		case 'C':
		//menghitung harga total dan harga diskon lalu harga total dikurangkan oleh harga diskon
		satu.total = 10000 * satu.lama;
		satu.h_diskon = (10000 * satu.lama) * satu.diskon;;
			printf(">> DATA PARKIR MANG OLEH\n");
			printf("-  Nomor Kendaraan : %d\n", satu.plat);
			printf("-  Jenis Kendaraan : Truk\n");
			printf("-  Total Biaya Parkir : %d\n", satu.total - satu.h_diskon);
			break;
		}
	switch(dua.asal) {
		//jika yang dipilih mobil
		case 'A':
		//menghitung harga total dan harga diskon lalu harga total dikurangkan oleh harga diskon		
		dua.total = 6000 * dua.lama;		
		dua.h_diskon = (6000 * dua.lama) * dua.diskon;
			printf("-  Nomor Kendaraan : %d\n", dua.plat);
			printf("-  Jenis Kendaraan : Mobil\n");
			printf("-  Total Biaya Parkir : %d\n", dua.total - dua.h_diskon);
			break;
		//jika yang dipilih motor
		case 'B':
		//menghitung harga total dan harga diskon lalu harga total dikurangkan oleh harga diskon
		dua.total = 3000 * dua.lama;
		dua.h_diskon = (3000 * dua.lama) * dua.diskon;
			printf("-  Nomor Kendaraan : %d\n", dua.plat);
			printf("-  Jenis Kendaraan : Motor\n");
			printf("-  Total Biaya Parkir : %d\n", dua.total - dua.h_diskon);
			 break;
	 	//jika yang dipilih truk
		case 'C':
		//menghitung harga total dan harga diskon lalu harga total dikurangkan oleh harga diskon
		dua.total = 10000 * dua.lama;
		dua.h_diskon = (10000 * dua.lama) * dua.diskon;
			printf("-  Nomor Kendaraan : %d\n", dua.plat);
			printf("-  Jenis Kendaraan : Truk\n");
			printf("-  Total Biaya Parkir : %d\n", dua.total - dua.h_diskon);
			break;
		}
	switch(tiga.asal) {
		//jika yang dipilih mobil
		case 'A':
		//menghitung harga total dan harga diskon lalu harga total dikurangkan oleh harga diskon
		tiga.total = 6000 * tiga.lama;
		tiga.h_diskon = (6000 * tiga.lama) * tiga.diskon;
			printf("-  Nomor Kendaraan : %d\n", tiga.plat);
			printf("-  Jenis Kendaraan : Mobil\n");
			printf("-  Total Biaya Parkir : %d\n", tiga.total - tiga.h_diskon);
			break;
		//jika yang dipilih motor
		case 'B':
		//menghitung harga total dan harga diskon lalu harga total dikurangkan oleh harga diskon
		tiga.total = 3000 * tiga.lama;
		tiga.h_diskon = (3000 * tiga.lama)* tiga.diskon;
			printf("-  Nomor Kendaraan : %d\n", tiga.plat);
			printf("-  Jenis Kendaraan : Motor\n");
			printf("-  Total Biaya Parkir : %d\n", tiga.total - tiga.h_diskon);
			break;
		//jika yang dipilih truk
		case 'C':
		//menghitung harga total dan harga diskon lalu harga total dikurangkan oleh harga diskon
		tiga.total = 10000 * tiga.lama;
		tiga.h_diskon = (10000 * tiga.lama) * tiga.diskon;
			printf("-  Nomor Kendaraan : %d\n", tiga.plat);
			printf("-  Jenis Kendaraan : Truk\n");
			printf("-  Total Biaya Parkir : %d\n", tiga.total - tiga.h_diskon);
				break;
			}

			return 0;
/*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi TP3 Mang Oleh Jadi Tukang Parkir (MOTP20) dalam mata kuliah Alpro 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
		}