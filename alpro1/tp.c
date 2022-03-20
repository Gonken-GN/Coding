#include <stdio.h>
#include <string.h>

int main () {

    char masukan[100];
    scanf("%s", masukan);
    char simpan[100];
    char key[100];

    int i = 0;
    i = 0;
    int x = 0;
    while(i < strlen(masukan)) {
        if(masukan[i] != '|') {
            simpan[x] = masukan[i];
        } else if(masukan[i] == '|') {
            break;
        }
        i++;
        x++;
    }

    i = x+1;
    int y = 0;
    while(i < strlen(masukan)) {
        key[y] = masukan[i];
        i++;
        y++;
    }

    simpan[x] = '\0';
    key[y] = '\0';

    printf("%s %s\n", simpan, key);

    char baru[100];
    i = 0;
    int j;
    int count;
    int temp;
    int a = 0;
    int b = 0;
    int total_count = 0;
    while(i < strlen(simpan)) {
        j = 0;
        count = 0;
        while(j < strlen(key)) {
            if(simpan[i+j] == key[j]) {
                count++;
            } 
            j++;
        }
        total_count = total_count + count;
        if(count == strlen(key)) {
            i = i + (count-1);
            b = i + 1;
        }
        baru[a] = simpan[b];
        b++;
        i++;
        printf("%d\n", i);
        a++;
    }
    baru[a] = '\0';

    if(total_count == strlen(simpan)) {
        printf("Kosong\n");
    } else {
        printf("%s\n", baru);
    }

    int mundur = strlen(baru);
    if(strlen(baru) % 2 == 1) {
        for(i=0;i<strlen(baru)/2;i++) {
            for(j=0;j<i;j++) {
                printf(" ");
            }
            printf("%c", baru[i]);
            for(j=i;j<strlen(baru)/2;j++) {
                printf(" ");
            }
            for(j=i;j<(strlen(baru)/2)-1;j++) {
                printf(" ");
            }
            printf("%c", baru[mundur-1]);
            printf("\n");
            mundur--;
        }

        for(i=0;i<strlen(baru)/2;i++) {
            printf(" ");
        }
        printf("%c\n", baru[strlen(baru)/2]);

        mundur = strlen(baru)/2-1;
        for(i=(strlen(baru)/2)+1;i<strlen(baru);i++) {
            for(j=i;j<strlen(baru)-1;j++) {
                printf(" ");
            }
            printf("%c", baru[mundur]);
            for(j=(strlen(baru)/2);j<i;j++) {
                printf(" ");
            }
            for(j=(strlen(baru)/2);j<i-1;j++) {
                printf(" ");
            }
            printf("%c", baru[i]);
            printf("\n");
            mundur--;
        }
    } else if(strlen(baru) % 2 == 0) {
        mundur = strlen(baru);
        for(i=0;i<(strlen(baru)/2)-1;i++) {
            for(j=0;j<i;j++) {
                printf(" ");
            }
            printf("%c", baru[i]);
            for(j=i;j<(strlen(baru)/2)-1;j++) {
                printf(" ");
            }
            for(j=i;j<(strlen(baru)/2)-1;j++) {
                printf(" ");
            }
            printf("%c", baru[mundur-1]);
            printf("\n");
            mundur--;
        }
        for(i=0;i<(strlen(baru)/2)-1;i++) {
            printf(" ");
        }
        printf("%c", baru[strlen(baru)/2-1]);
        printf("%c\n", baru[strlen(baru)/2]);
        mundur = strlen(baru)/2-2;
        for(i=(strlen(baru)/2)+1;i<strlen(baru);i++) {
            for(j=i;j<strlen(baru)-1;j++) {
                printf(" ");
            }
            printf("%c", baru[mundur]);
            for(j=(strlen(baru)/2)-1;j<i-1;j++) {
                printf(" ");
            }
            for(j=(strlen(baru)/2)-1;j<i-1;j++) {
                printf(" ");
            }
            printf("%c", baru[i]);
            printf("\n");
            mundur--;
        }
    }
    

    return 0;
}