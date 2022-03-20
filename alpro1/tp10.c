#include<stdio.h>
#include<string.h>

/*
Saya Muhammad Aditya Hasta Pratama 2000360 mengerjakan soal kompetisi TP10 Alpro1 2020 C1 dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
*/

/*Deklarasi Variabel Global*/
int i,j;
int cek;

/*Deklarasi Prosedur*/
int masukan();
int output();


//==============================
//#include"tama.h"

int main()
{	
	char input[100];
	scanf("%s", input);
	
	int x = masukan(input);
	if(x == 1)
	{
 	    cek = 1;
	}
    else
	{
        printf("%s", input);
	}

	masukan();
	output();
	
	return 0;
}

//==============================
//#include"tama.h"

int masukan(char input[])
{
	int x;
	x=strlen(input);
	
	int c=0;
	
	for(i=0; i<(x/2); i++)
	{
		if(input[i]==input[x-i-1])
		{
			c=1;
		}
	}
	
	return c;
}

int output(char input[])
{
	int i,j;
	int akhir = strlen(input);
	int awal = strlen(input)/2;
	
	i=0;
	while(i<awal && cek==1)
	{
		if(i == awal)
		{
			j=0;
			while(j<(awal*2)-1)
			{
				printf("%c\n", input);
			}
			j++;
		}
		else
		{
			j=0;
			while(j<(awal))
			{
				printf(" ");
			}
			printf("%c", input);
			j++;
		}
	printf("\n");
	i++;
	}
}