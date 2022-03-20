 #include<stdio.h>

int a[100];
int b[100];
int c[100];
int arr[100];
int hasil[100];
int n; //banyak bakteri

void fibo(int a[100], int b[100], int c[100], int arr[100], int hasil[100]);

int main(){

	int i,j;
	
	scanf("%d", &n);
	int temp;
	for(i=0; i<n; i++){
		scanf("%d", &a[i]); //meminta masukan user untuk banyak bakteri pada jam ke 0
		scanf("%d", &b[i]); //meminta masukan user untuk banyak bakteri pada jam ke 1
		scanf("%d", &c[i]); //meminta masukan jam yang akan dicari jumlah bakterinya
		fibo(a,b,c,arr,hasil);
	}
	


	return 0;

}


void fibo(int a[100], int b[100], int c[100], int arr[100], int hasil[100]){

	int i, j;
	for(i=0;i<n;i++){
		
		arr[0]=a[i];
		arr[1]=b[i];
		for(j=2;j<c[i];j++){
			arr[j]= (2*arr[j-1]) + (arr[j-2]*arr[j-2]);
		}	
	}

	for(i=0;i<n;i++){
		printf("%d\n", arr[i+2]);
		
}
	fibo(a,b,c,arr,hasil);
	
}