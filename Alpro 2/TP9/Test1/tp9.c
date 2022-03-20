#include<stdio.h>
#include<string.h>

/*
Saya Muhammad Aditya Hasta Pratama 2000360 mengerjakan soal kompetisi TP9 Alpro2 2021 C1 dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
*/

int idx; //untuk menentukan index pada pita
char cc; //variabel menampung karakter yang ditampilkan

void inputNama(char nama[]);        //Prosedur untuk memasukan nama dengan bahan baku karakter nama
void start(char pita[]);            //Prosedur untuk memulai mesin mengecek pita karakter
void inc(char pita[]);              //Prosedur untuk mengecek karakter selanjutnya 
int eop();                          //Prosedur untuk mengecek akhir dari pita karakter
void adv(char pita[]);              //Prosedur untuk mengecek spasi, jika ada spasi pengecekan akan dimajukan ke karakter selanjutnya dengan bahan baku char pita[]
char getCC();                       //Prosedur untuk mengambil nilai karakter yang di tampilkan
void check(char nama[], int cek);   //Prosedur untuk mengecek hasil untuk mengecek apakah dia agen rahasia atau bukan dengan bahan baku char nama dan integer cek

int main()
{   
    char nama[50];
    scanf("%s", &nama);

    char pita[50];
    scanf("%s", &pita);

    char temp, temp2, temp3;
    int cek = 0;

    start(pita);
    while(eop()== 0) //jika pita belum habis
    {
        temp = getCC(); //menyimpan huruf pertama
        if(eop()== 0)
        {
            inc(pita);
            temp2 = getCC(); //menyimpan huruf kedua
            if(eop()== 0)
            {
                inc(pita);
                temp3= getCC(); //menyimpan huruf ketiga
                if((temp == 'x' && temp2 == 'c' && temp3 == 'v') || (temp == 'r' && temp2 == 'a' && temp3 == 'r') || (temp == 'x' && temp2 == 'a' && temp3 == 'r'))
                {
                    cek=1;
                }
            }
        }
    }
    check(nama, cek);

    return 0;
}


void start(char pita[])
{
    idx=0;          //merubah nilai index
    cc = pita[idx]; //karakter yang ditampilkan merupakan karakter awal pita
}

void inc(char pita[])
{
    idx++;          //nilai index bertambah
    cc = pita[idx]; //karakter yang ditampilkan diperbaharui
}

int eop()
{
    if(cc=='.') //jika karakter yang ditampilkan adalah titik
    {
        return 1;   //maka kembalikan nilai return menjadi 1
    }
    else //jika tidak termasuk kondisi sebelumnya
    {
        return 0;   //maka kembalikan nilai return menjadi 0
    }
}

void adv(char pita[])
{
    idx++;
    cc = pita[idx];

    while((cc==' ') && (eop() == 0)) //jika cc adalah spasi atau tidak belum sampai akhir pita
    {
        idx++;
        cc = pita[idx];
    }
}

char getCC()
{
    return cc; 
}

void check(char nama[], int cek)
{
    printf("%s ", nama);
    if(cek ==1)
    {
        printf("adalah Agen Rahasia.\n");
    }
    else
    {
        printf("adalah pegawai biasa.\n");
    }
}