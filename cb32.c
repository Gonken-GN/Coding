#include<stdio.h>

int a[100];
int b[100];
int c; //indeks
int arr[100];
int hasil[100];
int n; //banyak bakteri

void fibo(int i, int j, int c, int arr[100], int hasil[100]);

int main(){

	int i;
	int j; //interator
	j=2;
	
	scanf("%d", &n);

	for(i=0; i<n; i++){
		scanf("%d", &a[i]); //meminta masukan user untuk banyak bakteri pada jam ke 0
		scanf("%d", &b[i]); //meminta masukan user untuk banyak bakteri pada jam ke 1
		scanf("%d", &c); //meminta masukan jam yang akan dicari jumlah bakterinya
	fibo(i,j, c,arr,hasil);
	}
	for(i=0;i<n;i++){
		printf("%d\n", arr[i]);
	}

	return 0;

}


void fibo(int i, int j, int c, int arr[100], int hasil[100]){

	if(c==0){
		arr[i]=b[0];
		
	}else if(c==1){
		arr[i]=b[1];
		
	}else if(j<c){
		b[j]=(2*b[j-1]) + (b[j-2]*b[j-2]);
		fibo(i, j+1, c, arr, hasil);
	}else if(j==c){
		arr[i]= (2*b[j-1]) + (b[j-2]*b[j-2]);
		
	}
}