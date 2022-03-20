#include<stdio.h>
#include<string.h>
typedef struct{
	char huruf[100];//variabel untuk menampung string inputan
	char gan;//variabel untuk menampung huruf yang akan diganti
	char udh;//variabel huruf untuk mengganti huruf
	char baru[100];//variabel untuk menampung string yang sudah diganti hurufnya
	int inde;//variabel untuk menampung indeks jika indeks tersebut mempunyai isi huruf yang sama dengan variabel gan
	int inde2;//variabel untuk menampung ideks jika indeks tersebut mempunyai isi huruf yang sama dengan variabel udh
	int asci;//variabel untuk menampung ascii tiap karakter
	char barul[100];//variabel untuk menampung string dengan jumlah ascii  ganjil
	char barug[100];//varaibel untuk menampung string dengan jumlah ascii genap
}var;//dekalrasi nama tipe data terstruktur
int main () {
	int n, i, j;//deklarasi iterator
	n = 0;
	var input[100];//deklarasi tipe data terstruktur dengan array
	do{
		scanf("%s", &input[n].huruf);//meminta user untuk memasukkan string
		if(strcmp(input[n].huruf, "santuy") != 0){
			scanf(" %c %c", &input[n].gan, &input[n].udh);//meminta user untuk memasukkan char
			n++;
		}//syarat jika string tidak sama dengan "santuy"
	}while(strcmp(input[n].huruf, "santuy") != 0);//looping akan berhenti jika string memasukkan input "santuy"

	int count1;
	int count2;
	i=0;
	while(i<n){//proses menyimpan indeks yang diperlukan
		j=0;
		count1 = 0;
		count2 = 0;
		while(j<strlen(input[i].huruf)){
			if((input[i].huruf[j] == input[i].gan) && count1 == 0){//syarat jika ada huruf pada string yang sama dengan variabel gan dan counter = 0;
				input[i].inde = j;//menyimpan indeks jika syarat terpenuhi
				count1++;
			}else if((input[i].huruf[j] == input[i].udh) && count2 == 0){
				input[i].inde2 = j;//menyimpan indeks jika syarat terpenuhi	
				count2++;
				}//syarart jika ada huruf pada string yang sama dengan variabel udh dan count2 = 0
			j++;
		}//looping akan terus terjadi selama tidak melebihi panjang string 
		if(count2 == 0){
			input[i].inde2 = 50;//code untuk menampung nilai indeks jika syarat terpenuhi
		}//syarat jika huruf pada string tidak mempunyai huruf pada variabel udh
		i++;
	}//looping akan terus terjadi selama tidak melebihi n
	i=0;
	while(i<n){//proses pengubahan huruf pada string
		if(input[i].inde2 == 50){
			j=0;
			while(j<strlen(input[i].huruf)){//syarat mengubah semua huruf pada string jika syarat dibawah terpenuhi
				if(input[i].huruf[j] == input[i].gan){//syarat jika string tersebut memiliki huruf yang sama dengan variabel gan
					input[i].baru[j] = input[i].udh;//mengganti huruf pada string tersebut dengan variabel udh
				}else if (input[i].huruf[j] != input[i].gan){//syarat jika string tersebut tidak memiliki huruf yang sama dengan variabel gan
					input[i].baru[j] = input[i].huruf[j];//memasukkan huruf pada string baru dengan huruf pada string input
				}
				j++;
			}//syarat jika pada string tidak mempunyai satu huruf pada variabel udh
			input[i].baru[j] = '\0';//deklarasi null untuk menaruh null pada indeks terakhir
		}else if(input[i].inde > input[i].inde2){//syarat jika indeks huruf yang akan diganti melebihi indeks huruf yang akan diganti maka tidak ada perubahan
			strcpy(input[i].baru, input[i].huruf);//proses copy/menyalin string dari string huruf ke string baru
		}else if(input[i].inde < input[i].inde2){
			j=0;
			while(j<strlen(input[i].huruf)){
				if(j<input[i].inde2){//proses mengubah huruf pada string sebagian saja jika syarat dibawah terpenuhi
					if(input[i].huruf[j] == input[i].gan){
						input[i].baru[j] = input[i].udh;
					}else if (input[i].huruf[j] != input[i].gan){
						input[i].baru[j] = input[i].huruf[j];
					}//syarat jika indeks tidak melebihi nilai pada inde2 maka akan memasuki proses if
				}else if(j>= input[i].inde2){//syarat jika indeks melebihi nilai inde2
					input[i].baru[j] = input[i].huruf[j];
				}
				j++;
			}//syarat jika indeks huruf yang akan diganti tidak melebihi indeks huruf yang akan diganti maka akan melakukan proses pengubahan huruf pada string
			input[i].baru[j] = '\0';
		}
		i++;	
	}
	i=0;
	while(i<n){
		input[i].asci = 0;//membuat nilai variabel ascii menjadi 0
		i++;
	}
	int a = 0, b = 0;
	i=0;
	while(i<n){//proses untuk menemukan nilai ascii pada huruf tiap string
		j=0;
		while(j<strlen(input[i].baru)){
			input[i].asci += input[i].baru[j];//proses menjumlahkan nilai ascii pada tiap huruf pada string baru
				j++;
			}
			if(input[i].asci % 2 == 0){//syarat jika nilai ascii pada string baru bernilai genap
				strcpy(input[a].barug, input[i].baru);//melakukan proses untuk menyimpan string untuk genap jika nilai ascii bernilai genap
				a++;//iterator untuk string genap
			}else if(input[i].asci % 2 == 1){//syarat jika nilai ascii pada string baru bernilai ganjil
				strcpy(input[b].barul, input[i].baru);//melakukan proses menyalin untuk string ganjil jika syarat di atas terpenuhi
				b++;//iterator untuk string ganjil
		}
		i++;
	}
	printf("=== KATA BAKU ===\n");
	i=0;
	while(i<a){
		printf("%s\n", input[i].barug);//menampilkan string jika nilai ascii pada string bernilai genap
		i++;
	}
	if(a == 0){//jika tidak ada string dengan nilai ascii bernilai genap
		printf("TIDAK ADA.\n");
	}
	printf("\n");
	printf("=== KATA NON BAKU ===\n");
	i=0;
	while(i<b){
		printf("%s\n", input[i].barul);//menampilkan string jika nilai ascii pada string bernilai ganjil
		i++;
	}
	if(b == 0){//syarat jika tidak ada string dengan nilai ascii bernilai ganjil
		printf("TIDAK ADA.\n");
	}
	return 0;
/*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi TP8 Kamus Besar Perusahaan While (KBPW2020) dalam mata kuliah Alpro 1
 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
}