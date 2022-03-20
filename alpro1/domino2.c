#include <stdio.h>
#include <string.h>

int main()
{
	//deklarasi
	int n, i, j, k;
	scanf("%d", &n); //input banyak

	//deklarasi variabel
	char input[n][100];
	//deklarasi variabel untuk mengecek panjang string
	int panjang[n];
	//deklarasi variabel maks untuk mengecek panjang string paling panjang
	int maxPanjang = 0;

	/*input nilai array of string*/
	for (i = 0; i < n; ++i)
	{
		scanf("%s", &input[i]);
		//input panjangnya
		panjang[i] = strlen(input[i]);
		//cek panjangnya
		if(maxPanjang < panjang[i]) {
			maxPanjang = panjang[i];
		}
		printf("%d\n", maxPanjang);
	}
	/*deklarasi array of string baru untuk menampung 
	array of string domino dengan banyak diinisialisasi oleh
	nilai string paling panjang dan panjang karakternya sebanyak string inputan*/
	char tampung[maxPanjang][n];

	//deklarasikan variabel selisih antara panjang string dengan panjang maksimal
	int dif;

	//pindahkan per karakter array of string inputan kedalam tampungan
	/*gunakan perulangan*/


	/*
	5
	halo
	semuanya
	kenalkan
	aku
	dudu

	 sk
	 ee
	 mn
	 ua
	hal d
	ankau
	lyakd
	oanuu

	*/
	for (i = 0; i < maxPanjang; ++i)
	{
		//inisialisasi dengan 0
		dif = 0;
		for (j = 0; j < n; ++j)
		{
			//cari selisih antara panjang string dengan panjang maksimal string ditambah i
			dif = panjang[j] - maxPanjang + i;
			//jika nilai dif lebih dari sama dengan 0, pindahkan karakter stringnya
			if (dif >= 0)
			{
				tampung[i][j] = input[j][dif];
			}
			//jika tidak, masukkan spasi pada tampungan
			else{
				tampung[i][j] = ' ';
			}
		}
	}

	printf("\n");
	//tampilkan string secara per karakter
	for (i = 0; i < maxPanjang; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			//jika bukan spasi tampilkan karakter stringnya
			if (tampung[i][j] != ' ')
			{
				printf("%c", tampung[i][j]);
			}
			//jika tidak
			else{
				/*cek karakter string berikutnya di baris itu
				jika menemukan huruf didepannya, tampilkan spasi*/
				int ada = 0;
				
				k = j;
				while((k < n) && (ada == 0)) {
				    if ((tampung[i][k] >= 'a') && (tampung[i][k] <= 'z'))
				    {
				    	ada = 1;
				    }
				    k++;
				}
				if (ada == 1)
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}

	return 0;
}