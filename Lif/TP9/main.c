#include "mesinkarakter.h"

int main () {
    char pita[100];
    char temp1; 
    char temp2;
    int n = 0;
    int i;
    scanf("%99[^\n]s", &pita);

    START(pita);
    while(EOP() == 0 && n == 0) {
        temp1 = CHECK(pita);
        if(EOP() == 0) {
            temp2 = CHECK(pita);
            if(EOP() == 0) {
                if(((GETCC() == 'k') && (temp1 == 'a') && (temp2 == ' '))) {
                    n = 1;
                }  else if(((GETCC() == ' ') && (temp1 == 'k') && (temp2 == 'a'))) {
                    n = 1;
                } else {
                    n = 0;
                }
            }
        }
        INC(pita);
        RESCOUNT();
    }

    if(n == 1) {
        printf("pesan valid\n");
    } else {
        printf("pesan tidak valid\n");
    }

    return 0;
}