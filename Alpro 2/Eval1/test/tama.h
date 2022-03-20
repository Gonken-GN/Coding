/*Deklarasi Library*/
#include<stdio.h>
#include<string.h>



typedef struct
{
    int nilai1, nilai2; //menyimpan data integer nilai mahasiswaa
    char nama[100]; //menyimpan data string nama mahasiswa
}data;

/*Deklarasi Prosedur*/
void Input(data mahasiswa[], int x); //Prosedur untuk memasukkan data input dengan bahan baku struct dan batasan input array
void Insertion(data mahasiswa[], int x); //Prosedur untuk menjalankan 
void Merge(data mahasiswaA[], data mahasiswaB[], data gabung[], int x, int y);
void Output(data gabung[], int x);