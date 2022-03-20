#include <stdio.h>
int main () {
	int i;//iterator
	int n;//panjang kata
	scanf("%d", &n);//untuk menginput banyak karakter yang akan dimasukkan
	char x[n];//ini array untuk menampung karakter sebelum di geser
	char y[n];//ini array untuk menampung karakter yang sudah digeser
	int angka;//ini variabel untuk menampung kode ascii nya
	int count = (n/26)+1;//ini untuk menghitung ada berapa kali karakter melampaui batas ketika digeser sebanyak n
	int j;//variabel ini untuk menghitung akan berapa terjadi pengulangan
	for(i = 0;i < n;i++){
		scanf(" %c", &x[i]);
	}//ini untuk menginput karakter sebanyak n

	for(i = 0;i < n;i++){/*ini untuk mengetes semua karakter yang telah diinput jadi yang pertama dia mengambil karakter pertama dan dijalankan, setelah 
		selesai, dia akan mengulangi prosesnya untuk karakter berikutnya dan begitu seterusnya, sampai dia mencapai batas yang telah ditentukan yaitu n*/
		angka = x[i];/*ini berfungsi untuk mengubah tiap kaarakter menjadi bilangan integer agar tidak jadi kerancuan terhadap rumus
		dan juga mengubah karakter menjadi integer mempunyai kkelebihan karena tidak memiliki batasan bilangannya*/
		if((x[i] > 64) && (x[i] < 91)){//ini kondisi jika karakter termasuk huruf kapital maka ia akan masuk ke operasi didalam if nya
			angka = x[i]-n;//disini untuk menggeser integer bilangannya sesuai dengan syarat yaitu digeser sebanyak n
			 for(j = 0;j < count;j++){//ini untuk menghitung ada berapa kali dia melampaui batas dan kembali lagi ke Z
			 	if(angka < 65) {//ini persyaratan untuk karakter yang sudah melewati batas A
			 		angka =((angka + n)+26)-n;//ini untuk mengembalikannya jika ia mundur dan sudah pada batas A dan dia kembali lagi ke Z
			 	}
			}
			y[i] = angka;//ini merupakan array yang menampung semua karakter yang sudah digeser
		}else if((x[i] > 96) && (x[i] < 123)) {//sedangkan ini kondisi jika karakter termasuk huruf kecil, jadi if disini untuk memisahkan huruf kapital dan kecil
			angka = x[i] + n;/*ini berfungsi untuk mengubah tiap kaarakter menjadi bilangan integer agar tidak jadi kerancuan terhadap rumus
			dan juga mengubah karakter menjadi integer mempunyai kkelebihan karena tidak memiliki batasan bilangannya*/
			for(j = 0;j < count;j++){//ini untuk menghitung ada berapa kali dia melampaui batas dan kembali lagi ke a
				if(angka > 122){//ini persyaratan untuk karakter yang sudah melewati batas z
					angka = ((angka - n)-26)+n;//ini untuk mengembalikannya jika ia maju dan sudah pada batas z dan dia kembali lagi ke a
				}
			}
			y[i] = angka;//ini merupakan array yang menampung semua karakter yang sudah digeser
		}
	}
	for(i = 0;i < n;i++){//ini pengulangan i sebanyak n
		printf("%c", y[i]);//ini untuk menampilkan semua karakter yang sudah kita geser
	}
	printf("\n");//dan ini untuk membuat new line agar terlihat rapi dan juga agar memenuhi jawaban soal
	return 0;//sebaiknya menggunakan ini untuk menghentikan pengeksekusian kodenya
/*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi TP5 Tamtam Geser (TTG2020) dalam mata kuliah Alpro 1
 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
}