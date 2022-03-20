#include"tama.h"

void Input(kurm data[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%s", &data[i].type);
        scanf("%d", &data[i].weight);
        scanf("%d", &data[i].price);
        scanf("%s", &data[i].status);
    }
}

void PriceGram(kurm data[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        data[i].totalprice=0;
        data[i].totalprice = (data[i].price / data[i].weight);
    }
}

void Sort(kurm data[], int n)
{
    int i;
    char tempType[50], tempStatus[50];
    int tempPrice[50], tempWeight[50], tempTotalPrice[50];
    int check;

    do //Lakukan proses berikut
    {
        check=0; //Inisialisasi nilai cek
        for(i=0; i<(n-1); i++) //Lakukan perulangan sesuai banyaknya array-1
        {
            if(data[i].totalprice < data[i+1].totalprice) //Jika data nilai rata2 siswa i lebih besar dari i+1
            {
                //Lakukan proses berikut
                tempPrice[i] = data[i].price;
                data[i].price = data[i+1].price;
                data[i+1].price = tempPrice[i];
                tempWeight[i] = data[i].weight;
                data[i].weight = data[i+1].weight;
                data[i+1].weight = tempWeight[i];
                tempTotalPrice[i] = data[i].totalprice;
                data[i].totalprice = data[i+1].totalprice;
                data[i+1].totalprice = tempTotalPrice[i];
                strcpy(tempType, data[i].type);
                strcpy(data[i].type, data[i+1].type);
                strcpy(data[i+1].type, tempType);
                strcpy(tempStatus, data[i].status);
                strcpy(data[i].status, data[i+1].status);
                strcpy(data[i+1].status, tempStatus);
            }
        }
    }while(check==1); //Ketika nilai cek==1
}

void SearchProgram(int cari, kurm data[], int n)
{
    int found=0;
    int i,k;
    i=0;
    
    while((i<=n) && (found==0))
    {
        k=(int) (i+n)/2;
        if(data[k].totalprice == cari)
        {
            found++;
        }
        else
        {
            if(data[k].totalprice < cari)
            {
                n = k-1;
            }
            else
            {
                i = k+1;
            }
        }
    }
    if(found==0)
    {
        printf("tidak ditemukan\n");
    }
    else if(found>=1)
    {
        printf("nama kurma: %s\n", data[k].type);
        printf("berat: %d gram\n", data[k].weight);
        printf("harga: %d\n", data[k].price);
        printf("harga per berat: %d\n", cari);
        if(data[i].s)
        {
            printf("status premium : ya\n");
        }
        else
        {
            printf("status premium : tidak\n");
        }
    }
}