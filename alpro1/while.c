#include <stdio.h>
int main () {
	 int n, i, total = 0, cek = 0;
	 scanf("%d", &n);
	 int arr[n];

	 for(i=0;i<n;i++){
	 	scanf("%d", &arr[i]);
	 }

	 i = 0;
	 while(i<n && cek == 0){
	 	if(arr[i] >= 90){
	 		cek = 1;
	 	}
	 	i++;
	 }
	 if(cek == 1){
	 	printf("Terdapat nilai yang lebih dari 90\n");
	 } else {
	 	printf("Tidak terdapat nilai yang lebih dari 90\n");
	 }
	 return 0;
}