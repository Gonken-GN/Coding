#include "header.h"

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
            printf("No Absen: %d Nama: %s\n", ab_a, c_a[i]);
            ab_a++;
        }
    } else {
        printf("Tidak Ada Data.\n");
    }

    printf("\n");
    printf("Kelas B:\n");
    if(kuota_b > 0) {
        for(i=0;i<kuota_b;i++) {
            printf("No Absen: %d Nama: %s\n", ab_b, c_b[i]);
            ab_b++;
        }
    } else {
        printf("Tidak Ada Data.\n");
    }

    printf("\n");
    printf("Kelas C:\n");
    if(kuota_c > 0) {
        for(i=0;i<kuota_c;i++) {
            printf("No Absen: %d Nama: %s\n", ab_c, c_c[i]);
            ab_c++;
        }
    } else {
        printf("Tidak Ada Data.\n");
    }

    printf("\n");
    printf("Siswa Yang Tidak Lulus:\n");
    if(kuota_tlulus > 0) {
        for(i=0;i<kuota_tlulus;i++) {
            printf("No Absen: %d Nama: %s\n", ab_t, tidak_lulus[i]);
            ab_t++;
        }
    } else {
        printf("Tidak Ada Data.\n");
    }

    return 0;
}