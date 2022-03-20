#include "head.h"

void bubblesort(data array[], int banyak){
    int i, j, swap;
    char tempnama[100];
    int temphpb;
    int tempharga;
    int tempberat;
    int tempstatus;
    do{ 
        swap=0;
        for(i=0;i<banyak-1;i++){
            if(array[i].hargaperberat>array[i+1].hargaperberat){
                strcpy(tempnama, array[i].nama);
                strcpy(array[i].nama, array[i+1].nama);
                strcpy(array[i+1].nama, tempnama);
                temphpb=array[i].hargaperberat;
                array[i].hargaperberat=array[i+1].hargaperberat;
                array[i+1].hargaperberat=temphpb;
                tempharga=array[i].harga;
                array[i].harga=array[i+1].harga;
                array[i+1].harga=tempharga;
                tempberat=array[i].berat;
                array[i].berat=array[i+1].berat;
                array[i+1].berat=tempberat;
                tempstatus=array[i].status;
                array[i].status=array[i+1].status;
                array[i+1].status=tempstatus;
                swap = 1;
            }
        }
    }while(swap == 1);
}

void binarysearch(data array[]){
    int i, j, k, ketemu;
    i=0;
    j=n;
    ketemu=0;
    while ((ketemu==0)&&(i<=j)){
        k=(int)(i+j)/2;
        if(array[k].hargaperberat==cari){
            ketemu=1;
            statusditemukan=1;
            indekssimpan=k;
        }else{
            if(array[k].hargaperberat>cari){
                j=k-1;
            }else{ 
                i=k+1;
            }
            statusditemukan=0;
        }
    }
}