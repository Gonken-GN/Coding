#include "header.h" //library headers

int main()
{

    //deklarasi typedef sementara dan variabel iterator
    int n, i;
    sementara input1[99];
    sementara input2[99];
    tukar inputT[99];

    //membuat list utama
    list L;
    createList(&L);
    list M;
    createList(&M);

    //meminta masukan user untuk mengisi typedef temp 1
    scanf("%d", &banyak1);
    for(i=0; i<banyak1; i++){
        scanf("%s %d", &input1[i].tempnamafood, &input1[i].tempharga);
        addLast(input1[i].tempnamafood, input1[i].tempharga, &L);
    }
    //meminta masukan user untuk mengisi typedef temp 2
    scanf("%d", &banyak2);
    for(i=0; i<banyak2; i++){
        scanf("%s %d", &input2[i].tempnamafood, &input2[i].tempharga);
        addLast(input2[i].tempnamafood, input2[i].tempharga, &M);
    }
    //meminta masukan user untuk mengisi typedef tukar
    scanf("%d", &banyakT);
    for(i=0; i<banyakT; i++){
        scanf("%s %s", &inputT[i].namafoodA, &inputT[i].namafoodB);
    }
    for(i=0; i<banyakT; i++){
        proctukar(&L, &M,  inputT[i].namafoodA, inputT[i].namafoodB);
    }
    
    printf("menu warung pertama:\n");
    printElement(L);
    printf("\n");
    printf("menu warung kedua:\n");
    printElement(M);

    return 0;
}