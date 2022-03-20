#include <stdio.h>
#include <string.h>
	typedef struct {
		char code;
		char name[50];
		int stock;
	}data;
	
	int main () {

		int n, i = 0;

		scanf("%d", &n);

		char c;
		data rakyat[n];
		int strlen[n];
		int countChar;

		while(i<n && n != 0) {
			countChar = 0;
			c = 0;
			scanf(" %c", &rakyat[i].code);
			while(c != '.') {
				scanf(" %c", &c);
				rakyat[i].name[countChar] = c;
				countChar++;
			}
			strlen[i] = countChar - 1;
			scanf("%d", &rakyat[i].stock);
			i++;
		}

		i = 0;
		int count = 0;
		char min;

		while(min != '!' && n != 0) {
			i = 0;
			scanf(" %c", &min);
			while(i<n) {
				if(rakyat[i].code == min) {
					rakyat[i].stock--;
				}
				i++;
			}
		}

		i = 0;
		int ch = 0;
		while(i<n) {
			if(rakyat[i].stock <= 0) {
				count++;
			}
			i++;
		}

		if(count == n) {
			ch = 1;
		}

		i = 0;
		int length;

		if(n == 0) {
			printf("================\n");
			printf("Tidak Ada Review\n");
			printf("================\n");
		} else if(ch == 0) {
			printf("=============\n");
			printf("Review Barang\n");
			printf("=============\n");

			while(i<n) {
				length = 0;
				if(rakyat[i].stock > 0) {
					printf("+Kode   : %c\n", rakyat[i].code);
					printf(">Nama   : ");
					while(length != strlen[i]) {
						printf("%c", rakyat[i].name[length]);
						length++;
					}
					printf("\n");
					printf(">Jumlah : %d\n", rakyat[i].stock);
					printf("=============\n");
				}
				i++;
			}
		} else {
			printf("=============\n");
			printf("Review Barang\n");
			printf("=============\n");
			printf("*Barang Habis\n");
			printf("=============\n");
		}
		return 0;
	}

	/*Saya Alif R mengerjakan evaluasi REDRAW19 dalam mata kuliah Alpro 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/