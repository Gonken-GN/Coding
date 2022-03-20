#include "header.h"
void fibo(int i, int j, int c){

	if(c==0){
		arr[i]=b[0];
		
	}else if(c==1){
		arr[i]=b[1];
		
	}else if(j<c){
		b[j]=(2*b[j-1]) + (b[j-2]*b[j-2]);
		fibo(i, j+1, c);
	}else if(j=c){
		arr[i] = (2*b[j-1]) + (b[j-2]*b[j-2]);
	}
}
