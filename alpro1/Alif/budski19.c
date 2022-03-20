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
		
		scanf("%d %c %d %d %d", &a.nim, &a.kls, &a.nT, &a.nP, &a.nU);
		scanf(" %d  %c %d %d %d", &b.nim, &b.kls, &b.nT, &b.nP, &b.nU);
		scanf("  %d  %c %d %d %d", &c.nim, &c.kls, &c.nT, &c.nP, &c.nU );
		
		switch (a.kls) {
			case 'A':
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
				break;
				
			case 'B':
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
				break;
			
			case 'C':
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
				break;
				
		}
		
		switch (b.kls) {
			case 'A':
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
				break;
				
			case 'B':
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
				break;
			
			case 'C':
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
				break;
				
		}
		
		switch (c.kls) {
			case 'A':
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
				break;
				
			case 'B':
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
				break;
			
			case 'C':
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
				break;
				
		}
		printf(" JUMLAH BINTANG SETIAP MAHASISWA \n");
		printf("=================================\n");
		printf("Jumlah bintang %d: %d\n", a.nim, a.jB);
		printf("Jumlah bintang %d: %d\n", b.nim, b.jB);
		printf("Jumlah bintang %d: %d\n", c.nim, c.jB);
		printf("\n");
		printf(" MAHASISWA BERPRESTASI \n");
		printf("=======================\n");
	
		int num = 1;
		int i;
		int x;
			
		switch (a.kls) {
			case 'A':
				if(a.jB >= 3) {
					printf("%d. %d, mendapatkan Keyboard Wireless\n", num, a.nim);
					num++;
					
				}
				
			case 'B':
				if(a.jB >= 3) {
					printf("%d. %d, mendapatkan Kacamata Anti Radiasi\n", num, a.nim);
					num++;
				}
				
			case 'C':
				if(a.jB >= 3) {
					printf("%d. %d, mendapatkan Printer WiFi\n", num, a.nim);
					num++;
				}
				
		}
		
		switch (b.kls) {
			case 'A':
				if(b.jB >= 3) {
					printf("%d. %d, mendapatkan Keyboard Wireless\n", num, b.nim);
					num++;
					
				}
				
			case 'B':
				if(b.jB >= 3) {
					printf("%d. %d, mendapatkan Kacamata Anti Radiasi\n", num, b.nim);
					num++;
				}
				
			case 'C':
				if(b.jB >= 3) {
					printf("%d. %d, mendapatkan Printer WiFi\n", num, b.nim);
					num++;
				}
				
			
				
		}
		
		switch (c.kls) {
			case 'A':
				if(c.jB >= 3) {
					printf("%d. %d, mendapatkan Keyboard Wireless\n", num, c.nim);
					num++;
					
				}
				
			case 'B':
				if(c.jB >= 3) {
					printf("%d. %d, mendapatkan Kacamata Anti Radiasi\n", num, c.nim);
					num++;
				}
				
			case 'C':
				if(c.jB >= 3) {
					printf("%d. %d, mendapatkan Printer WiFi\n", num, c.nim);
					num++;
				}
				
		}
			
		
			
		return 0;
	}