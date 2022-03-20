/*Deklarasi Library*/
#include<stdio.h>
#include<string.h>

/*
Saya Muhammad Aditya Hasta Pratama 2000360 mengerjakan soal kompetisi TP6 Alpro2 2021 C1 dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
*/

typedef struct tp6a
{
    float duration;
    char titleSong[100];
}data;

/*Deklarasi Prosedur*/
void Input(data lagu[], int x);
void Output(data lagu[], int x);
void Insertion(data lagu[], int x, char directSort);
void Selection(data lagu[], int x, char directSort);
void Bubble(data lagu[], int x, char directSort);
void Quick(data lagu[],char directSort,int left, int right);

/*#include"tama.h"*/
int main()
{
    char typeSort, directSort;
    int n,o,p;
    int i;
    scanf("%d",&n);
    data laguIbnu[n];
    Input(laguIbnu,n);

    scanf("%d",&o);
    data laguAdik[o];
    Input(laguAdik,o);

    scanf("%d",&p);
    data laguAyah[p];
    Input(laguAyah,p);

    scanf(" %c %c", &typeSort, &directSort);

    if(typeSort=='i')
    {
        Insertion(laguIbnu,n,directSort);
        Insertion(laguAdik,o,directSort);
        Insertion(laguAyah,p,directSort);
    }
    else if(typeSort=='s')
    {
        Selection(laguIbnu,n,directSort);
        Selection(laguAdik,o,directSort);
        Selection(laguAyah,p,directSort);
    }
    else if(typeSort=='b')
    {
        Bubble(laguIbnu,n,directSort);
        Bubble(laguAdik,o,directSort);
        Bubble(laguAyah,p,directSort);
    }
    else if(typeSort=='q')
    {
        Quick(laguIbnu,directSort,0,n-1);
        Quick(laguAdik,directSort,0,o-1);
        Quick(laguAyah,directSort,0,p-1);
    }

     Output(laguIbnu, n);
     Output(laguAdik, o);
     Output(laguAyah, p);
    return 0;
}

/*#include"tama.h"*/
void Input(data lagu[], int x)
{
    for(int i=0; i<x; i++)
    {
        scanf("%f ", &lagu[i].duration);
        scanf("%s", &lagu[i].titleSong);
    }
}

void Output(data lagu[], int x)
{
    for(int i=0; i<x; i++)
    {
        printf("%0.2f %s\n", lagu[i].duration, lagu[i].titleSong);
    }
}

void Insertion(data lagu[], int x, char directSort)
{
    int i,j;
    float keyDuration; char keyTitle[100];
    if(directSort=='d')
    {
        for(i=0;i<x;i++)
        {
            keyDuration = lagu[i].duration;
            strcpy(keyTitle, lagu[i].titleSong);
            j= i-1;
            while(j>=0 && keyDuration > lagu[j].duration)
            {
                lagu[j+1].duration = lagu[j].duration;
                strcpy(lagu[j+1].titleSong, lagu[j].titleSong);
                j--;
            }
            lagu[j+1].duration = keyDuration;
            strcpy(lagu[j+1].titleSong, keyTitle);
        }
    }
    else if(directSort=='a')
    {
        for(i=0;i<x;i++)
        {
            keyDuration = lagu[i].duration;
            strcpy(keyTitle, lagu[i].titleSong);
            j= i-1;
            while(j>=0 && keyDuration < lagu[j].duration)
            {
                lagu[j+1].duration = lagu[j].duration;
                strcpy(lagu[j+1].titleSong, lagu[j].titleSong);
                j--;
            }
            lagu[j+1].duration = keyDuration;
            strcpy(lagu[j+1].titleSong, keyTitle);
        }
    }
}

void Selection(data lagu[], int x, char directSort)
{
    int i,j;
    float keyDuration; char keyTitle[100];
    int minIdx;
    for(i=0;i<x;i++)
    {
        minIdx=i;
        for(j=i+1; j<x; j++)
        {
            if(directSort=='d')
            {
                if(lagu[minIdx].duration < lagu[j].duration)
                {
                    minIdx=j;
                }
            }
            else if(directSort=='a')
            {
                if(lagu[minIdx].duration > lagu[j].duration)
                {
                    minIdx=j;
                }
            }      
        }
        keyDuration = lagu[i].duration;
        lagu[i].duration = lagu[minIdx].duration;
        lagu[minIdx].duration = keyDuration;
        strcpy(keyTitle, lagu[i].titleSong);
        strcpy(lagu[i].titleSong, lagu[minIdx].titleSong);
        strcpy(lagu[minIdx].titleSong, keyTitle);
    }
}

void Bubble(data lagu[], int x, char directSort)
{
    int i;
    float keyDuration; char keyTitle[100];
    int move;

    if(directSort=='d')
    {
        do
        {
            move=0;
            for(i=0;i<x-1;i++)
            {
                if(lagu[i].duration < lagu[i+1].duration)
                {
                    keyDuration = lagu[i].duration;
                    lagu[i].duration = lagu[i+1].duration;
                    lagu[i+1].duration = keyDuration;
                    strcpy(keyTitle, lagu[i].titleSong);
                    strcpy(lagu[i].titleSong, lagu[i+1].titleSong);
                    strcpy(lagu[i+1].titleSong, keyTitle);
                    move=1;
                }
            }
        }while(move==1);
    }
    else if(directSort=='a')
    {
        do
        {
            move=0;
            for(i=0;i<x-1;i++)
            {
                if(lagu[i].duration > lagu[i+1].duration)
                {
                    keyDuration = lagu[i].duration;
                    lagu[i].duration = lagu[i+1].duration;
                    lagu[i+1].duration = keyDuration;
                    strcpy(keyTitle, lagu[i].titleSong);
                    strcpy(lagu[i].titleSong, lagu[i+1].titleSong);
                    strcpy(lagu[i+1].titleSong, keyTitle);
                    move=1;
                }
            }
        }while(move==1);
    }
}

void Quick(data lagu[],char directSort,int left, int right)
{
    int i = left;
    int j = right;
    float keyDuration; char keyTitle[100];

    do
    {
        if(directSort=='d')
        {
            while((lagu[i].duration > lagu[right].duration) && (i<=j))
            {
                i++;
            }
            while((lagu[j].duration < lagu[left].duration) && (i<=j))
            {
                j--;
            }
        }
        else if(directSort=='a')
        {
            while((lagu[i].duration < lagu[right].duration) && (i<=j))
            {
                i++;
            }
            while((lagu[j].duration > lagu[left].duration) && (i<=j))
            {
                j--;
            }
        }
        if(i<j)
        {
            keyDuration = lagu[i].duration;
            lagu[i].duration = lagu[j].duration;
            lagu[j].duration = keyDuration;
            strcpy(keyTitle, lagu[i].titleSong);
            strcpy(lagu[i].titleSong, lagu[j].titleSong);
            strcpy(lagu[j].titleSong, keyTitle);    
            i++;
            j--;
        }
    }while (i<j);
    
    if((left<j) && (j<right))
    {
        Quick(lagu,directSort,left,j);
    }
    if((i<right) && (i>left))
    {
        Quick(lagu,directSort,right,i);
    }
}