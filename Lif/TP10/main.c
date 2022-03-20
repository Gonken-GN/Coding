#include "header.h"

int main () {
    char temp[100];
    int i;
    int x = 0;
    int y = 0;
    char pita[300];
    int jtwo = 0;
    int jkovo = 0;
    char stwo[50][100];
    char skovo[50][100];
    int ada;
    scanf("%299[^\n]s", &pita);

    STARTKATA(pita);

    while(EOPKATA(pita) == 0) {
        ada = 0;
        if(GETPANJANGKATA() % 2 == 0) {
            jtwo++;
            strcpy(stwo[x], GETCKATA());
            x++;
        }

        strcpy(temp, GETCKATA());
        for(i=0;i<GETPANJANGKATA();i++) {
            if(temp[i] == 'a' || temp[i] == 'i' || temp[i] == 'u' || temp[i] == 'e' || temp[i] == 'o') {
                if(temp[i+1] != 'a' && temp[i+1] != 'i' && temp[i+1] != 'u' && temp[i+1] != 'e' && temp[i+1] != 'o') {
                    if(temp[i+2] == 'a' || temp[i+2] == 'i' || temp[i+2] == 'u' || temp[i+2] == 'e' || temp[i+2] == 'o') {
                        ada = 1;
                    }
                }
            }
        }


        if(ada == 1) {
            jkovo++;
            strcpy(skovo[y], GETCKATA());
            y++;
        }

        INCKATA(pita);
    }

        ada = 0;

    if(GETPANJANGKATA() > 0 && GETPANJANGKATA() % 2 == 0) {
        jtwo++;
        strcpy(stwo[x], GETCKATA());
        x++;
    }

    if(GETPANJANGKATA() > 0) {
        strcpy(temp, GETCKATA());
        for(i=0;i<GETPANJANGKATA();i++) {
            if(temp[i] == 'a' || temp[i] == 'i' || temp[i] == 'u' || temp[i] == 'e' || temp[i] == 'o') {
                if(temp[i+1] != 'a' && temp[i+1] != 'i' && temp[i+1] != 'u' && temp[i+1] != 'e' && temp[i+1] != 'o') {
                    if(temp[i+2] == 'a' || temp[i+2] == 'i' || temp[i+2] == 'u' || temp[i+2] == 'e' || temp[i+2] == 'o') {
                        ada = 1;
                    }
                }
            }
        }

        if(ada == 1) {
            jkovo++;
            strcpy(skovo[y], GETCKATA());
            y++;
        }
    }

    if(jtwo > 0) {
        printf("THETWO :\n");
        for(i=0;i<x;i++) {
            printf("-%s\n", stwo[i]); 
        }
        printf("+jumlah : %d\n", jtwo);
    } else {
        printf("TIDAK ADA THETWO.\n");
    }

    if(jkovo > 0) {
        printf("\nKOVO :\n");
        for(i=0;i<y;i++) {
            printf("-%s\n", skovo[i]);
        }
        printf("+jumlah : %d\n", jkovo);
    } else {
        printf("TIDAK ADA KOVO.\n");
    }

    return 0;
}