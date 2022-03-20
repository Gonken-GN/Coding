#include<stdio.h>
#include<string.h>

/*
Saya Muhammad Aditya Hasta Pratama 2000360 mengerjakan soal kompetisi Kuis2 (strmin20) Alpro1 2020 C1 dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
*/

int main(){
		
		/* Input Kalimat Utama */
		char str[200];		//Deklarasi string 					
		scanf("%s", &str);	//Meminta user memasukan kalimat utama
		
		/* Meminta user memasukan kotak sebanyak n untuk mencari huruf dan banyaknya huruf */
		int n;				//deklarasi kotak		
		scanf("%d", &n); 	//meminta user berapa banyak kotak
		
		char huruf[50];	//deklarasi huruf yang akan dicari
		int banyak[50];	//deklarasi banyaknya huruf minimal
		
		/* Pengulangan untuk input user */
		int i;
		i=0;
		while(i<n)
		{
			scanf("%s %d", &huruf[i], &banyak[i]);	//meminta user menginput huruf dan minimal banyak huruf
			i++; //increment untuk pengulangan
		}
		
		int j;
		int jumlah_huruf[50];
		jumlah_huruf[i] = 0;
		for(i=0; i<strlen(str);i++){
			
			if(huruf[i] == str[i]){
			jumlah_huruf[i]++;
			printf("jumlah huruf : %d\n", jumlah_huruf);
			}
			
			if(jumlah_huruf[i] >= banyak[i]){
				printf("aku sih yes");
			}else{
				printf("aku sih no");
			}
			printf("\n");
		}

	//Menghentikan operasi program
	return 0;
}