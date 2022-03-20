/*Saya Alif Rizza Z mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/


#include "numtrans.h"

int k;

float mean;

void spasi(int n) {          
	for(k=0;k<n;k++) {
		printf("-");
	}
} //prosedur pola

void pola0(int n) {
	for(k=0;k<n;k++) {
		printf("-");
	}
	for(k=0;k<n;k++) {
		printf("-");
	}
	for(k=0;k<n;k++) {
		printf("-");
	}
}  //prosedur pola

void pola1(int n) {
	for(k=0;k<n;k++) {
		printf("@");
	}
	for(k=0;k<n;k++) {
		printf("-");
	}
	for(k=0;k<n;k++) {
		printf("-");
	}
}  //prosedur pola

void pola1bzo(int n) {
	for(k=0;k<n;k++) {
		printf("@");
	}
	for(k=0;k<n;k++) {
		printf("-");
	}
}  //prosedur pola

void pola2(int n) {
	for(k=0;k<n;k++) {
		printf("-");
	}
	for(k=0;k<n;k++) {
		printf("@");
	}
	for(k=0;k<n;k++) {
		printf("-");
	}
}  //prosedur pola

void pola2start(int n) {
	for(k=0;k<n;k++) {
		printf("@");
	}
	for(k=0;k<n;k++) {
		printf("-");
	}
}  //prosedur pola

void pola2end(int n) {
	for(k=0;k<n;k++) {
		printf("-");
	}
	for(k=0;k<n;k++) {
		printf("@");
	}
}  //prosedur pola

void pola2bzo(int n) {
	for(k=0;k<n;k++) {
		printf("-");
	}
	for(k=0;k<n;k++) {
		printf("@");
	}
}  //prosedur pola

void pola3(int n) {
	for(k=0;k<n;k++) {
		printf("-");
	}
	for(k=0;k<n;k++) {
		printf("-");
	}
	for(k=0;k<n;k++) {
		printf("@");
	}
}  //prosedur pola

void start(int n) {
	for(k=0;k<n;k++) {
		printf("@");
	}
}  //prosedur pola

void pola4(int n) {
	for(k=0;k<n;k++) {
		printf("@");
	}
	for(k=0;k<n;k++) {
		printf("-");
	}
	for(k=0;k<n;k++) {
		printf("@");
	}	
}  //prosedur pola

void pola5(int n) {
	for(k=0;k<n;k++) {
		printf("@");
	}
	for(k=0;k<n;k++) {
		printf("@");
	}
	for(k=0;k<n;k++) {
		printf("-");
	}
}  //prosedur pola

void pola5end(int n) {
	for(k=0;k<n;k++) {
		printf("@");
	}
	for(k=0;k<n;k++) {
		printf("@");
	}
} //prosedur pola

float meann(int t, int num[t]) { //fungsi mencari rata-rata
	float tot = 0;
	int i;

	for(i=0;i<t;i++) {
		tot += num[i];
	} //menghitung total jumlah masukan ke dalam variabel tot

	mean = tot/t; //menghitung rata-rata

	for(i=0;i<t;i++) {
		printf("%d", num[i]);
		if(i < t-1) {
			printf(" + ");
		}
	} //algoritma bentuk penjumlahan (a + b + c)

	return mean; 
}

void pola(int n) { //prosedur print pola
	int i;

	int depan = mean; //memisahkan bagian depan float
	if(mean == 00.00) {
		depan = 0;
	} //mengubah variabel depan menjadi nol jika rata-rata = 00.00
	int belakang = ((mean - depan)*100) + .5; //memisahkan bagian belakang float
	if(belakang == 0) {
		belakang = 0;
	}

	int countd = depan; //variabel baru untuk menghitung jumlah depan
	int jumlahdepan = 0; //variabel baru untuk menampung jumlah depan
	int countb = belakang; //variabel baru untuk menghitung jumlah belakang
	int jumlahbelakang = 0; //variabel baru untuk menampung jumlah belakang

	if(countd == 0) {
		jumlahdepan = jumlahdepan + 1;
	} //untuk menambah jumlah digit depan jika depan = 0

	while(countd > 0) {
		countd = (countd - (countd%10))/10;
		jumlahdepan++;
	} //algoritma menghitung jumlah digit depan

	int depan1[jumlahdepan]; //variabel untuk menampung angka untuk proses memisah digit depan

	for(i=jumlahdepan - 1;i>=0;i--) {
		depan1[i] = depan;
		depan = (depan -(depan%10))/10;
	} //algoritma proses memisah digit depan

	int storage[jumlahdepan]; //variabel array menampung digit yang sudah dipisah

	for(i=0;i<jumlahdepan;i++) {
		storage[i] = depan1[i] % 10;
	} //algoritma memisah digit depan

	int ttk = jumlahdepan + 1; //menambah satu index untuk menyimpan titik setelah bagian depan float

	storage[ttk - 1] = 10; //menyimpan titik ke dalam array

	if(countb == 0) {
		jumlahbelakang = jumlahbelakang + 2;
	} //untuk menambah jumlah digit belakang jika belakang = 0

	if(countb < 10 && countb > 0) {
		jumlahbelakang = jumlahbelakang + 1;
	} //untuk menambah jumlah 1 digit jika belakang lebih besar dari 0 dan kurang dari 10

	while(countb > 0) {
		countb = (countb - (countb%10))/10;
		jumlahbelakang++;
	} //algoritma menghitung jumlah digit belakang

	int belakang1[jumlahbelakang]; //varaibel untuk menampung angka untuk proses memisah digit depan

	for(i=jumlahbelakang - 1;i>=0;i--) {
		if (belakang == 0) {
			belakang1[i] = 0;
		} //jika belakang = 0, maka belakang1 = 0 agar bisa dimasukkan sebagai digit ke dalam array
		belakang1[i] = belakang;
		belakang = (belakang -(belakang%10))/10;
	} //algoritma memisah digit belakang

	int total = ttk + jumlahbelakang; //total jumlah digit = digit depan + titik + digit belakang

	int x = 0;

	for(i=ttk;i<total;i++) {
		storage[i] = belakang1[x] % 10;
		x++;
	} //algoritma memasukkan digit belakang ke dalam array

	int j;
	int m;
	int y;
	int a = 0;
	int u;
	int p;
	int chk[total];
	int chk2[total];
	int chk3[total];

	for(i=0;i<total;i++) {
		chk[i] = 0;
		chk2[i] = 0;
		chk3[i] = 0;
	} //algoritma mengubah seluruh nilai dalam array = 0

	for(i=0;i<total;i++) {
		if(storage[i] == 0 || storage[i] == 1 || storage[i] == 7 || storage[i] == 10) {
			chk[i] = 1;
		}else if(storage[i] != 0 || storage[i] != 1 || storage[i] != 7 || storage[i] != 10) {
			chk[i] = 0;
		}
	} //cek jika digit = 0, 1, 7, atau 10

	for(i=0;i<total;i++) {
		if(chk[i] == 0) {
			a = 1;
			while(a <= i) {
				chk[i - a] = 0;
				a++;
			}
		}
	} //mengubah seluruh cek menjadi 0 dibelakang angka selain 0, 1, 7, 10

	for(i=0;i<total;i++) {
		if(storage[i] == 1 || storage[i] == 4 || storage[i] == 10) {
			chk2[i] = 1;
		} else if (storage[i] != 1 || storage[i] != 4 || storage[i] != 10) {
			chk2[i] = 0;
		}
	} //cek jika digit = 1, 4, atau 10

	for(i=0;i<total;i++) {
		if(chk2[i] == 0) {
			u = 1;
			while(u <= i) {
				chk2[i - u] = 0;
				u++;
			}
		}
	} //mengubah seluruh cek menjadi 0 dibelakang angka selain 1, 4, 10

	for(i=0;i<total;i++) {
		if(storage[i] == 1 || storage[i] == 7) {
			chk3[i] = 1;
		} else if (storage[i] != 1 || storage[i] != 7) {
			chk3[i] = 0;
		}
	} //cek jika digit = 1 atau 7

	for(i=0;i<total;i++) {
		if(chk3[i] == 0) {
			p = 1;
			while(p <= i) {
				chk3[i - p] = 0;
				p++;
			}
		}
	} //mengubah seluruh cek menjadi 0 dibelakang angka selain 1 dan 7

	for(i=0;i<5;i++) { //line 1-5
		for(j=0;j<n;j++) { //baris
			for(a=0;a<total;a++) { //digit
				if(a < (total - 1)) {
					if(i == 0) {
					    if(chk2[a+1] == 1) { //agar tidak print spasi
					        if(storage[a] == 0 || storage[a] == 2 || storage[a] == 5 || storage[a] == 6 || storage[a] == 8 || storage[a] == 9) {
					            pola2bzo(n);
					        }
					        if(storage[a] == 3) {
					            start(n);
					        }
    						if(storage[a] == 7) {
    							pola5end(n);
    						}
					    } else {
    						if(storage[a] == 0 || storage[a] == 2 || storage[a] == 5 || storage[a] == 6 || storage[a] == 8 || storage[a] == 9) {
    							pola2(n);
    							spasi(n);
    						}
    						if(storage[a] == 1 || storage[a] == 10) {
    							spasi(n);
    							spasi(n);
    						}
    						if(storage[a] == 3) {
    						    pola2start(n);
    						    spasi(n);
    						}
    						if(storage[a] == 4) {
    						    pola0(n);
    						    spasi(n);
    						}
    						if(storage[a] == 7) {
    							pola5(n);
    							spasi(n);
    						}
					    }
					}
					if(i == 1) {
						if(storage[a] == 0 || storage[a] == 4 || storage[a] == 8 || storage[a] == 9) {
							pola4(n);
							spasi(n);
						}
						if(storage[a] == 1) {
							start(n);
							spasi(n);
						}
						if(storage[a] == 2 || storage[a] == 7) {
							pola3(n);
							spasi(n);
						}
						if(storage[a] == 3) {
						    pola2end(n);
						    spasi(n);
						}
						if(storage[a] == 5 || storage[a] == 6) {
							pola1(n);
							spasi(n);
						}
						if(storage[a] == 10) {
    						spasi(n);
    						spasi(n);
    					}
					}
					if(i == 2) {
						if(chk[a+1] == 1) { //agar tidak print spasi
							if(storage[a] == 2 || storage[a] == 4 || storage[a] == 5 || storage[a] == 6 || storage[a] == 8 || storage[a] == 9) {
								pola2bzo(n);
							}
							if(storage[a] == 3) {
						        start(n);
						    }
						} else {
						    if(storage[a] == 0 || storage[a] == 7) {
						        pola0(n);
						        spasi(n);
						    }
						    if(storage[a] == 1 || storage[a] == 10) {
						        spasi(n);
						        spasi(n);
						    }
						    if(storage[a] == 2 || storage[a] == 4 || storage[a] == 5 || storage[a] == 6 || storage[a] == 8 || storage[a] == 9) {
							    pola2(n);
							    spasi(n);
						    }
						    if(storage[a] == 3) {
						        pola2start(n);
						        spasi(n);
						    }
						}
					}
					if(i == 3) {
						if(storage[a] == 0 || storage[a] == 6 || storage[a] == 8) {
							pola4(n);
							spasi(n);
						}
						if(storage[a] == 1) {
							start(n);
							spasi(n);
						}
						if(storage[a] == 2) {
							pola1(n);
							spasi(n);
						}
						if(storage[a] == 3) {
						    pola2end(n);
						    spasi(n);
						}
						if(storage[a] == 4 || storage[a] == 5 || storage[a] == 7 || storage[a] == 9) {
						    pola3(n);
						    spasi(n);
						}
						if(storage[a] == 10) {
    						spasi(n);
    						spasi(n);
    					}
					}
					if(i == 4) {
						if(chk3[a+1] == 1) { //agar tidak print spasi
							if(storage[a] == 0 || storage[a] == 2 || storage[a] == 5 || storage[a] == 6 || storage[a] == 8 || storage[a] == 9) {
								pola2bzo(n);
							}
							if(storage[a] == 3 || storage[a] == 10) {
						    	start(n);
							}
							if(storage[a] == 4) {
						    	pola3(n);
							}	
						} else {
							if(storage[a] == 0 || storage[a] == 2 || storage[a] == 5 || storage[a] == 6 || storage[a] == 8 || storage[a] == 9) {
								pola2(n);
								spasi(n);
							}
							if(storage[a] == 1) {
								spasi(n);
								spasi(n);
							}
							if(storage[a] == 3) {
							    pola2start(n);
							    spasi(n);
							}
							if(storage[a] == 4) {
							    pola3(n);
							    spasi(n);
							}
	    					if(storage[a] == 7) {
						        pola0(n);
						        spasi(n);
						    }
						    if(storage[a] == 10) {
								start(n);
								spasi(n);
							}	
						}
					}
				}	
				if(a == (total-1)) { //khusus digit terakhir agar tidak print spasi
					if(i == 0) {
						if(storage[a] == 0 || storage[a] == 2 || storage[a] == 5 || storage[a] == 6 || storage[a] == 8 || storage[a] == 9) {
							pola2end(n);
						}
						if(storage[a] == 3) {
						    start(n);    
						}
    					if(storage[a] == 7) {
    						pola5end(n);
    					}
					}
					if(i == 1) {
						if(storage[a] == 0 || storage[a] == 4 || storage[a] == 8 || storage[a] == 9) {
							pola4(n);
						}
						if(storage[a] == 1 || storage[a] == 5 || storage[a] == 6) {
							start(n);
						}
						if(storage[a] == 2 || storage[a] == 7) {
							pola3(n);
						}
						if(storage[a] == 3) {
						    pola2end(n);   
						}
					}
					if(i == 2) {
						if(storage[a] == 2 || storage[a] == 4 || storage[a] == 5 || storage[a] == 6 || storage[a] == 8 || storage[a] == 9) {
							pola2end(n);
						}
						if(storage[a] == 3) {
						    start(n);   
						}
					}
					if(i == 3) {
						if(storage[a] == 0 || storage[a] == 6 || storage[a] == 8) {
							pola4(n);
						}
						if(storage[a] == 1 || storage[a] == 2) {
							start(n);
						}
						if(storage[a] == 3) {
						    pola2end(n);   
						}
						if(storage[a] == 4 || storage[a] == 5 || storage[a] == 7 || storage[a] == 9) {
						    pola3(n);   
						}
					}
					if(i == 4) {
						if(storage[a] == 0 || storage[a] == 2 || storage[a] == 5 || storage[a] == 6 || storage[a] == 8 || storage[a] == 9) {
							pola2end(n);
						}
						if(storage[a] == 3) {
						    start(n);   
						}
						if(storage[a] == 4) {
						    pola3(n);   
						}
					}
				}
			}
			printf("\n");
		}	
	}
}
	
