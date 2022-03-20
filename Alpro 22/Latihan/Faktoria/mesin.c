#include "header.h"
long long int faktorial(int a) {
	if(a == 0 || a == 1){
		return 1;
	}else{
		return a*faktorial(a-1);
	}
}