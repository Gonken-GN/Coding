#include<stdio.h>

typedef struct{
	int tanggal;
	int nomor;
	char kode;
	int lamajam;
	int biayatotal;
	int biaya;
	char jenis;
}kendaraan;

int main(){

	kendaraan k1;
	kendaraan k2;
	kendaraan k3;
	k1.biaya=0;
	k1.biayatotal=0;
	k2.biaya=0;
	k2.biayatotal=0;
	k3.biaya=0;
	k3.biayatotal=0;

	scanf("%d %d %c %d", &k1.tanggal, &k1.nomor, &k1.kode, &k1.lamajam);
	scanf("%d %d %c %d", &k2.tanggal, &k2.nomor, &k2.kode, &k2.lamajam);
	scanf("%d %d %c %d", &k3.tanggal, &k3.nomor, &k3.kode, &k3.lamajam);

	printf(">> DATA PARKIR MANG OLEH\n");

	switch(k1.kode){
			case 'A':
				k1.biaya = k1.lamajam * 6000;
				if((k1.tanggal >= 25) && (k1.tanggal <= 31) && (k1.nomor % 8 == 0)){
					k1.biayatotal = k1.biaya * 0.9;
				}
				else{
					k1.biayatotal = k1.biaya;
				}
				printf("-  Nomor Kendaraan : %d\n", k1.nomor);
				printf("-  Jenis Kendaraan : Mobil\n");
				printf("-  Total Biaya Parkir : %d\n", k1.biayatotal);
				break;
			case 'B':
				k1.biaya = k1.lamajam * 3000;
				if((k1.tanggal >= 25) && (k1.tanggal <= 31) && (k1.nomor % 8 == 0)){
					k1.biayatotal = k1.biaya * 0.9;
				}
				else{
					k1.biayatotal = k1.biaya;
				}
				printf("-  Nomor Kendaraan : %d\n", k1.nomor);
				printf("-  Jenis Kendaraan : Motor\n");
				printf("-  Total Biaya Parkir : %d\n", k1.biayatotal);
				break;
			case 'C':
				k1.biaya = k1.lamajam * 10000;
				if((k1.tanggal >= 25) && (k1.tanggal <= 31) && (k1.nomor % 8 == 0)){
					k1.biayatotal = k1.biaya * 0.9;
				}
				else{
					k1.biayatotal = k1.biaya;
				}
				printf("-  Nomor Kendaraan : %d\n", k1.nomor);
				printf("-  Jenis Kendaraan : Truk\n");
				printf("-  Total Biaya Parkir : %d\n", k1.biayatotal);
				break;
		}

	switch(k2.kode){
			case 'A':
				k2.biaya = k2.lamajam * 6000;
				if((k2.tanggal >= 25) && (k2.tanggal <= 31) && (k2.nomor % 8 == 0)){
					k2.biayatotal = k2.biaya * 0.9;
				}
				else{
					k2.biayatotal = k2.biaya;
				}
				printf("-  Nomor Kendaraan : %d\n", k2.nomor);
				printf("-  Jenis Kendaraan : Mobil\n");
				printf("-  Total Biaya Parkir : %d\n", k2.biayatotal);
				break;
			case 'B':
				k2.biaya = k2.lamajam * 3000;
				if((k2.tanggal >= 25) && (k2.tanggal <= 31) && (k2.nomor % 8 == 0)){
					k2.biayatotal = k2.biaya * 0.9;
				}
				else{
					k2.biayatotal = k2.biaya;
				}
				printf("-  Nomor Kendaraan : %d\n", k2.nomor);
				printf("-  Jenis Kendaraan : Motor\n");
				printf("-  Total Biaya Parkir : %d\n", k2.biayatotal);
				break;
			case 'C':
				k2.biaya = k2.lamajam * 10000;
				if((k2.tanggal >= 25) && (k2.tanggal <= 31) && (k2.nomor % 8 == 0)){
					k2.biayatotal = k2.biaya * 0.9;
				}
				else{
					k2.biayatotal = k2.biaya;
				}
				printf("-  Nomor Kendaraan : %d\n", k2.nomor);
				printf("-  Jenis Kendaraan : Truk\n");
				printf("-  Total Biaya Parkir : %d\n", k2.biayatotal);
				break;
		}

	switch(k3.kode){
			case 'A':
				k3.biaya = k3.lamajam * 6000;
				if((k3.tanggal >= 25) && (k3.tanggal <= 31) && (k3.nomor % 8 == 0)){
					k3.biayatotal = k3.biaya * 0.9;
				}
				else{
					k3.biayatotal = k3.biaya;
				}
				printf("-  Nomor Kendaraan : %d\n", k3.nomor);
				printf("-  Jenis Kendaraan : Mobil\n");
				printf("-  Total Biaya Parkir : %d\n", k3.biayatotal);
				break;
			case 'B':
				k3.biaya = k3.lamajam * 3000;
				if((k3.tanggal >= 25) && (k3.tanggal <= 31) && (k3.nomor % 8 == 0)){
					k3.biayatotal = k3.biaya * 0.9;
				}
				else{
					k3.biayatotal = k3.biaya;
				}
				printf("-  Nomor Kendaraan : %d\n", k3.nomor);
				printf("-  Jenis Kendaraan : Motor\n");
				printf("-  Total Biaya Parkir : %d\n", k3.biayatotal);
				break;
			case 'C':
				k3.biaya = k3.lamajam * 10000;
				if((k3.tanggal >= 25) && (k3.tanggal <= 31) && (k3.nomor % 8 == 0)){
					k3.biayatotal = k3.biaya * 0.9;
				}
				else{
					k3.biayatotal = k3.biaya;
				}
				printf("-  Nomor Kendaraan : %d\n", k3.nomor);
				printf("-  Jenis Kendaraan : Truk\n");
				printf("-  Total Biaya Parkir : %d\n", k3.biayatotal);
				break;
		}

	return 0;
}