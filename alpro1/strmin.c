#include <stdio.h>
#include <string.h>
int main () {
	char str[200];//deklarasi variabel string
	int n, i, j;//deklarasi iterator
	scanf("%s", str);//meminta user untuk memasukkan string
	scanf("%d", &n);//meminta user untuk memasukkan angka
	char huruf[n];//deklarasi array char
	int min[n];//deklarasi array integer
	int count[n];//deklarasi array integer
	i=0;
	while(i<n){
		scanf(" %c %d", &huruf[i], &min[i]);//meminta user untuk memasukkan ahuruf dan angka
		i++;
	}//melakukan perulangan sebanyak n
	for(i=0;i<n;i++){
		count[i]=0;//iterator untuk menhgitung jumlah huruf yang ada
		for(j=0;j<strlen(str);j++){
			if(str[j] == huruf[i]){//syarat jika string memiliki huruf yang sama dengan variabel huruf[i]
				count[i]++;
			}
		}
	}
	for(i=0;i<n;i++){
		if(count[i] >= min[i]){//syarat jika jumlah huruf yang sama melebihi batas minimal input yang diinginkan
			printf("aku sih yes\n");
		}else{
			printf("aku sih no\n");
		}
	}
	return 0;
/*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi Kuis String Huruf Minimal (STRMIN20) dalam mata kuliah Alpro 1
 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/	
}