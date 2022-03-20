#include<stdio.h>
int main() {
	int n;//panjang angka
	int i;//iterator
	scanf("%d", &n);//meminta user untuk memasukkan angka
	int x[n];//array untuk menampung paket angka pertama 
	int y[n];//array untuk menampung paket angka kedua
	for(i=0;i<n;i++){
		scanf("%d", &x[i]);
	}//menampung angka sebanyak n untuk paket pertama
	for(i=0;i<n;i++){
		scanf("%d", &y[i]);
	}//menampung angka sebanyak n untuk paket kedua
	int m;//banyaknya indeks yang ingin ditukar
	scanf("%d", &m);//meminta user untuk memasukkan angka
	int z[m];//array untuk menampung jumlah indeks yang ingin ditukar
	int swp;//variabel untuk menukar angka antar array
	for(i=0;i<m;i++){
		scanf("%d", &z[i]);//meminta user untuk memasukkan angka
		swp = x[z[i]];//rumus untuk sebelum menukar angka antar array untuk paket pertama
		x[z[i]] = y[z[i]];//rumus untuk menukar angka antar array
		y[z[i]] = swp;//rumus untuk sebelum menukar angka antar array untuk paket kedua
	}

	int count = n/2;//ini untuk menampung separuh dari element array
	for(i=0;i<count;i++){
		printf("%d %d", x[i], y[i]);//menampilkan angka yang sudah ditukar indeksnya
		if(i != count-1) printf(" ");/*syarat jika nilai iterator tidak sama dengan jumlah count dikurangkan dengan 
									satu maka diberikan sebuah spasi*/
	}
	printf("\n");//perintah untuk membuat baris baru
	for(i=count;i<n;i++){
		printf("%d %d", x[i], y[i]);//menampilkan angka yang sudah ditukar indeksnya
		if(i != n-1) printf(" ");/*syarat jika nilai iterator tidak sama dengan jumlah n dikurangkan dengan 
									satu maka diberikan sebuah spasi*/
	}
	printf("\n");//perintah untuk membuat baris baru

	return 0;//menghentikan eksekusi code
/*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi UTS Horre Array mau Libur (arrlib20)dalam mata kuliah Alpro 1
 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
}