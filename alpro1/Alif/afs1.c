#include <stdio.h>

int main(){
	
	int n, i, c = 0;
	scanf("%d", &n);
	float num[n];
	
	for(i = 0; i < n; i++){
		
		int depan, fint, pair;
		float belakang;
		
		scanf("%f", &num[i]);
		depan = num[i];
		
		belakang = (num[i] - depan) *100+.5;
		fint = belakang;
		pair = depan % fint;
		
		if(pair == 0){
			
			c++;
			
		}	
		
	}
	
	if(c >= 3){
		
		printf("yes\n");
		
	}
	else{
		
		printf("no\n");
		
	}
	
	return 0;
}