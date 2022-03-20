#include <stdio.h>
#include <string.h>

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
    float temp, tmtk, tipa, tbing, tbind;
    char temp1[100];
    i = kiri;
    j = kanan;

    do {
        while((totaln[i] > totaln[kanan]) && (i <= j)) {
            i++;
        }

        while((totaln[j] < totaln[kiri]) && (i <= j)) {
            j--;
        }

        if(i<j) {
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
    } while (i<j);

    if(kiri<j) {
        QuickSort(totaln, mtk, ipa, bing, bind, nama, kiri, j);
    }
    if(i<kanan) {
        QuickSort(totaln, mtk, ipa, bing, bind, nama, i, kanan);
    }
}

int main () {

    int i, n, a, b, c;
    char sort[10];
    scanf(" %s", &sort);
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d", &n);
    char nama[n][100];
    float mtk[n];
    float ipa[n];
    float bing[n];
    float bind[n];
    char c_a[a][100];
    char c_b[b][100];
    char c_c[c][100];
    char tidak_lulus[100][100];

    for(i=0;i<n;i++) {
        scanf("%s %f %f %f %f", &nama[i], &mtk[i], &ipa[i], &bing[i], &bind[i]);
    }

    float totaln[n];

    for(i=0;i<n;i++) {
        totaln[i] = mtk[i] + ipa[i] + bing[i] + bind[i];
    }

    float total_a[a];
    float total_b[b];
    float total_c[c];
    float total_tlulus[100];

    if(strcmp(sort, "bubble") == 0) {
        BubbleSort(totaln, mtk, ipa, bing, bind, nama, n);
    } else if (strcmp(sort, "quick") == 0) {
        QuickSort(totaln, mtk, ipa, bing, bind, nama, 0, n-1);
    }

    for(i=0;i<n;i++) {
        printf("%d. %s %0.1f %0.1f %0.1f %0.1f %0.1f\n", i+1, nama[i], mtk[i], ipa[i], bing[i], bind[i], totaln[i]);
    }

    int ab_a = 1;
    int ab_b = 1;
    int ab_c = 1;
    int ab_t = 1;
    int kuota_a = 0;
    int kuota_b = 0;
    int kuota_c = 0;
    int kuota_tlulus = 0;

    for(i=0;i<n;i++) {
        if(mtk[i] >= 80 && ipa[i] >= 80 && bing[i] >= 80 && bind[i] >= 80 && kuota_a < a) {
            strcpy(c_a[kuota_a], nama[i]);
            kuota_a++;
        } else if(((mtk[i] >= 70 && ipa[i] >= 70 && (mtk[i] < 80 || ipa[i] < 80 || bing[i] < 80 || bind[i] < 80)) || (mtk[i] >= 80 && ipa[i] >= 80 && bing[i] >= 80 && bind[i] >= 80 && kuota_a == a)) && kuota_b < b) {
            strcpy(c_b[kuota_b], nama[i]);
            kuota_b++;
        } else if(((mtk[i] >= 50 && ipa[i] >= 50 && bing[i] >= 50 && bind[i] >= 50 && (mtk[i] < 70 || ipa[i] < 70)) || (mtk[i] >= 80 && ipa[i] >= 80 && bing[i] >= 80 && bind[i] >= 80 && kuota_a == a && kuota_b == b) || (mtk[i] >= 70 && ipa[i] >= 70 && (mtk[i] < 80 || ipa[i] < 80 || bing[i] < 80 || bind[i] < 80) && kuota_b == b)) && kuota_c < c) {
            strcpy(c_c[kuota_c], nama[i]);
            kuota_c++;
        } else if(((mtk[i] < 50 || ipa[i] < 50 || bing[i] < 50 || bind[i] < 50) && (mtk[i] < 70 || ipa[i] < 70)) || (mtk[i] >= 80 && ipa[i] >= 80 && bing[i] >= 80 && bind[i] >= 80 && kuota_a == a && kuota_b == b && kuota_c == c) || (mtk[i] >= 70 && ipa[i] >= 70 && (mtk[i] < 80 || ipa[i] < 80 || bing[i] < 80 || bind[i] < 80) && kuota_b == b && kuota_c == c) || (mtk[i] >= 50 && ipa[i] >= 50 && bing[i] >= 50 && bind[i] >= 50 && (mtk[i] < 70 || ipa[i] < 70) && kuota_c == c)) {
            strcpy(tidak_lulus[kuota_tlulus], nama[i]);
            kuota_tlulus++;
        } 
    }

    printf("Kelas A:\n");
    if(kuota_a > 0) {
        for(i=0;i<kuota_a;i++) {
            printf("%s\n", c_a[i]);
        }
    } else {
        printf("NO DATA\n");
    }

    printf("Kelas B:\n");
    if(kuota_b > 0) {
        for(i=0;i<kuota_b;i++) {
            printf("%s\n", c_b[i]);
        }
    } else {
        printf("NO DATA\n");
    }

    printf("Kelas C:\n");
    if(kuota_c > 0) {
        for(i=0;i<kuota_c;i++) {
            printf("%s\n", c_c[i]);
        }
    } else {
        printf("NO DATA\n");
    }

    printf("Tidak Lulus:\n");
    if(kuota_tlulus > 0) {
        for(i=0;i<kuota_tlulus;i++) {
            printf("%s\n", tidak_lulus[i]);
        }
    } else {
        printf("NO DATA\n");
    }

    printf("%d %d\n%d %d\n%d %d\n", kuota_a, a, kuota_b, b, kuota_c, c);

    return 0;
}