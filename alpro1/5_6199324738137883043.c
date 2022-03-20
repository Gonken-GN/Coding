#include<stdio.h>
#include<string.h>

typedef struct{
	char kata[100];
	char katabaru[100];
	char pengganti;
	char diganti;
	char baku[100];
	char tidakbaku[100];
	int pgt;
	int dgt;
	int hasiljumlah;
}bungkus;


int main()
{

	//deklarasi variabel
	int n, i, j, k, l, cek1, cek2, panjang[100];
	n=0;
	bungkus input[50];

	//meminta masukan user
	do
	{
		scanf("%s", &input[n].kata);
		if(strcmp(input[n].kata, "santuy") != 0){
			scanf(" %c", &input[n].diganti);
			scanf(" %c", &input[n].pengganti);
			panjang[n]=strlen(input[n].kata);
			n++;
		}
	}while(strcmp(input[n].kata, "santuy") != 0);

	//menyimpan indeks mana saja yang memenuhi syarat penggantian
	i=0;
	while(i<n)
	{
		j=0;
		cek1=0;
		cek2=0;
		while(j<panjang[i]){
			if(input[i].kata[j]==input[i].diganti && cek1<1){
				input[i].dgt=j;
				cek1++;
			}else if(input[i].kata[j]==input[i].pengganti && cek2<1){
				input[i].pgt=j;
				cek2++;

			}
			printf("%d %d\n", input[i].dgt, input[i].pgt);
			j++;
		}
		if(cek2==0){
			input[i].pgt=99;
		}
		i++;
	}

	//mengganti kata yang memenuhi syarat
	i=0;
	while(i<n)
	{
		if(input[i].pgt==99){
			j=0;
			while(j<panjang[i]){
				if(input[i].kata[j]==input[i].diganti){
					input[i].katabaru[j]=input[i].pengganti;
				}else if(input[i].kata[j]!=input[i].diganti){
					input[i].katabaru[j]=input[i].kata[j];
				}
				j++;
			}
			input[i].katabaru[j]='\0';
		}else if(input[i].dgt>input[i].pgt){
			strcpy(input[i].katabaru, input[i].kata);
		}else if(input[i].dgt<input[i].pgt){
			j=0;
			while(j<panjang[i]){
				if(j<input[i].pgt){
					if(input[i].kata[j]==input[i].diganti){
						input[i].katabaru[j]=input[i].pengganti;
					}else if(input[i].kata[j]!=input[i].diganti){
						input[i].katabaru[j]=input[i].kata[j];
					}
				}else if(j>=input[i].pgt){
					input[i].katabaru[j]=input[i].kata[j];
				}
				j++;
			}
			input[i].katabaru[j]='\0';
		}
		i++;
	}

/*Test Case
	printf("\n");
	for(i=0; i<n; i++){
		printf("%s\n", input[i].katabaru);
		printf("%d %d\n", input[i].dgt, input[i].pgt);

	}
*/

	//mensetting hasil jumlah=0;
	i=0;
	while(i<n){
		input[i].hasiljumlah=0;
		i++;
	}

	//menjumlahkan setiap huruf pada string lalu mengecek apakah hasilnya ganjil atau genap
	//untuk nanti dimasukan kedalama kata baku
	i=0;
	k=0;
	l=0;
	while(i<n)
	{
		j=0;
		while(j<panjang[i]){
			input[i].hasiljumlah = input[i].hasiljumlah + input[i].katabaru[j];
			j++;
		}
		if(input[i].hasiljumlah %2 == 0){
			strcpy(input[k].baku, input[i].katabaru);
			k++;
		}else if(input[i].hasiljumlah %2 == 1){
			strcpy(input[l].tidakbaku, input[i].katabaru);
			l++;
		}
		i++;
	}

/*Test Case
	printf("\n");
	for(i=0; i<n; i++){
		//printf("%s\n", input[i].baku);
		//printf("%s\n", input[i].tidakbaku);

	}
*/

	//menampilkan output jika hasil genap berarti baku, jika ganjil berarti
	//tidak baku
	printf("=== KATA BAKU ===\n");
	i=0;
	while(i<k){
		printf("%s\n", input[i].baku);
		i++;
	}
	if(k==0){
		printf("TIDAK ADA.\n");
	}
	printf("\n");
	printf("=== KATA NON BAKU ===\n");
	i=0;
	while(i<l){
		printf("%s\n", input[i].tidakbaku);
		i++;
	}
	if(l==0){
		printf("TIDAK ADA.\n");
	}


	return 0;//berhenti
}

/*
Janji
Saya Muhammad Rafi Shidiq 2004222 mengerjakan 	
(KBPW20) Kamus Besar Perusahaan While
dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak
melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin
*/