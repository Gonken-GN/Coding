#include <stdio.h>

int main(){

    int nt1, nt2;
    printf("banyak array1: ");
    scanf("%d", &nt1);
    printf("banyak array2: ");
    scanf("%d", &nt2);

    int tabel1[nt1];
    int tabel2[nt2];
    int tabel3[nt1+nt2];

    int i;
    int p1, p2, p3;

    //proses input
    printf("isi array 1:\n");
    for(i=0; i<nt1; i++){
        scanf("%d", &tabel1[i]);
    }
    printf("isi array 2:\n");
    for(i=0; i<nt2; i++){
        scanf("%d", &tabel2[i]);
    }

    //proses olahdata
    p1=0, p2=0, p3=0;
    while((p1<nt1) && (p2<nt2)){
        if(tabel1[p1] < tabel2[p2]){
            tabel3[p3] = tabel1[p1];
            p1++;
            p3++;
        }else if(tabel2[p2] < tabel1[p1]){
            tabel3[p3] = tabel2[p2];
            p2++;
            p3++;
        }else{
            tabel3[p3] = tabel1[p1];
            p1++;
            p3++;
            tabel3[p3] = tabel2[p2];
            p2++;
            p3++;
        }
    }

    if(p1<nt1){
        for(i=p1; i<nt1; i++){
            tabel3[p3]=tabel1[i];
            p3++;
        }
    }
    if(p2<nt2){
        for(i=p2; i<nt2; i++){
            tabel3[p3]=tabel2[i];
            p3++;
        }
    }

    //proses output
    printf("\n");
    for(i=0; i<nt1+nt2; i++){
        printf("%d ", tabel3[i]);
    }

    return 0;

}