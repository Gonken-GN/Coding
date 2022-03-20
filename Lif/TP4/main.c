#include "header.h"

int main () {

    char daerah[13][100] = {"Batununggal", "Sarijadi", "Gedebage", "Setiabudhi", "Kiaracondong", "Rancasari", "Regol", "Ujungberung", "Caringin", "Dago", "Mekarmulya", "Cigondewah", "Lengkong"};
    float jarak[13] = {7.3, 16.6, 8.3, 18.7, 6.7, 5.0, 6.3, 12.5, 18.4, 13.2, 10.2, 20.4, 5.3};
    int menit[13] = {21, 34, 20, 39, 19, 15, 14, 29, 26, 30, 21, 31, 14};

    char method[100];
    char sort1[100];
    char sort2[100];
    int sort3;

    int i;

    scanf("%s", &method);
    scanf("%s", &sort1);
    scanf("%s", &sort2);
    scanf("%d", &sort3);

    if(strcmp(method, "Insertion") == 0) {
        if(strcmp(sort1, "Descending") == 0) {
            InsertionSortDesc(daerah, jarak, menit, sort2);
        } else if (strcmp(sort1, "Ascending") == 0) {
            InsertionSortAsc(daerah, jarak, menit, sort2);
        }
    } else if(strcmp(method, "Selection") == 0) {
        if(strcmp(sort1, "Descending") == 0) {
            SelectionSortDesc(daerah, jarak, menit, sort2);
        } else if (strcmp(sort1, "Ascending") == 0) {
            SelectionSortAsc(daerah, jarak, menit, sort2);
        }
    }

    printf("=== Hasil Sorting ===\n");
    for(i=0;i<13;i++) {
        printf("%s %0.1fkm %dm\n", daerah[i], jarak[i], menit[i]);
    }

    int minute = 60 * sort3;
    int a;
    int b = 0;
    int mtot[13];
    float jtot[13];

    for(i=0;i<13;i++) {
        mtot[i] = menit[i]*2;
        jtot[i] = jarak[i]*2;
    }

    int totalm;
    int totalj;
    float jauh = sort3;

    printf("=== Pengiriman ===\n");
    if(strcmp(sort2, "Waktu") == 0) {
        a = 0;
        while(a < 13) {
            totalm = mtot[a];
            printf("%c. Hari ke-%d\n", b+65, b+1);
            while(totalm < minute && a < 13) {
                totalm = totalm + mtot[a+1];
                printf("- %s\n", daerah[a]);
                a++;
            }
            b++;
        }
    } else if(strcmp(sort2, "Jarak") == 0) {
        a = 0;
        while(a < 13) {
            totalj = jtot[a];
            printf("%c. Hari ke-%d\n", b+65, b+1);
            while(totalj < jauh && a < 13) {
                totalj = totalj + jtot[a+1];
                printf("- %s\n", daerah[a]);
                a++;
            }
            b++;
        }
    }
    return 0;
}