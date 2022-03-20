#include <stdio.h>
	typedef struct {
		int nim;
		char kls;
		int nT;
		int nU;
		int nP;
		int jB;
	}test;
	
	int main () {
		test a;
		test b;
		test c;
		a.jB = 1;
		b.jB = 1;
		c.jB = 1;
		
		scanf("%d %c %d %d %d", &a.nim, &a.kls, &a.nT, &a.nU, &a.nP);
		scanf("%d %c %d %d %d", &b.nim, &b.kls, &b.nT, &b.nU, &b.nP);
		scanf("%d %c %d %d %d", &c.nim, &c.kls, &c.nT, &c.nU, &c.nP);
		
		if (a.nT >= 80) {
			a.jB++;
		} else if (a.nT < 50) {
			a.jB--;
		}
		
		if (a.nU >= 80) {
			a.jB++;
		} else if (a.nU < 50) {
			a.jB--;
		}
		
		if (a.nP >= 80) {
			a.jB++;
		} else if (a.nP < 50) {
			a.jB--;
		}
		
		if (b.nT >= 80) {
			b.jB++;
		} else if (b.nT < 50) {
			b.jB--;
		}
		
		if (b.nU >= 80) {
			b.jB++;
		} else if (b.nU < 50) {
			b.jB--;
		}
		
		if (b.nP >= 80) {
			b.jB++;
		} else if (b.nP < 50) {
			b.jB--;
		}
		
		if (c.nT >= 80) {
			c.jB++;
		} else if (c.nT < 50) {
			c.jB--;
		}
		
		if (c.nU >= 80) {
			c.jB++;
		} else if (c.nU < 50) {
			c.jB--;
		}
		
		if (c.nP >= 80) {
			c.jB++;
		} else if (c.nP < 50) {
			c.jB--;
		}
		
		if(a.jB < 0) {
			a.jB = 0;
		}
		
		if(b.jB < 0) {
			b.jB = 0;
		}
		
		if(c.jB < 0) {
			c.jB = 0;
		}
		
		printf(" JUMLAH BINTANG SETIAP MAHASISWA\n");
		printf("=================================\n");
		printf("Jumlah bintang %d: %d\n", a.nim, a.jB);
		printf("Jumlah bintang %d: %d\n", b.nim, b.jB);
		printf("Jumlah bintang %d: %d\n", c.nim, c.jB);
		printf("\n");
		printf(" MAHASISWA BERPRESTASI\n");
		printf("=======================\n");
	
		int num = 1;
			
		switch (a.kls) {
			case 'A':
				if(a.jB >= 3) {
					printf("%d. %d, mendapatkan Keyboard Wireless.\n", num, a.nim);
					num++;
				}
				break;
				
			case 'B':
				if(a.jB >= 3) {
					printf("%d. %d, mendapatkan Kacamata Anti Radiasi.\n", num, a.nim);
					num++;
				}
				break;
				
			case 'C':
				if(a.jB >= 3) {
					printf("%d. %d, mendapatkan Printer WiFi.\n", num, a.nim);
					num++;
				}
				break;
				
			default:
				if(a.jB >= 3) {
					printf("%d. %d, mendapatkan Cilok Kopma.\n", num, a.nim);
				num++;
				}
				break;
				
		}
		
		switch (b.kls) {
			case 'A':
				if(b.jB >= 3) {
					printf("%d. %d, mendapatkan Keyboard Wireless.\n", num, b.nim);
					num++;
				}
				break;
				
			case 'B':
				if(b.jB >= 3) {
					printf("%d. %d, mendapatkan Kacamata Anti Radiasi.\n", num, b.nim);
					num++;
				}
				break;
				
			case 'C':
				if(b.jB >= 3) {
					printf("%d. %d, mendapatkan Printer WiFi.\n", num, b.nim);
					num++;
				}
				break;
				
			default: 
				if(b.jB >= 3) {
					printf("%d. %d, mendapatkan Cilok Kopma.\n", num, b.nim);
				num++;
				}
				break;
				
		}
		
		switch (c.kls) {
			case 'A':
				if(c.jB >= 3) {
					printf("%d. %d, mendapatkan Keyboard Wireless.\n", num, c.nim);
					num++;
				}
				break;
				
			case 'B':
				if(c.jB >= 3) {
					printf("%d. %d, mendapatkan Kacamata Anti Radiasi.\n", num, c.nim);
					num++;
				}
				break;
				
			case 'C':
				if(c.jB >= 3) {
					printf("%d. %d, mendapatkan Printer WiFi.\n", num, c.nim);
					num++;
				}
				break;
				
			default: 
				if(c.jB >= 3) {
					printf("%d. %d, mendapatkan Cilok Kopma.\n", num, c.nim);
				num++;
				}
				break;
				
		}
		
		if (a.jB < 3 && b.jB < 3 && c.jB < 3) {
			printf("Tidak ada mahasiswa berprestasi.\n");
		}
		
		return 0;
	}
	
	/*Saya Alif R mengerjakan evaluasi AGemes19 dalam mata kuliah Alpro 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/