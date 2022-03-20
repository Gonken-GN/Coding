#include<stdio.h>
#include<string.h>

/*
Saya Muhammad Aditya Hasta Pratama 2000360 mengerjakan soal kompetisi UAS (pftbsp20) Alpro1 2020 C1 dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
*/

/*Deklarasi Variabel Global*/
typedef struct
{
    char bentuk[50];
}data;
data input[50]; 	//Maksimal array of string adalah 50

int i,j;	//Iterator
int n;		//Deklarasi banyaknya baris per array of string yang ingin dibuat

/*Deklarasi Prosedur*/
void output1(int data[50], int a1[50], int a2[50]);

//=======================
//#include"tama.h"

int main()
{	
	/*Input baris array of string yang ingin dibuat*/
	scanf("%d",&n);
	
	int a1[50],a2[50];
	
	i=0;
	while(i<n)
	{
		scanf("%d %d %s", &a1[i], &a2[i], input[i].bentuk);
	i++;
	}
	
	int data[50];
	i=0;
	while(i<n)
	{
		data[i]=strcmp(input[i].bentuk, "persegi");
	i++;
	}
	
	//Bahan baku untuk prosedur 1
	output1(data,a1,a2);
	
	//Menghentikan operasi
	return 0;
}

//=======================
//#include"tama.h"
void output1(int data[50], int a1[50], int a2[50])
{
	float hasil[50];
	int tes;
	
	i=0;
	while(i<n)
	{
		if(data[i]==0)
		{
			hasil[i] = a1[i]*a2[i];
			printf("%0.2f\n", hasil[i]);
		}
		else if(data[i]!=0)
		{
			hasil[i] = (a1[i]*a2[i])/2;
			printf("%0.2f\n", hasil[i]);
		}
	i++;
	}
	
	float lokasi = hasil[0];
	for(i=1;i<n;i++){
		if(hasil[i] > lokasi){
			lokasi = hasil[i];
		}
	}
	printf("maksimal: %0.2f\n", lokasi);
}