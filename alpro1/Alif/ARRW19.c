#include <stdio.h>
#include <string.h>

int main () {

	char masukan[101], string[101], kunci[101];
	int i = 0, j, k;

	while(masukan[i-1] != '-') {
		scanf(" %c", &masukan[i]);
		if(masukan[i] != '-'); {
			string[i] = masukan[i];
		}
		i++;
	}

	string[i-1] = '\0';
	int jistring = strlen(string);
	char kataKunci[jistring];

	scanf("%s", &kunci);
	int jikunci = strlen(kunci);
	char cek[jikunci + 1];
	cek[jikunci] = '\0';

	i = 0, j = 0;
	k = 0;
	int storage[101];
	int n = 0;

	while(i < jistring) {
		if(string[i] == kunci[j]) {
			j++;
		}
		else{
			j=0;
		}

		if(j == jikunci) {
			int index = i-jikunci+1;
			k = index;
			while (k < index + jikunci) {
				storage[n] = k;
				k++;
				n++;
			}
			j=0;
		}
		i++;
	}

	n = 0, j = 0, i = 0;

	while(i < jistring) {
		if(i != storage[j]) {
			kataKunci[n] = string[i];
			n++;
		} else {
			j++;
		}
		i++;
	}

	int jikataKunci = n;
	if (jikataKunci > 0) {
		kataKunci[n] = '\0';
		printf("Kata Kunci    : %s\n", kataKunci);
		int idepan = 0, ibelakang = jikataKunci-1;
		if (jikataKunci%2 == 1) {
			jikataKunci--;
		}

		char enkripsi1[jikataKunci+1], enkripsi2[jikataKunci+1];
		i=0;

		while(i < jikataKunci) {
			if(i % 2 == 0) {
				enkripsi1[i] = kataKunci[ibelakang];
				ibelakang--;
			} else {
				enkripsi1[i] = kataKunci[idepan];
				idepan++;
			}
			i++;
		}
		enkripsi1[i] = '\0';
		printf("Hasil Enkrip1 : %s\n", enkripsi1);

		idepan = 0, ibelakang = jikataKunci-1;
		i = 0;
		while(i < jikataKunci) {
			if(i % 2 == 0) {
				enkripsi2[i] = enkripsi1[ibelakang];
				ibelakang--;
			} else {
				enkripsi2[i] = enkripsi1[idepan];
				idepan++;
			}
			i++;
		}
		enkripsi2[i] = '\0';
		printf("Hasil Enkrip2 : %s\n", enkripsi2);
	} else {
		printf("DATA TELAH TERCURI !\n");
	}

	return 0;
}

/*Saya Alif R mengerjakan evaluasi ARRW19 dalam mata kuliah Alpro 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/