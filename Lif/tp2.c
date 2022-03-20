#include <stdio.h>
#include <string.h>

void changer(char change[100]) {
    int i;
    int j;
    int k;
    char tampung1[100];
    char tampung2[100];

    if(strcmp(change, "stop.") != 0) {
        i = 0;
        while(change[i] != '-') {
            tampung1[i] = change[i];
            i++;
        }

        tampung1[i] = '\0';

        int a = i+1;
        k = 0;
        while(change[a] != '-') {
            tampung2[k] = change[a];
            a++;
            k++;
        }

        //tampung2[a] = '\0';
        i = 0;
        a = 0;
    }


    printf("%s\n", tampung1);
    printf("%s\n", tampung2);
}

int main () {

    int i;
    int j;
    int n;

    //char change2[100];
    char change[100];

    while(strcmp(change, "stop.") != 0) {
        scanf(" %s", &change);
        changer(change);
    }

    return 0;
}