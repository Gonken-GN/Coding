#include "head.h"

void bubblesort(data array[], int banyak){

    int i, tukar;
    int tempkonsonan;
    char tempstring[100];
    do{
        tukar=0;
        for(i=0; i<(banyak-1); i++){
            if(array[i].konsonan<array[i+1].konsonan){
                tempkonsonan=array[i].konsonan;
                array[i].konsonan=array[i+1].konsonan;
                array[i+1].konsonan=tempkonsonan;
                strcpy(tempstring, array[i].string);
                strcpy(array[i].string, array[i+1].string);
                strcpy(array[i+1].string, tempstring);
                tukar=1;
            }
        }
    }while(tukar==1);

}

void merging(int banyaksatu, int banyakdua, data datasatu[], data datadua[], data merged[]){

    int i, p1=0, p2=0, p3=0;
    while((p1<banyaksatu) && (p2<banyakdua)){
        if(datasatu[p1].konsonan > datadua[p2].konsonan){
            merged[p3].konsonan = datasatu[p1].konsonan;
            strcpy(merged[p3].string, datasatu[p1].string);
            p1++;
            p3++;
        }else if(datadua[p2].konsonan > datasatu[p1].konsonan){
            merged[p3].konsonan = datadua[p2].konsonan;
            strcpy(merged[p3].string, datadua[p2].string);
            p2++;
            p3++;
        }else{
            merged[p3].konsonan = datasatu[p1].konsonan;
            strcpy(merged[p3].string, datasatu[p1].string);
            p1++;
            p3++;
            merged[p3].konsonan = datadua[p2].konsonan;
            strcpy(merged[p3].string, datadua[p2].string);
            p2++;
            p3++;
        }
    }
    if(p1<banyaksatu){
        for(i=p1; i<banyaksatu; i++){
            merged[p3].konsonan=datasatu[i].konsonan;
            strcpy(merged[p3].string, datasatu[i].string);
            p3++;
        }
    }
    if(p2<banyakdua){
        for(i=p2; i<banyakdua; i++){
            merged[p3].konsonan=datadua[i].konsonan;
            strcpy(merged[p3].string, datadua[i].string);
            p3++;
        }
    }

}