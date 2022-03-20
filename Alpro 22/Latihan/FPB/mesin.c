#include "header.h"
int fpb(int a, int b) {
	int sisa = a % b;

	a = b;
	if(sisa > 0) {
		b = sisa;
	}

	if(sisa == 0) {
		return b;
	} else {
		return fpb(a, b); 
	}

}