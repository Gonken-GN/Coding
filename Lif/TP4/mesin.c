#include "header.h"

void InsertionSortAsc(char daerah[][100], float jarak[], int menit[], char sort2[]) {
    int i, j, key; 
    float temp1; 
    char temp2[100];

    if(strcmp(sort2, "Waktu") == 0) {
        for(i=0;i<13;i++) {
            key = menit[i];
            temp1 = jarak[i];
            strcpy(temp2, daerah[i]);

            j = i - 1;

            while(j>=0 && key < menit[j]) {
                menit[j+1] = menit[j];
                jarak[j+1] = jarak[j];
                strcpy(daerah[j+1], daerah[j]);
                j = j - 1;
            }
            menit[j+1] = key;
            jarak[j+1] = temp1;
            strcpy(daerah[j+1], temp2);
        }
    } else if(strcmp(sort2, "Jarak") == 0) {
        for(i=0;i<13;i++) {
            key = menit[i];
            temp1 = jarak[i];
            strcpy(temp2, daerah[i]);

            j = i - 1;

            while(j>=0 && temp1 < jarak[j]) {
                menit[j+1] = menit[j];
                jarak[j+1] = jarak[j];
                strcpy(daerah[j+1], daerah[j]);
                j = j - 1;
            }
            menit[j+1] = key;
            jarak[j+1] = temp1;
            strcpy(daerah[j+1], temp2);
        }
    }
}

void InsertionSortDesc(char daerah[][100], float jarak[], int menit[], char sort2[]) {
    int i, j, key; 
    float temp1; 
    char temp2[100];

    if(strcmp(sort2, "Waktu") == 0) {
        for(i=0;i<13;i++) {
            key = menit[i];
            temp1 = jarak[i];
            strcpy(temp2, daerah[i]);

            j = i - 1;

            while(j>=0 && key > menit[j]) {
                menit[j+1] = menit[j];
                jarak[j+1] = jarak[j];
                strcpy(daerah[j+1], daerah[j]);
                j = j - 1;
            }
            menit[j+1] = key;
            jarak[j+1] = temp1;
            strcpy(daerah[j+1], temp2);
        }
    } else if(strcmp(sort2, "Jarak") == 0) {
        for(i=0;i<13;i++) {
            key = menit[i];
            temp1 = jarak[i];
            strcpy(temp2, daerah[i]);

            j = i - 1;

            while(j>=0 && temp1 > jarak[j]) {
                menit[j+1] = menit[j];
                jarak[j+1] = jarak[j];
                strcpy(daerah[j+1], daerah[j]);
                j = j - 1;
            }
            menit[j+1] = key;
            jarak[j+1] = temp1;
            strcpy(daerah[j+1], temp2);
        }
    }
}

void SelectionSortAsc(char daerah[][100], float jarak[], int menit[], char sort2[]) {
    int n, i, temp, minIndeks, j;
    float temp1;
    char temp2[100];

    if(strcmp(sort2, "Waktu") == 0) {
        for(i=0;i<13-1;i++) {
            minIndeks = i;
            for(j=i+1;j<13;j++) {
                if(menit[minIndeks] > menit[j]) {
                    minIndeks = j;
                }
            }
            temp = menit[i];
            menit[i] = menit[minIndeks];
            menit[minIndeks] = temp;
            temp1 = jarak[i];
            jarak[i] = jarak[minIndeks];
            jarak[minIndeks] = temp1;
            strcpy(temp2, daerah[i]);
            strcpy(daerah[i], daerah[minIndeks]);
            strcpy(daerah[minIndeks], temp2); 
        }
    } else if (strcmp(sort2, "Jarak") == 0) {
        for(i=0;i<13-1;i++) {
            minIndeks = i;
            for(j=i+1;j<13;j++) {
                if(jarak[minIndeks] > jarak[j]) {
                    minIndeks = j;
                }
            }
            temp = menit[i];
            menit[i] = menit[minIndeks];
            menit[minIndeks] = temp;
            temp1 = jarak[i];
            jarak[i] = jarak[minIndeks];
            jarak[minIndeks] = temp1;
            strcpy(temp2, daerah[i]);
            strcpy(daerah[i], daerah[minIndeks]);
            strcpy(daerah[minIndeks], temp2); 
        }
    }
}

void SelectionSortDesc(char daerah[][100], float jarak[], int menit[], char sort2[]) {
    int n, i, temp, minIndeks, j;
    float temp1;
    char temp2[100];

    if(strcmp(sort2, "Waktu") == 0) {
        for(i=0;i<13-1;i++) {
            minIndeks = i;
            for(j=i+1;j<13;j++) {
                if(menit[minIndeks] < menit[j]) {
                    minIndeks = j;
                }
            }
            temp = menit[i];
            menit[i] = menit[minIndeks];
            menit[minIndeks] = temp;
            temp1 = jarak[i];
            jarak[i] = jarak[minIndeks];
            jarak[minIndeks] = temp1;
            strcpy(temp2, daerah[i]);
            strcpy(daerah[i], daerah[minIndeks]);
            strcpy(daerah[minIndeks], temp2); 
        }
    } else if (strcmp(sort2, "Jarak") == 0) {
        for(i=0;i<13-1;i++) {
            minIndeks = i;
            for(j=i+1;j<13;j++) {
                if(jarak[minIndeks] < jarak[j]) {
                    minIndeks = j;
                }
            }
            temp = menit[i];
            menit[i] = menit[minIndeks];
            menit[minIndeks] = temp;
            temp1 = jarak[i];
            jarak[i] = jarak[minIndeks];
            jarak[minIndeks] = temp1;
            strcpy(temp2, daerah[i]);
            strcpy(daerah[i], daerah[minIndeks]);
            strcpy(daerah[minIndeks], temp2); 
        }
    }
}