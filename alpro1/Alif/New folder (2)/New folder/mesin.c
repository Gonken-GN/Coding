#include "nilai.h"

char nilai(int n) {
	char huruf;
	if(n <= 100 && n >= 90) {
		huruf = 'A';
	} else if(n <= 89 && n >= 80) {
		huruf = 'B';
	} else if(n <= 79 && n >= 70) {
		huruf = 'C';
	} else if(n <= 69 && n >= 60) {
		huruf = 'D';
	} else if(n <= 59 && n >= 0) {
		huruf = 'E';
	}
	return huruf;
}