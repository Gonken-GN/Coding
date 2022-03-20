#include<stdio.h>
#include<string.h>
int main () {
	char str[50];
	int i, j = 0;
	char an;
	scanf("%s", str);
	int pan = strlen(str);
	for(i=0;i<pan;i++){
		if((str[i] == 'a') || (str[i] == 'i') || (str[i] == 'u')
			|| (str[i] == 'e') || (str[i] == 'o')){
			an = i;
			 if(j>9){
			j= 1;
				}
			printf("%d", j);
			}else {
				printf("%c", str[i]);
			}
		j++;
	}
	return 0;
}