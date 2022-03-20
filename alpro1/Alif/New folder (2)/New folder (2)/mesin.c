#include "check.h"

int check(char arr[101]) {
	if(strlen(arr) % 5 == 0) {
		return 1;
	}
	return 0;
}