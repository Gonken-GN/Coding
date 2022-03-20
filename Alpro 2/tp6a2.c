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
void Output(data gabung[], int x);
void Insertion(data lagu[], int x, char directSort);
void Selection(data lagu[], int x, char directSort);
void Bubble(data lagu[], int x, char directSort);
void Quick(data lagu[],char directSort, int left, int right);
void Merge(data laguA[], data laguB[], data gabung[], char directSort, int x, int y);

/*#include"tama.h"*/
int main()
{
    char typeSort, directSort;
    int n,o,p;

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

    data gabung[n+o];
    data gabung2[n+o+p];

    if(typeSort=='i')
    {
        Insertion(laguIbnu,n,directSort);
        Insertion(laguAdik,o,directSort);
        Merge(laguIbnu,laguAdik,gabung,directSort,n,o);
        Insertion(laguAyah,p,directSort);
        Merge(gabung,laguAyah,gabung2,directSort,n+o,p);
    }
    else if(typeSort=='s')
    {
        Selection(laguIbnu,n,directSort);
        Selection(laguAdik,o,directSort);
        Merge(laguIbnu,laguAdik,gabung,directSort,n,o);
        Selection(laguAyah,p,directSort);
        Merge(gabung,laguAyah,gabung2,directSort,n+o,p);
    }
    else if(typeSort=='b')
    {
        Bubble(laguIbnu,n,directSort);
        Bubble(laguAdik,o,directSort);
        Merge(laguIbnu,laguAdik,gabung,directSort,n,o);
        Bubble(laguAyah,p,directSort);
        Merge(gabung,laguAyah,gabung2,directSort,n+o,p);
    }
    else if(typeSort=='q')
    {
        Quick(laguIbnu,directSort,0,n-1);
        Quick(laguAdik,directSort,0,o-1);
        Merge(laguIbnu,laguAdik,gabung,directSort,n,o);
        Quick(laguAyah,directSort,0,p-1);
        Merge(gabung,laguAyah,gabung2,directSort,n+o,p);
    }

    printf("\n");
    printf("Daftar Lagu Keluarga:\n");
    Output(gabung2, n+o+p);

    // printf("\n");
    // Output(laguIbnu, n);
    // printf("\n");
    // Output(laguAdik, o);
    // printf("\n");
    // Output(laguAyah, p);
    // printf("\n");
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

void Output(data gabung2[], int x)
{
    for(int i=0; i<x; i++)
    {
        printf("%0.2f %s\n", gabung2[i].duration, gabung2[i].titleSong);
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
    float tempDuration[100]; char tempTitle[100];
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
        tempDuration[i] = lagu[i].duration;
        lagu[i].duration = lagu[minIdx].duration;
        lagu[minIdx].duration = tempDuration[i];
        strcpy(tempTitle, lagu[i].titleSong);
        strcpy(lagu[i].titleSong, lagu[minIdx].titleSong);
        strcpy(lagu[minIdx].titleSong, tempTitle);
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
            for(i=0;i<x;i++)
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
            for(i=0;i<x;i++)
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

// void Quick(data lagu[],char directSort,int left, int right)
// {
//     int i = left;
//     int j = right;
//     float tempDuration[100]; char tempTitle[100];

//     do
//     {
//         if(directSort=='d')
//         {
//             while((lagu[i].duration > lagu[right].duration) && (i<=j))
//             {
//                 i++;
//             }
//             while((lagu[j].duration < lagu[left].duration) && (i<=j))
//             {
//                 j--;
//             }
//         }
//         else if(directSort=='a')
//         {
//             while((lagu[i].duration < lagu[right].duration) && (i<=j))
//             {
//                 i++;
//             }
//             while((lagu[j].duration > lagu[left].duration) && (i<=j))
//             {
//                 j--;
//             }
//         }
//         if(i<j)
//         {
//             tempDuration[i] = lagu[i].duration;
//             lagu[i].duration = lagu[j].duration;
//             lagu[j].duration = tempDuration[i];
//             strcpy(tempTitle, lagu[i].titleSong);
//             strcpy(lagu[i].titleSong, lagu[j].titleSong);
//             strcpy(lagu[j].titleSong, tempTitle);    
//             i++;
//             j--;
//         }
//     }while (i<j);
    
//     if(left<j)
//     {
//         Quick(lagu,directSort,left,j);
//     }
//     if(i<right)
//     {
//         Quick(lagu,directSort,right,i);
//     }
// }

void Quick(data lagu[],char directSort,int left, int right)
{
    int i = left;
    int j = right;
    float pivot = lagu[(left+right)/2].duration;
    float tempDuration[100]; char tempTitle[100];

    do
    {
        if(directSort=='d')
        {
            while((lagu[i].duration > pivot) && (i<=j))
            {
                i++;
            }
            while((lagu[j].duration < pivot) && (i<=j))
            {
                j--;
            }
        }
        else if(directSort=='a')
        {
            while((lagu[i].duration < pivot) && (i<=j))
            {
                i++;
            }
            while((lagu[j].duration > pivot) && (i<=j))
            {
                j--;
            }
        }
        if(i<j)
        {
            tempDuration[i] = lagu[i].duration;
            lagu[i].duration = lagu[j].duration;
            lagu[j].duration = tempDuration[i];
            strcpy(tempTitle, lagu[i].titleSong);
            strcpy(lagu[i].titleSong, lagu[j].titleSong);
            strcpy(lagu[j].titleSong, tempTitle);    
            i++;
            j--;
        }
    }while (i<j);
    
    if(left<j)
    {
        Quick(lagu,directSort,left,j);
    }
    if(i<right)
    {
        Quick(lagu,directSort,right,i);
    }
}

void Merge(data laguA[], data laguB[], data gabung[], char directSort, int x, int y)
{
    int i=0, j=0;
    int k=0, l=0;
    while ((i<x) && (j<y))
    {
        if(directSort=='d')
        {
            if (laguA[i].duration > laguB[j].duration)
            {
                gabung[k]=laguA[i];
                i++;
                k++;
            }
            else if (laguB[j].duration > laguA[i].duration)
            {
                gabung[k]=laguB[j];
                j++;
                k++;
            }else{
                gabung[k] = laguA[i];
                i++;
                k++;
                gabung[k] = laguB[j];
                j++;
                k++;
            }
        } 
        else if(directSort=='a')
        {
            if (laguA[i].duration < laguB[j].duration)
            {
                gabung[k]=laguA[i];
                i++;
                k++;
            }
            if (laguB[j].duration < laguA[i].duration)
            {
                gabung[k]=laguB[j];
                j++;
                k++;
            }
        }
    }
    if (i<x)
    {
        for (l=i;l<x;l++)
        {
            gabung[k]=laguA[l];
            k++;
        }
    }
    if (j<y)
    {
        for (l=j;l<y;l++)
        {
            gabung[k]=laguB[l];
            k++;
        }
    }
}