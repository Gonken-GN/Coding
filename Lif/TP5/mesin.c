#include "header.h"

void BubbleSort (float totaln[], float mtk[], float ipa[], float bing[], float bind[], char nama[][100], int n) {
    int i, pindah;
    float temp, tmtk, tipa, tbing, tbind;
    char temp1[100];
    do{
        pindah = 0;
        for(i=0;i<n-1;i++) {
            if(totaln[i]<totaln[i+1]) {
                temp = totaln[i];
                totaln[i] =  totaln[i+1];
                totaln[i+1] =  temp;
                tmtk = mtk[i];
                mtk[i] =  mtk[i+1];
                mtk[i+1] =  tmtk;
                tipa = ipa[i];
                ipa[i] =  ipa[i+1];
                ipa[i+1] =  tipa;
                tbing = bing[i];
                bing[i] =  bing[i+1];
                bing[i+1] =  tbing;
                tbind = bind[i];
                bind[i] =  bind[i+1];
                bind[i+1] =  tbind;
                strcpy(temp1, nama[i]);
                strcpy(nama[i], nama[i+1]);
                strcpy(nama[i+1], temp1);
                pindah = 1;
            }
        }
    } while (pindah == 1);
}

void QuickSort (float totaln[], float mtk[], float ipa[], float bing[], float bind[], char nama[][100], int kiri, int kanan) {
    int i, j; 
    float temp, tmtk, tipa, tbing, tbind, pivot = totaln[kiri];
    char temp1[100];
    i = kiri;
    j = kanan;

    do {
        while(totaln[i] > pivot) {
            i++;
        }

        while(totaln[j] < pivot) {
            j--;
        }

        if(i<=j) {
            temp = totaln[i];
            totaln[i] =  totaln[j];
            totaln[j] =  temp;
            tmtk = mtk[i];
            mtk[i] =  mtk[j];
            mtk[j] =  tmtk;
            tipa = ipa[i];
            ipa[i] =  ipa[j];
            ipa[j] =  tipa;
            tbing = bing[i];
            bing[i] =  bing[j];
            bing[j] =  tbing;
            tbind = bind[i];
            bind[i] =  bind[j];
            bind[j] =  tbind;
            strcpy(temp1, nama[i]);
            strcpy(nama[i], nama[j]);
            strcpy(nama[j], temp1);
            i++;
            j--;
        }
    } while (i<=j);

    if(kiri<j) {
        QuickSort(totaln, mtk, ipa, bing, bind, nama, kiri, j);
    }
    if(i<kanan) {
        QuickSort(totaln, mtk, ipa, bing, bind, nama, i, kanan);
    }
}