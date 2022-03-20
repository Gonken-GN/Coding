#include"tama.h"

void Input(data mahasiswa[], int x)
{
    for(int i=0; i<x; i++)
    {
        scanf("%s %d %d", &mahasiswa[i].nama, &mahasiswa[i].nilai1, &mahasiswa[i].nilai2);
    }
}

void Insertion(data mahasiswa[], int x)
{
    int i,j;
    int keyNilai1, keyNilai2; 
    char keyNama[100];

    for(i=1;i<x;i++)
    {
        keyNilai1 = mahasiswa[i].nilai1;
        keyNilai2 = mahasiswa[i].nilai2;
        strcpy(keyNama, mahasiswa[i].nama);
        j= i-1;
        while (j>=0 && (strcmp(keyNama, mahasiswa[j].nama)<0))
        {
            mahasiswa[j+1].nilai1 = mahasiswa[j].nilai1;
            mahasiswa[j+1].nilai2 = mahasiswa[j].nilai2;
            strcpy(mahasiswa[j+1].nama, mahasiswa[j].nama);
            j--;
        }
        mahasiswa[j+1].nilai1 = keyNilai1;
        mahasiswa[j+1].nilai2 = keyNilai2;
        strcpy(mahasiswa[j+1].nama, keyNama);
    }
}

void Merge(data mahasiswaA[], data mahasiswaB[], data gabung[], int x, int y)
{
    int i=0, j=0;
    int k=0, l=0;

    while ((i<x) && (j<y))
    {
        if (strcmp(mahasiswaA[i].nama, mahasiswaB[j].nama)<0)
        {
            gabung[k]=mahasiswaA[i];
            i++;
            k++;
        }
        if (strcmp(mahasiswaB[j].nama, mahasiswaA[i].nama)<0)
        {
            gabung[k]=mahasiswaB[j];
            j++;
            k++;
        }
        else
        {
            gabung[k]=mahasiswaA[i];
            i++;
            k++;

            gabung[k]=mahasiswaB[j];
            j++;
            k++;
        }
    }
    if (i<x)
    {
        for (l=i;l<x;l++)
        {
            gabung[k]=mahasiswaA[l];
            k++;
        }
    }
    if (j<y)
    {
        for (l=j;l<y;l++)
        {
            gabung[k]=mahasiswaB[l];
            k++;
        }
    }
}

void Output(data gabung[], int x)
{
    printf("================\n");
    for(int i=0; i<x; i++)
    {
        printf("%s %d %d\n", gabung[i].nama, gabung[i].nilai1, gabung[i].nilai2);
    }
    printf("================\n");
    for(int i=0; i<x/2; i++)
    {
        printf("%s %d %d\n", gabung[i].nama, gabung[i].nilai1, gabung[i].nilai2);
    }
    printf("================\n");
    for(int i=x/2; i<x; i++)
    {
        printf("%s %d %d\n", gabung[i].nama, gabung[i].nilai1, gabung[i].nilai2);
    }
}
