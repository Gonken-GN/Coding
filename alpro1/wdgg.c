#include<stdio.h>
int main(){

/*
Saya Muhammad Rafi Shidiq 2004222 mengerjakan (WDGG20) Warteg Diskon Genap Ganjil
dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak
melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin
*/

	//deklarasi variabel
	int mk1, mk2, mn;
	int jmk1, jmk2, jmn1;
	int jmk, jmn;
	int hsd1, hsd2, hsd3, thsd;
	int th, pt;
	char a='%';

	//meminta user memasukan input
	scanf("%d ", &mk1); scanf("%d", &jmk1);
	scanf("%d ", &mk2); scanf("%d", &jmk2);
	scanf("%d ", &mn); scanf("%d", &jmn1);

	//mengecek kondisi makanan pertama
	if(mk1==1){
		hsd1=jmk1*3000;
	}
	else if(mk1==2){
		hsd1=jmk1*2000;
	}
	else if(mk1==3){
		hsd1=jmk1*15000;
	}
	else if(mk1==4){
		hsd1=jmk1*12000;
	}
	else if(mk1==5){
		hsd1=jmk1*10000;
	}
	else if(mk1==6){
		hsd1=jmk1*8000;
	}

	//mengecek kondisi makanan kedua
	if(mk2==1){
		hsd2=jmk2*3000;
	}
	else if(mk2==2){
		hsd2=jmk2*2000;
	}
	else if(mk2==3){
		hsd2=jmk2*15000;
	}
	else if(mk2==4){
		hsd2=jmk2*12000;
	}
	else if(mk2==5){
		hsd2=jmk2*10000;
	}
	else if(mk2==6){
		hsd2=jmk2*8000;
	}

	//mengecek kondisi makanan ketiga
	if(mn==1){
		hsd3=jmn1*4000;
	}
	else if(mn==2){
		hsd3=jmn1*7000;
	}
	else if(mn==3){
		hsd3=jmn1*5000;
	}

	//menghitung harga sebelum didiskon dan banyaknya makanan dan minuman
	thsd=hsd1+hsd2+hsd3;
	jmk=jmk1+jmk2;
	jmn=jmn1;

	//mengecek kondisi jumlah makanan apakah genap atau ganjil
	//kondisi pertama
	if((jmk % 2 != 0) && (jmn % 2 == 0)){
		if(thsd <= 40000){
			th = thsd*0.75;
		}else{
			th = thsd*0.5;
		}
	}
	//kondisi kedua
	if((jmk % 2 == 0) && (jmn % 2 != 0)){
		if(thsd <= 40000){
			th = thsd*0.75;
		}else{
			th = thsd*0.6;
		}
	}
	//kondisi ketiga
	if(((jmk % 2 != 0) && (jmn % 2 != 0)) || ((jmk % 2 == 0) && (jmn % 2 == 0))){
		if(thsd <= 25000){
			th = thsd*0.9;
		}else{
			th = thsd*0.8;
		}
	}		

	//menghitung diskon
	pt=(100*(thsd-th))/thsd;

	printf("Harga       : %d\n", thsd);
	printf("Anda Mendapat Potongan %d%c\n", pt, a);
	printf("Total Harga : %d\n", th);

	return 0;
}