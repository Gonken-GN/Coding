#include <stdio.h>
int main (){
	// Deklarasi variabel untuk menampung angka
	int j1, m1, j2, m2 ,j3, m3, j4, m4;
	int jm1, jm2, jm3, jm4;
	int juma1, juma2, juma3, juma4;
	int counter = 0;
	//Meminta user untuk masukan angka
	scanf("%d %d %d %d %d %d %d %d", &j1, &m1, &j2, &m2, &j3, &m3, &j4, &m4);
	
	jm1 = j1 * 60;
	jm2 = j2 * 60;
	jm3 = j3 * 60;
	jm4 = j4 * 60;
	juma1 = jm1 + m1;
	juma2 = jm2 + m2;
	juma3 = jm3 + m3;
	juma4 = jm4 + m4;
	//syarat pertama 1
	if(juma2 > juma3) {
		if(juma1 <= juma3){
			if(juma2 <= juma4) {
				counter = 1;
			} else if(juma2 >= juma4){
				counter = 1;
			}
		} 
	}
	//syarat kedua
	if(juma1 < juma4) {
		if(juma1 >= juma3){
			if(juma2 >= juma4){
				counter = 1;
			} else if (juma2 <= juma4) {
				counter = 1;
			}
		}
	}
	if (counter == 1){
		printf("hore dibaca si dia\n");
	}else{
		printf("ikhlaskan saja\n");
	}

	 /*Saya Raden Fadhil A.A (2004305) mengerjakan Tugas Pratikum PPU20 dalam mata kuliah Alpro 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/ 
	 return 0;

}