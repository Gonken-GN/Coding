#include <stdio.h>
int main () {
	int n, i;
	scanf("%d", &n);
	int x[n];

	for(i=0;i<n;i++){
		scanf("%d", &x[i]);
	}
	int ada = x[i];
	int count = 0;
	int j;
	while(i<n){
		if(x[i] % 2 == 1){
			count = 1;
		}
		i++;
	}
	if(count == 1){
		printf("Ada kelipatan\n");
	} else {
		printf("Tidak ada kelipatan\n");
	}
	return 0;
}