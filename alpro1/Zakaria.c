#include<stdio.h>
#include<stdbool.h> //Saya Muhammad Zakaria mengerjakan evaluasi TP2 warteg diskon genap ganjil dalam mata kuliah Alpro untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
/*
makanan :
1. Nasi              3k
2. Tempe Mendoan     2k
3. Sate Padang       15k
4. Ayam Geprek       12k
5. Baso Malang       10k
6. Indomie Jumbo     8k
	
Minuman :
1. Es Teh Manis      4k
2. Thai Tea          7k
3. Kopi Abese        5k /*/

int main() {
	int a,b,c,d,e,f;
	int m,n,o,p,q;
	int u,v,w,x,y,z;
	int total,totalfix;
	
	u=true;
	v=true;
	w=true;
	x=true;
	y=true;
	z=true;
	scanf("%d %d\n %d %d\n %d %d", &a, &b, &c, &d, &e, &f) ;
	m=b+d;
		if (a==1) {//jika yang dipilih adalah nasi
			n=3000*b;//harga nasi dikalikan jumlahnya
		}
			else if (a==2) {//jika yang dipilih adalah tempe mendoan
				n=2000*b;//harga tempe mendoan dikalikan jumlahnya
			}
				else if (a==3) {//jika yang dipilih adalah sate padang
					n=15000*b;//harga sate padang dikalikan jumlahnya
				}
					else if (a==4) {//jika yang dipilih adalah ayam geprek
						n=12000*b;//harga ayam geprek dikalikan jumlahnya
					}
						else if (a==5) {//jika yang dipilih adalah baso malang
							n=10000*b;//harga baso malang dikalikan jumlahnya
						}
							else if (a==6) {//jika yang dipilih adalah indomie jumbo
								n=8000*b;//harga indomie jumbo dikalikan jumlahnya
							}
								else if (a<1||a>6)	u=false;
								
		if (b<1) v=false;
		if (c==1) {
			o=3000*d;
		}
			else if (c==2) {
				o=2000*d;
			}
				else if (c==3) {
					o=15000*d;
				}
					else if (c==4) {
						o=12000*d;
					}
						else if (c==5) {
							o=10000*d;
						}
							else if (c==6) {
								o=8000*d;
							}
								else if (c<1||c>6) w=false;
		if (d<1) x=false;
		if (e==1) {//jika yang dipilih adalah Es Teh Manis
			p=4000*f;//harga Es Teh Manis dikalikan jumlahnya
		}
			else if (e==2) {//jika yang dipilih adalah Thai Tea
				p=7000*f;//harga Thai Tea dikalikan jumlahnya
			}
				else if (e==3) {//jika yang dipilih adalah Kopi Abese
					p=5000*f;//harga Kopi Abese dikalikan jumlahnya
				}
					else if(e<1||e>3) y=false;
		if (f<1) z=false;
		total=n+o+p;//harga total sebelum diskon
/* Warteg tersebut mengadakan diskon dengan ketentuan:
Jika jumlah makanan yg dipesan berjumlah ganjil dan minuman berjumlah genap :
Total harga dibawah atau sama dengan 40k diskon 25%
Total harga diatas 40k diskon 50%
Jika jumlah makanan yg dipesan berjumlah genap dan minuman berjumlah ganjil :
Total harga dibawah atau sama dengan 40k diskon 20%
Total harga diatas 40k diskon 40%
Jika jumlah makanan berjumlah ganjil dan minuman berjumlah ganjil atau jumlah makanan berjumlah genap dan minuman berjumlah genap :
Total harga dibawah atau sama dengan 25k diskon 10%
Total harga diatas 25k diskon 20% /*/
	if (m%2==1&&f%2==0) {
		if (total<=40000) {
			totalfix=75*total/100;//harga setelah diskon
			q=25;//nilai diskon
		}
		else {
			totalfix=50*total/100;
			q=50;
		}	
	} 
	else if (m%2==0&&f%2==1) {
		if (total<=40000) {
			totalfix=80*total/100;
			q=20;
		}
		else {
			totalfix=60*total/100;
			q=40;
		}
	}
	else if (m%2==1&&f%2==1) {
		if (total<=25000) {
			totalfix=90*total/100;
			q=10;
		}
		else {
			totalfix=80*total/100;
			q=20;
		}
	}
	else if (m%2==0&&f%2==0) {
		if (total<=25000) {
			totalfix=90*total/100;
			q=10;
		}
		else {
			totalfix=80*total/100;
			q=20;
		}
	}
	
	if (!(u==false||v==false||w==false||x==false||y==false||z==false)) {
	printf("Harga		: %d\n", total);
	printf("Anda Mendapat Potongan %d%%\n", q);
	printf("Total Harga	: %d\n", totalfix);
	}
	else {
		
	}
	return 0;
	
}