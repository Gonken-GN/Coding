#include <stdio.h>
int main () {
	int desi=0, biner, n, rem, temp = 1;
	int i, j;
	scanf("%d", &n);
	int x[n];
	printf("Masukkan nilai biner\n");
	for(i=0;i<n;i++){
		scanf("%d", &x[i]);
	}
	j=0;
	while(x[i] != 0){
		rem = biner % 10;
		x[j] = x[i]+ rem*temp;
		biner = biner / 10;
		temp *= 2;
		j++;
	}
	printf("Nilai desimal %d\n", x[i]);
}
j=pb-1; //index biner dari belakang
        k=0; //pangkat
        while(j>=0){
            temp = 2;
            if(biner[j]=='1'){
                //proses perhitungan 2 pangkat k
                if(k==0){
                    temp = 1;
                }else{
                    l=1;
                    while(l<k){
                        temp = temp * 2;
                        l++;
                    } 
                }
                
            }else{
                temp = 0;
            }
            //semua hasil pemangkatan ditambahkan ke desimal
            desimal += temp;
            k++;
            j--;
        }