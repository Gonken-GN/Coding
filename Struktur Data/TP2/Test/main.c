#include "head.h"

int main(){

    //deklarasi list
    list L;
    create_list(&L);

    //deklarasi typedef sementara dan variabel iterator
    int n, i;
    n=99;
    
    temp sem[n];
    banyak=0;
    i=0;

    //meminta masukan user untuk mengisi typedef temp
    int berhenti=0;
    while (berhenti==0){
        scanf("%s", &sem[banyak].tempnama);
        if(strcmp(sem[banyak].tempnama, "---")==0){
            berhenti=1;
        }else{
            scanf("%d %d", &sem[banyak].tempharga, &sem[banyak].tempkode);
            
                add_first(sem[banyak].tempnama, sem[banyak].tempharga, sem[banyak].tempkode, &L);
                banyak++;
        
            
        }
    }
    //sorting berdasarkan
    scanf(" %c", &sortby);
    //urutan
    scanf("%s", &method);

hapus(&L);
    bubblesort(&L);
    
    print_elemen(L);
    
    return 0;
}