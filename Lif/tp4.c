#include <stdio.h>
#include <string.h>

int angka1[6] = {3,7,2,9,4,5};
char huruf[6][10] = {"qwe", "war", "eve", "rqr", "tea", "yup"};

void sort() {
    int i, j, key;
    char temp[10];
    for(i=0;i<6;i++) {
        key = angka1[i];
        strcpy(temp, huruf[i]);
        j = i - 1;

        while(j>=0 && key < angka1[j]) {
            angka1[j+1] = angka1[j];
            strcpy(huruf[j+1], huruf[j]);
            j = j - 1;
        }
        angka1[j+1] = key;
        strcpy(huruf[j+1], temp);
    }
}

int main () {

    sort();

    int i;

    for(i=0;i<6;i++) {
        printf("%d. %s\n", angka1[i], huruf[i]);
    }

    return 0;
}