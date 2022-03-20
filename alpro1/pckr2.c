#include <stdio.h>
int main () {
	//deklarasi variabel unuk menampul karakter dan angka
	int n;
	char bes;
	int baris;
	int kolom;

	//meminta user untuk memasukkan angka dan bilangan
	scanf("%d", &n);
	scanf(" %c", &bes);
	//Syarat jika karakter 'bes' adalah vokal kapital atau tidak kapital
	if((bes == 'a') || (bes == 'i') || (bes == 'u') || (bes == 'e') || (bes == 'o') || 
		(bes == 'A') || (bes == 'I') || (bes == 'U') || (bes == 'E') || (bes == 'O')){
		//membuat perulangan jumlah baris yang diperukan sesuai dengan angka 'n'
		for(baris = 1; baris <= n; baris++){
			//membuat perulangan jumlah spasi pada kolom sesuai dengan 'n'
				for (kolom = 1; kolom <= n; kolom++){
				printf(" ");
				}
				//membuat perulangan jumlah '*' pada kolom sesuai dengan 'n'
				for(kolom = 1; kolom<= n; kolom++){
				printf("*");
				}
				//membuat perulangan jumlah spasi '    ' pada kolom sesuai dengan 'n' 
				for(kolom = 1;kolom <= n;kolom++){
				printf("    ");
				}
				//membuat perulangan jumlah '*' pada kolom sesuai dengan  'n'
				for(kolom = 1; kolom <= n;kolom++){
				printf("*");
				}
				//Syarat jika baris = 1
				if(baris == 1){
					//Jika baris = 1 maka membuat perulangan jumlah '*' sesuai dengan 'n'
					for(kolom = 1; kolom <= n;kolom++){
					printf("*");
					}
				}
				//Syarat jika baris tidak sama dengan 1 dan nilai n
				if(baris != 1 && baris != n){
					//Jika syarat terpenuhi maka membuat perulangan jumlah ' ' selain baris pertama dan 'nsesuai dengan 'n'
					for(kolom = 1; kolom <= n; kolom++){
					printf(" ");
					}
				}
				//Syarat jika baris tidak sama dengan 1 dan nilai n
				if(baris != 1 && baris != n){
					//Jika syarat terpenuhi maka membuat perulangan pada kolom selain baris pertama dan 'n' jumlah '*' 
					for(kolom = n;kolom <= n;kolom++){
					printf("*");
					}
				}
				//Syarat jika baris = 'n'
				if(baris == n){
					//jika syarat terpenuhi maka  maka  membuat perulangan pada kolom 'n' dengan jumlah '*'
					for(kolom = 1; kolom <= n;kolom++){
					printf("*");
					}
				}
			printf("\n");
		}
		//Membuat perulangan baris
			for(baris = 1; baris <= n; baris++){
				//Membuat perulangan ' 'pada kolom dengan jumlah 'n' 
				for (kolom = 1; kolom <= n; kolom++){
					printf(" ");
				}
				//membuat perulangan  ' ' pada kolom dengan jumlah 'n'
				for(kolom = baris;kolom <= baris;kolom++){
					printf(" ");
				}
				//membuat perulangan '  ' pada kolom dengan jumlah 'n-baris+1' 
				for(kolom = n-baris+1; kolom < n;kolom++){
					printf("  ");
				}
				//membuat perulangan '*' pada kolom dengan jumlah 'n-baris' dimana setiap barisnya akan berkurang 1
				for(kolom = n-baris; kolom >= 0;kolom--){
					printf("*");
				}
				//Syarat jika baris = 'n'
				if(baris == n){
					//membuat perulangan '**' pada kolom dengan jumlah 'n'
					for(kolom = 1;kolom <= n;kolom++){
						printf("**");
					}
				}
				//Syarat jika baris tidak sama dengan 'n'
				if(baris != n){
					//membuat perulangan '.,' pada kolom dengan jumlah 'n-baris' dimana dari baris pertama akan berkurang 2 '.,' hingga baris 'n'
					for(kolom = n-baris; kolom>=1; kolom--){
					printf(".,");
				}
				//membuat perulangna '.,' pada kolom dengan jumlah 'n'
					for(kolom > 1; kolom < n;kolom++){
					printf(".,");
					}
				}
				//membuat perulangan '*' pada kolom dengan jumlah 'n-baris' dimana pada setiap baris akan berkurang jumlah'*' 
				for(kolom = n-baris; kolom >= 0;kolom--){
					printf("*");
				}
				printf("\n");
			}
			//Membuat perulangan baris dengqn jumlah baris kurang dari sama dengan2
			for(baris = 1; baris <= 2;baris++){
				//Syarat jika baris = 1
				if(baris == 1){
					//Membuat perulangan '----' pada kolom dengan jumlah dimulai dari 0 hingga n (0 dihitung 1)
					for(kolom = 0; kolom <= n;kolom++){
					printf("----");
					}
				}
				//Syarat jika baris tidak sama dengan 1
				if (baris != 1){
					//Membuat perulangan ' ' pada kolom dengan jumlah kurang dari sama dengan 2
					for(kolom = 1;kolom <= 2;kolom++){
					printf(" ");
					}
					//membuat perulangan '----' pada kolom dengan jumlah dimulai dari 0 hingga n (0 dihitung 1)
					for(kolom = 0;kolom <= n;kolom++){
					printf("----");
					}
				}
				//membuat perulangan '----' pada kolom dengan jumlah 'n-baris' dimana setiap baris berkurang 1
				for(kolom = n-baris; kolom >= 1;kolom--){
					printf("----");
				}
				printf("\n");
			}
	//Syarat jika tidak terpenuhi maka karakter adalah konsonan kapital atau tidak kapital
	} else if((bes != 'a') || (bes != 'i') || (bes != 'u') || (bes != 'e') || (bes != 'o') ||
		(bes != 'A') || (bes != 'I') || (bes != 'U') || (bes != 'E') || (bes != 'O')) {
		for(baris = 1; baris <= n; baris++){
				for (kolom = 1; kolom <= n; kolom++){
				printf(" ");
				}
				for(kolom = 1; kolom<= n; kolom++){
				printf("*");
				}
				for(kolom = 1;kolom <= n;kolom++){
				printf(".,.,");
				}
				for(kolom = 1; kolom <= n;kolom++){
				printf("*");
				}
				if(baris == 1){
					for(kolom = 1; kolom <= n;kolom++){
					printf("*");
					}
				}
				if(baris != 1 && baris != n){
					for(kolom = 1; kolom <= n; kolom++){
					printf(" ");
					}
				}
				if(baris != 1 && baris != n){
					for(kolom = n;kolom <= n;kolom++){
					printf("*");
					}
				}
				if(baris == n){
					for(kolom = 1; kolom <= n;kolom++){
					printf("*");
					}
				}
			printf("\n");
			}
			for(baris = 1; baris <= n; baris++){
				for (kolom = 1; kolom <= n; kolom++){
					printf(" ");
				}
				for(kolom = baris;kolom <= baris;kolom++){
					printf(" ");
				}
				for(kolom = n-baris+1; kolom < n;kolom++){
					printf("  ");
				}
				for(kolom = n-baris; kolom >= 0;kolom--){
					printf("*");
				}
				if(baris == n){
					for(kolom = 1;kolom <= n;kolom++){
						printf("**");
					}
				}
				if(baris != n){
					for(kolom = n-baris; kolom>=1; kolom--){
					printf(".,");
					}
					for(kolom > 1; kolom < n;kolom++){
					printf(".,");
					}
				}
				for(kolom = n-baris; kolom >= 0;kolom--){
					printf("*");
				}
				printf("\n");
			}
			for(baris = 1; baris <= 2;baris++){
				if(baris == 1){
					for(kolom = 0; kolom <= n;kolom++){
					printf("----");
					}
				}
				if (baris != 1){
					for(kolom = 1;kolom <= 2;kolom++){
					printf(" ");
					}
					for(kolom = 0;kolom <= n;kolom++){
					printf("----");
					}
				}
				for(kolom = n-baris; kolom >= 1;kolom--){
					printf("----");
				}
				printf("\n");
			}
		}//menutup else if
		return 0;
/*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi TP4 Pola Cangkir Kopi Mang Oleh (PCKR20) dalam mata kuliah Alpro 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/		
}//menutup main