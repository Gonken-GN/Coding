#include <stdio.h>
#include <string.h>
int main () {
	char str[50];
	int i, j, k;
	char kunc[50];
	i=0;
	while(str[i-1] != '|'){
		scanf("%c", &str[i]);
		i++;
	}
	str[i-1] = '\0';
	scanf("%s", &kunc);
	char baru[100];
    i = 0;
    int a = 0;
    int b = 0;
    while(i < strlen(str)) {
        if(str[i] == kunc[0]){
        j = 0;
        b=0;
        while(j < strlen(kunc)) {
            if(str[i+j] == kunc[j]) {
                b++;
            } 
            j++;
        }
        if(b == strlen(kunc)){
        	j=0;
            while(j<strlen(kunc)){
                j++;
                i++;
             
                } 
            }else if (b<strlen(kunc)){
                baru[a] = str[i];
                a++;
                i++;
            }
        }else if(str[i] != kunc[0]){
        baru[a] = str[i];
        b++;
        i++;
        a++;
        }
    }
    baru[a] = '\0';
    printf("%d\n", strlen(baru));

    if(strlen(baru) == 0) {
        printf("=== Kalimat Hilang ===\n");
    } else if( strlen(baru) != 0) {
        printf("Tanpa kata kunci: %s\n", baru);
        printf("\n");
        int mundur = strlen(baru);
    if(strlen(baru) % 2 == 1){
    	i=0;
    	while(i<strlen(baru)/2){
    		j=0;
    		while(j<i){
    			printf(" ");
    			j++;
    		}
    		printf("%c", baru[i]);//menampilkan setengah kata dari string dimulai dari awal kata string hingga setengah panjang string baru
    		j=i;
    		while(j<strlen(baru)/2){
    			printf(" ");
    			j++;
    		}
    		j=i;
    		while(j<(strlen(baru)/2)-1){
    			printf(" ");
    			j++;
    		}
    		i++;
    		printf("%c", baru[mundur-1]);//menampilkan setengah kata dari string baru dimulai dari akhir kata string baru hingga setengah panjang string baru -1
            printf("\n");
            mundur--; 
    	}
    	i=0;
    	while(i<strlen(baru)/2){
    		printf(" ");
    		i++;
    	}
    	printf("%c\n", baru[strlen(baru)/2]);//menampilkan satu huruf dari indeks kesetengah dari panjang string baru

    	mundur = strlen(baru)/2-1;
    	i=(strlen(baru)/2)+1;
    	while(i<strlen(baru)){
    		j=i;
    		while(j<strlen(baru)-1){
    			printf(" ");
    			j++;
    		}
    		printf("%c", baru[mundur]);
    		j=(strlen(baru)/2);
    		while(j<i){
    			printf(" ");
    			j++;
    		}
    		j=(strlen(baru)/2);
    		while(j<i-1){
    			printf(" ");
    			j++;
    		}
    		printf("%c", baru[i]);
            printf("\n");
            mundur--;
    		i++;
    	}
    } else if(strlen(baru) % 2 == 0){
    	mundur = strlen(baru);
    	i=0;
    	while(i<(strlen(baru)/2)-1){
    		j=0;
    		while(j<i){
    			printf(" ");
    			j++;
    		}
    		printf("%c", baru[i]);
    		j=i;
    		while(j<(strlen(baru)/2)-1){
    			printf(" ");
    			j++;
    		}
    		j=i;
    		while(j<(strlen(baru)/2)-1){
    			printf(" ");
    			j++;
    		}
    		i++;
    		printf("%c", baru[mundur-1]);
            printf("\n");
            mundur--;
    	}
    	i=0;
    	while(i<(strlen(baru)/2)-1){
    		printf(" ");
    		i++;
    	}
    	printf("%c", baru[strlen(baru)/2-1]);
        printf("%c\n", baru[strlen(baru)/2]);
        mundur = strlen(baru)/2-2;
        i=(strlen(baru)/2)+1;
        while(i<strlen(baru)){
        	j=i;
        	while(j<strlen(baru)-1){
        		printf(" ");
        		j++;
        	}
        	printf("%c", baru[mundur]);
        	j=(strlen(baru)/2)-1;
        	while(j<i-1){
        		printf(" ");
        		j++;
        	}
        	j=(strlen(baru)/2)-1;
        	while(j<i-1){
        		printf(" ");
        		j++;
        	}
        	i++;
        	printf("%c", baru[i-1]);
            printf("\n");
            mundur--;
        }
    }
   }
	return 0;
/*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi TP6 Password Rahasia Perusahaan While (PRKW2020) dalam mata kuliah Alpro 1
 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
}