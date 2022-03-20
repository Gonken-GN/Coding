#include"tama.h"

void Input(data lagu[], int x)
{
    for(int i=0; i<x; i++)
    {
        scanf("%f ", &lagu[i].duration);
        scanf("%s", &lagu[i].titleSong);
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
    float pivot = lagu[i].duration;
    char temp2[100];
    strcpy(temp2, lagu[i].titleSong);

       if( left < right)
              {
                     while(i < j)
                     {
                            while(lagu[j].duration <= pivot && i < j)
                            {
                                   j--;
                            }
                            lagu[i].duration = lagu[j].duration;
                            strcpy(lagu[i].titleSong, lagu[j].titleSong);

                            while(lagu[i].duration >= pivot && i < j)
                            {
                                   i++;
                            }
                            lagu[j].duration = lagu[i].duration;
                            strcpy(lagu[j].titleSong, lagu[i].titleSong);
                     }
                    lagu[i].duration = pivot;
                    strcpy(lagu[i].titleSong, temp2);

              Quick(lagu, directSort, left, i - 1);
            Quick(lagu, directSort, j + 1, right);
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
            if (laguB[j].duration > laguA[i].duration)
            {
                gabung[k]=laguB[j];
                j++;
                k++;
            }
            else
            {
                gabung[k]=laguA[i];
                i++;
                k++;

                gabung[k]=laguB[j];
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
            else
            {
                gabung[k]=laguA[i];
                i++;
                k++;

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

void Output(data gabung2[], int x)
{
    for(int i=0; i<x; i++)
    {
        printf("%0.2f %s\n", gabung2[i].duration, gabung2[i].titleSong);
    }
}

void DaftarIbnu(data gabung2[], int x, data laguIbnu[])
{
    int i,j;
    int ada=0;

    if(x%2==0)
    {
        for (i=0;i<x/2; i++)
        {
            for (j=0;j<(x/2)+1; j++)
            {
                if(strcmp(gabung2[i].titleSong, laguIbnu[j].titleSong)==0)
                {
                    printf("%s\n", gabung2[i].titleSong);
                    ada++;
                }
            }
        }   
    }
    else if(x%2==1)
    {
        for (i=0;i<(x/2)+1; i++)
        {
            for (j=0;j<(x/2)+1; j++)
            {
                if(strcmp(gabung2[i].titleSong, laguIbnu[j].titleSong)==0)
                {
                    printf("%s\n", gabung2[i].titleSong);
                    ada++;
                }
            }
        } 
    }
    if(ada==0)
    {
        printf("Tidak memutar lagu Ibnu\n");
    }
}