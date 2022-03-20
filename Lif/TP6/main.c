#include "header.h"

int main () {

    int i, a, b, c;
    char nama1[100], nama2[100], nama3[100];
    char pilihan1[100];
    char pilihan2[100];
    char pilihan3[100];

    scanf("%s", &nama1);
    scanf("%d", &a);
    char place1[a][100];
    int ascii1[a];
    int harga_t1[a];
    int harga_p1[a];
    int total1[a];
    for(i=0;i<a;i++) {
        scanf("%s %d %d", &place1[i], &harga_t1[i], &harga_p1[i]);
        total1[i] = harga_t1[i] + harga_p1[i];
        ascii1[i] = place1[i][0];
    }

    scanf("%s", &nama2);
    scanf("%d", &b);
    char place2[b][100];
    int ascii2[b];
    int harga_t2[b];
    int harga_p2[b];
    int total2[b];
    for(i=0;i<b;i++) {
        scanf("%s %d %d", &place2[i], &harga_t2[i], &harga_p2[i]);
        total2[i] = harga_t2[i] + harga_p2[i];
        ascii2[i] = place2[i][0];
    }

    scanf("%s", &nama3);
    scanf("%d", &c);
    char place3[c][100];
    int ascii3[c];
    int harga_t3[c];
    int harga_p3[c];
    int total3[c];
    for(i=0;i<c;i++) {
        scanf("%s %d %d", &place3[i], &harga_t3[i], &harga_p3[i]);
        total3[i] = harga_t3[i] + harga_p3[i];
        ascii3[i] = place3[i][0];
    }

    scanf("%s", &pilihan1);
    scanf("%s", &pilihan2);
    scanf("%s", &pilihan3);

    if(strcmp(pilihan1, "NamaTempat") == 0) {
        if(strcmp(pilihan2, "Insertion") == 0) {
            InsertionSort(place1, harga_t1, harga_p1, total1, ascii1, a, pilihan3, pilihan1);
            InsertionSort(place2, harga_t2, harga_p2, total2, ascii2, b, pilihan3, pilihan1);
            InsertionSort(place3, harga_t3, harga_p3, total3, ascii3, c, pilihan3, pilihan1);
        } else if(strcmp(pilihan2, "Selection") == 0) {
            SelectionSort(place1, harga_t1, harga_p1, total1, ascii1, a, pilihan3, pilihan1);
            SelectionSort(place2, harga_t2, harga_p2, total2, ascii2, b, pilihan3, pilihan1);
            SelectionSort(place3, harga_t3, harga_p3, total3, ascii3, c, pilihan3, pilihan1);
        } else if(strcmp(pilihan2, "BubbleSort") == 0) {
            BubbleSort(place1, harga_t1, harga_p1, total1, ascii1, a, pilihan3, pilihan1);
            BubbleSort(place2, harga_t2, harga_p2, total2, ascii2, b, pilihan3, pilihan1);
            BubbleSort(place3, harga_t3, harga_p3, total3, ascii3, c, pilihan3, pilihan1);
        } else if(strcmp(pilihan2, "QuickSort") == 0){
            QuickSort(place1, harga_t1, harga_p1, total1, ascii1, pilihan3, pilihan1,0, a-1);
            QuickSort(place2, harga_t2, harga_p2, total2, ascii2, pilihan3, pilihan1,0, b-1);
            QuickSort(place3, harga_t3, harga_p3, total3, ascii3, pilihan3, pilihan1,0, c-1);
        }
    } else if(strcmp(pilihan1, "HargaTransportasi") == 0) {
        if(strcmp(pilihan2, "Insertion") == 0) {
            InsertionSort(place1, total1, harga_p1, ascii1, harga_t1, a, pilihan3, pilihan1);
            InsertionSort(place2, total2, harga_p2, ascii2, harga_t2, b, pilihan3, pilihan1);
            InsertionSort(place3, total3, harga_p3, ascii3, harga_t3, c, pilihan3, pilihan1);
        } else if(strcmp(pilihan2, "Selection") == 0) {
            SelectionSort(place1, total1, harga_p1, ascii1, harga_t1, a, pilihan3, pilihan1);
            SelectionSort(place2, total2, harga_p2, ascii2, harga_t2, b, pilihan3, pilihan1);
            SelectionSort(place3, total3, harga_p3, ascii3, harga_t3, c, pilihan3, pilihan1);
        } else if(strcmp(pilihan2, "BubbleSort") == 0) {
            BubbleSort(place1, total1, harga_p1, ascii1, harga_t1, a, pilihan3, pilihan1);
            BubbleSort(place2, total2, harga_p2, ascii2, harga_t2, b, pilihan3, pilihan1);
            BubbleSort(place3, total3, harga_p3, ascii3, harga_t3, c, pilihan3, pilihan1);
        } else if(strcmp(pilihan2, "QuickSort") == 0) {
            QuickSort(place1, total1, harga_p1, ascii1, harga_t1, pilihan3, pilihan1, 0, a-1);
            QuickSort(place2, total2, harga_p2, ascii2, harga_t2, pilihan3, pilihan1, 0, b-1);
            QuickSort(place3, total3, harga_p3, ascii3, harga_t3, pilihan3, pilihan1, 0, c-1);
        }
    } else if(strcmp(pilihan1, "HargaPenginapan") == 0) {
        if(strcmp(pilihan2, "Insertion") == 0) {
            InsertionSort(place1, harga_t1, total1, ascii1, harga_p1, a, pilihan3, pilihan1);
            InsertionSort(place2, harga_t2, total2, ascii2, harga_p2, b, pilihan3, pilihan1);
            InsertionSort(place3, harga_t3, total3, ascii3, harga_p3, c, pilihan3, pilihan1);
        } else if(strcmp(pilihan2, "Selection") == 0) {
            SelectionSort(place1, harga_t1, total1, ascii1, harga_p1, a, pilihan3, pilihan1);
            SelectionSort(place2, harga_t2, total2, ascii2, harga_p2, b, pilihan3, pilihan1);
            SelectionSort(place3, harga_t3, total3, ascii3, harga_p3, c, pilihan3, pilihan1);
        } else if(strcmp(pilihan2, "BubbleSort") == 0) {
            BubbleSort(place1, harga_t1, total1, ascii1, harga_p1, a, pilihan3, pilihan1);
            BubbleSort(place2, harga_t2, total2, ascii2, harga_p2, b, pilihan3, pilihan1);
            BubbleSort(place3, harga_t3, total3, ascii3, harga_p3, c, pilihan3, pilihan1);
        } else if(strcmp(pilihan2, "QuickSort") == 0) {
            QuickSort(place1, harga_t1, total1, ascii1, harga_p1, pilihan3, pilihan1, 0, a-1);
            QuickSort(place2, harga_t2, total2, ascii2, harga_p2, pilihan3, pilihan1, 0, b-1);
            QuickSort(place3, harga_t3, total3, ascii3, harga_p3, pilihan3, pilihan1, 0, c-1);
        }
    } else if(strcmp(pilihan1, "TotalBiaya") == 0) {
        if(strcmp(pilihan2, "Insertion") == 0) {
            InsertionSort(place1, harga_t1, harga_p1, ascii1, total1, a, pilihan3, pilihan1);
            InsertionSort(place2, harga_t2, harga_p2, ascii2, total2, b, pilihan3, pilihan1);
            InsertionSort(place3, harga_t3, harga_p3, ascii3, total3, c, pilihan3, pilihan1);
        } else if(strcmp(pilihan2, "Selection") == 0) {
            SelectionSort(place1, harga_t1, harga_p1, ascii1, total1, a, pilihan3, pilihan1);
            SelectionSort(place2, harga_t2, harga_p2, ascii2, total2, b, pilihan3, pilihan1);
            SelectionSort(place3, harga_t3, harga_p3, ascii3, total3, c, pilihan3, pilihan1);
        }else if(strcmp(pilihan2, "BubbleSort") == 0) {
            BubbleSort(place1, harga_t1, harga_p1, ascii1, total1, a, pilihan3, pilihan1);
            BubbleSort(place2, harga_t2, harga_p2, ascii2, total2, b, pilihan3, pilihan1);
            BubbleSort(place3, harga_t3, harga_p3, ascii3, total3, c, pilihan3, pilihan1);
        } else if(strcmp(pilihan2, "QuickSort") == 0) {
            QuickSort(place1, harga_t1, harga_p1, ascii1, total1, pilihan3, pilihan1, 0, a-1);
            QuickSort(place2, harga_t2, harga_p2, ascii2, total2, pilihan3, pilihan1, 0, b-1);
            QuickSort(place3, harga_t3, harga_p3, ascii3, total3, pilihan3, pilihan1, 0, c-1);
        }
    }

    char place_merge_a[a+b][100];
    int ascii_merge_a[a+b];
    int total_merge_a[a+b];
    int harga_t_merge_a[a+b];
    int harga_p_merge_a[a+b];

    char place_merge_f[a+b+c][100];
    int ascii_merge_f[a+b+c];
    int total_merge_f[a+b+c];
    int harga_t_merge_f[a+b+c];
    int harga_p_merge_f[a+b+c];

    merge(pilihan3, pilihan1, a, b, place1, place2, place_merge_a, harga_t1, harga_t2, harga_t_merge_a, harga_p1, harga_p2, harga_p_merge_a, total1, total2, total_merge_a);
    merge(pilihan3, pilihan1, a+b, c, place_merge_a, place3, place_merge_f, harga_t_merge_a, harga_t3, harga_t_merge_f, harga_p_merge_a, harga_p3, harga_p_merge_f, total_merge_a, total3, total_merge_f);

    printf("Data Tempat Wisata di Indonesia:\n");
    for(i=0;i<a+b+c;i++) {
        printf("%s Rp%d Rp%d Rp%d\n", place_merge_f[i], harga_t_merge_f[i], harga_p_merge_f[i], total_merge_f[i]);
    }
    printf("-----------\n");
    printf("Rekomendasi\n");
    printf("-----------\n");
    printf("Tujuan: %s\n", place_merge_f[0]);
    printf("Harga Transportasi: Rp%d\n", harga_t_merge_f[0]);
    printf("Harga Penginapan: Rp%d\n", harga_p_merge_f[0]);
    printf("Total Biaya: Rp%d\n", total_merge_f[0]);

    return 0;
}