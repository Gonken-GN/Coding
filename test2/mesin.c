#include "header.h"
		/*saya Hannifah Al Humaira 
		mengerjakan tp dalam mata kuliah Algoritma 
		dan Pemograman II untuk keberkahanNya maka saya 
		tidak melakukan kecurangan seperti yang telah 
		dispesifikasikan. Aamiin*/
		
void fibo(int i, int j, int c, int arr[100], int hasil[100]){

	if(c==0){
		arr[i]=a[0];
		
		}else if(c==1){
		arr[i]=b[1];
		
		}else if(j<c){
		b[j]=(2*b[j-1]) + (b[j-2]*b[j-2]);
		fibo(i, j+1, c, arr, hasil);
		}else if(j==c){
		arr[i]= (2*b[j-1]) + (b[j-2]*b[j-2]);
		
	}
}