#include <stdio.h>
#include <string.h>
int main () {
	char baru[50];
	scanf("%s", baru);
	int mundur = strlen(baru);
	int i, j;
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
	return 0;
}