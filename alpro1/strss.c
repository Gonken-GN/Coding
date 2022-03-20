#include <stdio.h>
#include <string.h>
int main () {
	int i, n, j, panj;//deklarasi iterator 
	scanf("%d", &n);//meminta user untuk memsukkan angka
	char huruf[n][100];//deklarasi array of string

	for(i=0;i<n;i++){
		scanf("%s", huruf[i]);//meminta user untuk memasukkan string
		panj = strlen(huruf[i]);
	}//melakukan perulangan sebanyak n
	int mis = strlen(huruf[0]);
	for(i=0;i<n;i++){
		if(strlen(huruf[i]) < mis){
			mis = strlen(huruf[i]);
		}//proses untuk mencari jumlah huruf pada string paling kecil
	}
	int b = 0;//iterator untuk huruf dari kata string
	for(i=0;i<mis;i++){
		for(j=0;j<i*2;j++){
			printf(" ");
		}//memberikan spasi
		for(j=0;j<n;j++){
			printf("%c", huruf[j][b]);//menampilkan huruf perbaris dan perkolom
			if(j < n-1){
				printf(" ");//membrikan spasi setiap 1 huruf pada baris
			}
		}
		printf("\n");
		b++;
	}//proses untuk menampilkan huruf sebanyak jumlah string terdikit
	for(i=0;i<n;i++){
		if(strlen(huruf[i]) > mis){//syarat jika panjang string melebihi nilai mis
			for(j=mis;j<strlen(huruf[i]);j++){
				printf("%c", huruf[i][j]);//menampilkan huruf dimulai dari indeks yang sama dengan nilai variabel mis
			}
			printf("\n");
		}
	}
	
	return 0;
/*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi Kuis String String Harapan Tersisa (STRMRTSS20) dalam mata kuliah Alpro 1
 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
}