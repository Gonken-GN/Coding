#include <stdio.h>
#include <string.h>
int main () {
	char str[50];
	char str2[50];
	scanf("%s", &str);
	int i, jumlah = 0;
	for(i=0;i<strlen(str);i++){
		if((str[i] == '1') || (str[i] == '2') || (str[i] == '3') 
			|| (str[i] == '4') || (str[i] == '5') || (str[i] == '6') || (str[i] == '7') || (str[i] == '8')
			|| (str[i] == '9') || (str[i] == '0')){
			jumlah++;
		}
	}
	printf("%d\n", jumlah);
	return 0;
}