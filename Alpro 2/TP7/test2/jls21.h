#include<stdio.h>
#include<string.h>

/*Saya FAJRI MAULANA ISKANDAR 2009576 mengerjakan TP7 ALPRO 2 dalam mata kuliah Algoritma dan Pemrograman
      untuk keberkahanNya maka saya tidak melakukan kecurangan
      seperti yang telah dispesifikasikan. Aamiin*/

typedef struct{
	char name[50];
	int score[50];
	float average;
	int m;
	int amount;
}extracurricular;

int i,j;
int found;
int tag;
void insertion(int n, extracurricular arr[]);
void print(int n, extracurricular arr[]);
void sequential_search(int n, extracurricular arr[], int index);
void binary_search(int n, extracurricular arr[], int index);