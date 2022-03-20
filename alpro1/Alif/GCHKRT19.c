#include <stdio.h>
	int main() {

		int i;
		char code[5];
		int jumlah = 0;
		int vokal = 0, konsonan = 0;

		for(i=0;i<5;i++) {
			scanf(" %c", &code[i]);
		}

		int translator[5];

		for(i=0;i<5;i++) {
			translator[i] = code[i];
		}

		for(i=0;i<5;i++) {
			if (translator[i] == 65 || translator[i] == 73 || translator[i] == 85 || translator[i] == 69 || translator[i] == 79) {
				vokal++;
			} else if (translator[i] > 65 && translator[i] <= 90) {
				konsonan++;
			}

			if (translator[i] >= 48 && translator[i] <= 57) {
				translator[i]-=48;
			}

			jumlah+=translator[i];
		}

		if (jumlah % 2 == 1 && vokal > konsonan) {
			printf("Selamat anda mendapatkan kartu Blue Eyes Black Dragon.\n");
		} else if (jumlah % 2 == 1 && konsonan > vokal) {
			printf("Selamat anda mendapatkan kartu Meteor Dust.\n");
		} else if (jumlah % 2 == 0 && vokal > konsonan) {
			printf("Selamat anda mendapatkan kartu Light Magician.\n");
		} else if (jumlah % 2 == 0 && konsonan > vokal) {
			printf("Selamat anda mendapatkan kartu Wall Force.\n");
		} else if (konsonan == vokal || (konsonan == 0 && vokal == 0)) {
			printf("Selamat anda mendapatkan kartu Keribo.\n");
		}

		return 0;
	}

	/*Saya Alif R mengerjakan evaluasi GCHKRT19 dalam mata kuliah Alpro 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/