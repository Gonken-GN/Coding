#include <stdio.h>
#include <string.h>
int main (){
	int i, j, k = 0;
	int desimal = 0;
	char str[100];
	scanf("%s", str);
	for(i=strlen(str)-1;i>=0;i--){
		int temp = 2;
		if(str[i] == '1'){
			if(k == 0){
				temp = 1;
			}else{
				int l=1;
				while(l<k){
					temp = temp * 2;
					l++;
				}
			}
		}else{
			temp = 0;
		}
		desimal += temp;
		k++;
	}
        printf("%d\n", desimal);
	return 0;
}